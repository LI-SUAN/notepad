#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFontDialog>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextCursor>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QFileInfo>
#include <QDebug>
#include <QUrl>

CustomTextEdit::CustomTextEdit(QWidget *parent) : QTextEdit(parent) {}

void CustomTextEdit::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls() || event->mimeData()->hasText()) {
        event->acceptProposedAction();
    }
}

void CustomTextEdit::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();

    if (mimeData->hasUrls()) {
        QList<QUrl> urlList = mimeData->urls();
        if (!urlList.isEmpty()) {
            QString filePath = urlList.first().toLocalFile();
            QFileInfo fileInfo(filePath);
            if (fileInfo.isFile() && fileInfo.exists()) {
                emit fileDropped(filePath);
                event->acceptProposedAction();
                return;
            }
        }
    }

    QTextEdit::dropEvent(event);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    // 创建自定义的 TextEdit
    textEdit = new CustomTextEdit(this);

    // 创建一个垂直布局
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(textEdit);

    // 设置中心部件的布局
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(textEdit, &CustomTextEdit::fileDropped, this, &MainWindow::onFileDropped);

    // 允许整个窗口接受拖放
    setAcceptDrops(true);

    this->setMinimumSize(400, 300);  // 设置最小尺寸
    this->show();  // 强制显示窗口

    qDebug() << "MainWindow constructor finished";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_new_file_triggered()
{
    if (maybeSave()) {
        textEdit->clear();
        setCurrentFile("");
    }
}

void MainWindow::on_action_open_file_triggered()
{
    if (maybeSave()) {
        QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "", 
                                                        tr("文本文件 (*.txt);;所有文件 (*)"));
        if (!fileName.isEmpty()) {
            loadFile(fileName);
        }
    }
}

void MainWindow::on_action_save_file_triggered()
{
    if (currentFile.isEmpty()) {
        on_action_save_as_triggered();
    } else {
        saveFile(currentFile);
    }
}

void MainWindow::on_action_save_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"), "",
                                                    tr("文本文件 (*.txt);;所有文件 (*)"));
    if (!fileName.isEmpty()) {
        if (!fileName.endsWith(".txt", Qt::CaseInsensitive)) {
            fileName += ".txt";
        }
        saveFile(fileName);
    }
}

bool MainWindow::maybeSave()
{
    if (!textEdit->document()->isModified())
        return true;
    const QMessageBox::StandardButton ret
        = QMessageBox::warning(this, tr("应用程序"),
                               tr("文档已被修改。\n"
                                  "是否保存更改？"),
                               QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    switch (ret) {
    case QMessageBox::Save:
        on_action_save_file_triggered();
        return !textEdit->document()->isModified();
    case QMessageBox::Cancel:
        return false;
    default:
        break;
    }
    return true;
}

void MainWindow::loadFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("应用程序"),
                             tr("无法读取文件 %1:\n%2。")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }

    QTextStream in(&file);
    textEdit->setPlainText(in.readAll());
    setCurrentFile(fileName);
    statusBar()->showMessage(tr("文件已加载"), 2000);
}

bool MainWindow::saveFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("应用程序"),
                             tr("无法写入文件 %1:\n%2。")
                             .arg(fileName)
                             .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    out << textEdit->toPlainText();
    setCurrentFile(fileName);
    statusBar()->showMessage(tr("文件已保存"), 2000);
    return true;
}

void MainWindow::setCurrentFile(const QString &fileName)
{
    currentFile = fileName;
    textEdit->document()->setModified(false);
    setWindowModified(false);

    QString shownName = currentFile;
    if (currentFile.isEmpty())
        shownName = "未命名.txt";
    setWindowFilePath(shownName);
}

void MainWindow::on_action_paste_triggered()
{
    textEdit->paste();
}

void MainWindow::on_action_cut_triggered()
{
    textEdit->cut();
}

void MainWindow::on_action_copy_triggered()
{
    textEdit->copy();
}

void MainWindow::on_action_bold_triggered()
{
    QTextCharFormat fmt = textEdit->currentCharFormat();
    bool newBoldState = fmt.fontWeight() != QFont::Bold;
    fmt.setFontWeight(newBoldState ? QFont::Bold : QFont::Normal);
    textEdit->mergeCurrentCharFormat(fmt);
    ui->action_bold->setChecked(newBoldState);
}

void MainWindow::on_action_italics_triggered()
{
    QTextCharFormat fmt = textEdit->currentCharFormat();
    fmt.setFontItalic(!fmt.fontItalic());
    textEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_action_underline_triggered()
{
    QTextCharFormat fmt = textEdit->currentCharFormat();
    fmt.setFontUnderline(!fmt.fontUnderline());
    textEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_action_font_triggered()
{
    qDebug() << "字体对话框即将打开"; // 添加这行调试输出

    bool ok;
    QFont font = QFontDialog::getFont(&ok, textEdit->font(), this);
    if (ok) {
        textEdit->setFont(font);
        qDebug() << "新字体已应用：" << font.family() << "，大小：" << font.pointSize(); // 添加这行调试输出
    } else {
        qDebug() << "字体选择被取消"; // 添加这行调试输出
    }
}

void MainWindow::on_action_about_triggered()
{
    QMessageBox::about(this, tr("关于"), tr("这一个简单的文本编辑器，使用Qt开发。"));
}

void MainWindow::on_action_undo_triggered()
{
    textEdit->undo();
}

void MainWindow::on_action_redo_triggered()
{
    textEdit->redo();
}

void MainWindow::on_action_exit_triggered()
{
    if (textEdit->document()->isModified()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("未保存的更改"),
                                      tr("文档有未保存的更改。是否保存？"),
                                      QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if (reply == QMessageBox::Yes) {
            on_action_save_file_triggered();
        } else if (reply == QMessageBox::Cancel) {
            return;
        }
    }
    QApplication::quit();
}

void MainWindow::on_action_print_triggered()
{
    // 为了防止重复触发，我们可以在这里添加一个简单的防抖机制
    static QElapsedTimer cooldown;
    if (cooldown.isValid() && cooldown.elapsed() < 1000) {
        return;  // 如果距离上次触发不到1秒，则忽略这次触发
    }
    cooldown.start();

    QPrinter printer;
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted) {
        QTextDocument *document = textEdit->document();
        document->print(&printer);
    }
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();
    if (mimeData->hasUrls()) {
        QList<QUrl> urlList = mimeData->urls();
        if (!urlList.isEmpty()) {
            QString filePath = urlList.first().toLocalFile();
            openFile(filePath);
        }
    }
    event->acceptProposedAction();
}

void MainWindow::openFile(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("错误"), tr("无法打开文件: %1").arg(file.errorString()));
        return;
    }

    QTextStream in(&file);
    QString fileContent = in.readAll();
    textEdit->clear();
    textEdit->setPlainText(fileContent);
    resetTextFormat();

    file.close();
    currentFile = filePath;  // 使用 currentFile 而不是 current_file
    textEdit->document()->setModified(false);
    
    setWindowTitle(tr("%1 - 文本编辑器").arg(QFileInfo(filePath).fileName()));
}

void MainWindow::onFileDropped(const QString &filePath)
{
    openFile(filePath);
}

void MainWindow::resetTextFormat()
{
    QTextCharFormat format;
    format.setFontWeight(QFont::Normal);
    format.setFontItalic(false);
    format.setFontUnderline(false);
    textEdit->setCurrentCharFormat(format);
    textEdit->setFont(QFont());
}
