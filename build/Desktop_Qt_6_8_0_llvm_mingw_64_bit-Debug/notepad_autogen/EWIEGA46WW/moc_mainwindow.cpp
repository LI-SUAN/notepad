/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCustomTextEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCustomTextEditENDCLASS = QtMocHelpers::stringData(
    "CustomTextEdit",
    "fileDropped",
    "",
    "filePath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCustomTextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject CustomTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSCustomTextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCustomTextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCustomTextEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CustomTextEdit, std::true_type>,
        // method 'fileDropped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void CustomTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileDropped((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomTextEdit::*)(const QString & );
            if (_t _q_method = &CustomTextEdit::fileDropped; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *CustomTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCustomTextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int CustomTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CustomTextEdit::fileDropped(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_action_new_file_triggered",
    "",
    "on_action_open_file_triggered",
    "on_action_save_file_triggered",
    "on_action_save_as_triggered",
    "on_action_print_triggered",
    "on_action_paste_triggered",
    "on_action_cut_triggered",
    "on_action_copy_triggered",
    "on_action_undo_triggered",
    "on_action_redo_triggered",
    "on_action_bold_triggered",
    "on_action_italics_triggered",
    "on_action_underline_triggered",
    "on_action_font_triggered",
    "on_action_about_triggered",
    "on_action_exit_triggered",
    "dragEnterEvent",
    "QDragEnterEvent*",
    "event",
    "dropEvent",
    "QDropEvent*",
    "onFileDropped",
    "filePath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x08,    1 /* Private */,
       3,    0,  129,    2, 0x08,    2 /* Private */,
       4,    0,  130,    2, 0x08,    3 /* Private */,
       5,    0,  131,    2, 0x08,    4 /* Private */,
       6,    0,  132,    2, 0x08,    5 /* Private */,
       7,    0,  133,    2, 0x08,    6 /* Private */,
       8,    0,  134,    2, 0x08,    7 /* Private */,
       9,    0,  135,    2, 0x08,    8 /* Private */,
      10,    0,  136,    2, 0x08,    9 /* Private */,
      11,    0,  137,    2, 0x08,   10 /* Private */,
      12,    0,  138,    2, 0x08,   11 /* Private */,
      13,    0,  139,    2, 0x08,   12 /* Private */,
      14,    0,  140,    2, 0x08,   13 /* Private */,
      15,    0,  141,    2, 0x08,   14 /* Private */,
      16,    0,  142,    2, 0x08,   15 /* Private */,
      17,    0,  143,    2, 0x08,   16 /* Private */,
      18,    1,  144,    2, 0x08,   17 /* Private */,
      21,    1,  147,    2, 0x08,   19 /* Private */,
      23,    1,  150,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_action_new_file_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_open_file_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_save_file_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_save_as_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_print_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_paste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_cut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_copy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_undo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_redo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_bold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_italics_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_underline_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_font_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_about_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_exit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dragEnterEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent *, std::false_type>,
        // method 'dropEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDropEvent *, std::false_type>,
        // method 'onFileDropped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_action_new_file_triggered(); break;
        case 1: _t->on_action_open_file_triggered(); break;
        case 2: _t->on_action_save_file_triggered(); break;
        case 3: _t->on_action_save_as_triggered(); break;
        case 4: _t->on_action_print_triggered(); break;
        case 5: _t->on_action_paste_triggered(); break;
        case 6: _t->on_action_cut_triggered(); break;
        case 7: _t->on_action_copy_triggered(); break;
        case 8: _t->on_action_undo_triggered(); break;
        case 9: _t->on_action_redo_triggered(); break;
        case 10: _t->on_action_bold_triggered(); break;
        case 11: _t->on_action_italics_triggered(); break;
        case 12: _t->on_action_underline_triggered(); break;
        case 13: _t->on_action_font_triggered(); break;
        case 14: _t->on_action_about_triggered(); break;
        case 15: _t->on_action_exit_triggered(); break;
        case 16: _t->dragEnterEvent((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 17: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 18: _t->onFileDropped((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
