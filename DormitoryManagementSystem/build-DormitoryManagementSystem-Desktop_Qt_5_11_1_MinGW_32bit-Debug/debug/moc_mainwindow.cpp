/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DormitoryManagementSystem/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_pOpen_triggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_pClose_triggered"
QT_MOC_LITERAL(4, 51, 17), // "on_pAdd_triggered"
QT_MOC_LITERAL(5, 69, 20), // "on_startSort_clicked"
QT_MOC_LITERAL(6, 90, 25), // "on_searchView_textChanged"
QT_MOC_LITERAL(7, 116, 4), // "arg1"
QT_MOC_LITERAL(8, 121, 17), // "on_pNew_triggered"
QT_MOC_LITERAL(9, 139, 20), // "on_pDelete_triggered"
QT_MOC_LITERAL(10, 160, 19), // "on_downSort_clicked"
QT_MOC_LITERAL(11, 180, 7), // "checked"
QT_MOC_LITERAL(12, 188, 17), // "on_upsort_clicked"
QT_MOC_LITERAL(13, 206, 19), // "on_nameSort_clicked"
QT_MOC_LITERAL(14, 226, 18), // "on_numSort_clicked"
QT_MOC_LITERAL(15, 245, 18), // "on_docSort_clicked"
QT_MOC_LITERAL(16, 264, 18), // "on_pSave_triggered"
QT_MOC_LITERAL(17, 283, 18) // "on_pEdit_triggered"

    },
    "MainWindow\0on_pOpen_triggered\0\0"
    "on_pClose_triggered\0on_pAdd_triggered\0"
    "on_startSort_clicked\0on_searchView_textChanged\0"
    "arg1\0on_pNew_triggered\0on_pDelete_triggered\0"
    "on_downSort_clicked\0checked\0"
    "on_upsort_clicked\0on_nameSort_clicked\0"
    "on_numSort_clicked\0on_docSort_clicked\0"
    "on_pSave_triggered\0on_pEdit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pOpen_triggered(); break;
        case 1: _t->on_pClose_triggered(); break;
        case 2: _t->on_pAdd_triggered(); break;
        case 3: _t->on_startSort_clicked(); break;
        case 4: _t->on_searchView_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pNew_triggered(); break;
        case 6: _t->on_pDelete_triggered(); break;
        case 7: _t->on_downSort_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_upsort_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_nameSort_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_numSort_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_docSort_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_pSave_triggered(); break;
        case 13: _t->on_pEdit_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
