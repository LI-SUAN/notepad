/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new_file;
    QAction *action_open_file;
    QAction *action_save_file;
    QAction *action_save_as;
    QAction *action_paste;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_bold;
    QAction *action_italics;
    QAction *action_underline;
    QAction *action_font;
    QAction *action_about;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_exit;
    QAction *action_print;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/notes.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        action_new_file = new QAction(MainWindow);
        action_new_file->setObjectName("action_new_file");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/img/new-document.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_new_file->setIcon(icon1);
        action_new_file->setMenuRole(QAction::MenuRole::NoRole);
        action_open_file = new QAction(MainWindow);
        action_open_file->setObjectName("action_open_file");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/img/open-folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_open_file->setIcon(icon2);
        action_open_file->setMenuRole(QAction::MenuRole::NoRole);
        action_save_file = new QAction(MainWindow);
        action_save_file->setObjectName("action_save_file");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/img/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_save_file->setIcon(icon3);
        action_save_file->setMenuRole(QAction::MenuRole::NoRole);
        action_save_as = new QAction(MainWindow);
        action_save_as->setObjectName("action_save_as");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/img/download.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_save_as->setIcon(icon4);
        action_save_as->setMenuRole(QAction::MenuRole::NoRole);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName("action_paste");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/img/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_paste->setIcon(icon5);
        action_paste->setMenuRole(QAction::MenuRole::NoRole);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName("action_cut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/img/scissors.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_cut->setIcon(icon6);
        action_cut->setMenuRole(QAction::MenuRole::NoRole);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName("action_copy");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/img/copy-two-paper-sheets-interface-symbol.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_copy->setIcon(icon7);
        action_copy->setMenuRole(QAction::MenuRole::NoRole);
        action_bold = new QAction(MainWindow);
        action_bold->setObjectName("action_bold");
        action_bold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/img/bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_bold->setIcon(icon8);
        action_bold->setMenuRole(QAction::MenuRole::NoRole);
        action_italics = new QAction(MainWindow);
        action_italics->setObjectName("action_italics");
        action_italics->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/img/italic.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_italics->setIcon(icon9);
        action_italics->setMenuRole(QAction::MenuRole::NoRole);
        action_underline = new QAction(MainWindow);
        action_underline->setObjectName("action_underline");
        action_underline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/img/underline.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_underline->setIcon(icon10);
        action_underline->setMenuRole(QAction::MenuRole::NoRole);
        action_font = new QAction(MainWindow);
        action_font->setObjectName("action_font");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/img/font-adjustment.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_font->setIcon(icon11);
        action_font->setMenuRole(QAction::MenuRole::NoRole);
        action_about = new QAction(MainWindow);
        action_about->setObjectName("action_about");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/img/information-button.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_about->setIcon(icon12);
        action_about->setMenuRole(QAction::MenuRole::NoRole);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName("action_undo");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/img/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_undo->setIcon(icon13);
        action_undo->setMenuRole(QAction::MenuRole::NoRole);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName("action_redo");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/img/forward.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_redo->setIcon(icon14);
        action_redo->setMenuRole(QAction::MenuRole::NoRole);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName("action_exit");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/img/log-out.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_exit->setIcon(icon15);
        action_exit->setMenuRole(QAction::MenuRole::NoRole);
        action_print = new QAction(MainWindow);
        action_print->setObjectName("action_print");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/img/printer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_print->setIcon(icon16);
        action_print->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 20, 104, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action_new_file);
        menu->addAction(action_open_file);
        menu->addSeparator();
        menu->addAction(action_save_file);
        menu->addAction(action_save_as);
        menu->addSeparator();
        menu->addAction(action_print);
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_2->addAction(action_cut);
        menu_2->addAction(action_copy);
        menu_2->addAction(action_paste);
        menu_2->addSeparator();
        menu_2->addAction(action_bold);
        menu_2->addAction(action_italics);
        menu_2->addAction(action_underline);
        menu_2->addSeparator();
        menu_2->addAction(action_font);
        menu_3->addAction(action_about);
        toolBar->addAction(action_new_file);
        toolBar->addAction(action_open_file);
        toolBar->addAction(action_save_file);
        toolBar->addAction(action_save_as);
        toolBar->addSeparator();
        toolBar->addAction(action_font);
        toolBar->addAction(action_bold);
        toolBar->addAction(action_italics);
        toolBar->addAction(action_underline);
        toolBar->addSeparator();
        toolBar->addAction(action_undo);
        toolBar->addAction(action_redo);
        toolBar->addSeparator();
        toolBar->addAction(action_about);
        toolBar->addAction(action_exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\260\344\272\213\346\234\254", nullptr));
        action_new_file->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        action_new_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_open_file->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        action_open_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save_file->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        action_save_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save_as->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#if QT_CONFIG(shortcut)
        action_save_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        action_paste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        action_cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        action_copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_bold->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#if QT_CONFIG(shortcut)
        action_bold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_italics->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(shortcut)
        action_italics->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_underline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222", nullptr));
#if QT_CONFIG(shortcut)
        action_underline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        action_font->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        action_undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\345\233\236", nullptr));
#if QT_CONFIG(tooltip)
        action_undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\345\233\236", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_redo->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\346\222\244\345\233\236", nullptr));
#if QT_CONFIG(shortcut)
        action_redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action_print->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(shortcut)
        action_print->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
