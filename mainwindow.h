#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class CustomTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    explicit CustomTextEdit(QWidget *parent = nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

signals:
    void fileDropped(const QString &filePath);
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    // 文件操作
    void on_action_new_file_triggered();
    void on_action_open_file_triggered();
    void on_action_save_file_triggered();
    void on_action_save_as_triggered();
    void on_action_print_triggered();

    // 编辑操作
    void on_action_paste_triggered();
    void on_action_cut_triggered();
    void on_action_copy_triggered();
    void on_action_undo_triggered();
    void on_action_redo_triggered();

    // 格式操作
    void on_action_bold_triggered();
    void on_action_italics_triggered();
    void on_action_underline_triggered();
    void on_action_font_triggered();

    // 其他操作
    void on_action_about_triggered();
    void on_action_exit_triggered();

    void onFileDropped(const QString &filePath);

private:
    Ui::MainWindow *ui;
    QString current_file;
    CustomTextEdit *textEdit;

    void openFile(const QString &filePath);
    void resetTextFormat();
    void setupConnections();
};
#endif // MAINWINDOW_H
