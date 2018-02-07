/****************************************************************************
** Meta object code from reading C++ file 'rosgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "guivigir/rosgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ROSGUI_t {
    QByteArrayData data[21];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ROSGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ROSGUI_t qt_meta_stringdata_ROSGUI = {
    {
QT_MOC_LITERAL(0, 0, 6), // "ROSGUI"
QT_MOC_LITERAL(1, 7, 6), // "openCD"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 6), // "openCI"
QT_MOC_LITERAL(4, 22, 6), // "openDH"
QT_MOC_LITERAL(5, 29, 15), // "updateSpinboxes"
QT_MOC_LITERAL(6, 45, 12), // "updateSlider"
QT_MOC_LITERAL(7, 58, 12), // "updateDialer"
QT_MOC_LITERAL(8, 71, 16), // "updateSpinboxesD"
QT_MOC_LITERAL(9, 88, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 112, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 136, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(12, 160, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(13, 184, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(14, 208, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(15, 235, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(16, 259, 7), // "on_2DOF"
QT_MOC_LITERAL(17, 267, 7), // "on_3DOF"
QT_MOC_LITERAL(18, 275, 7), // "on_4DOF"
QT_MOC_LITERAL(19, 283, 7), // "on_5DOF"
QT_MOC_LITERAL(20, 291, 7) // "on_6DOF"

    },
    "ROSGUI\0openCD\0\0openCI\0openDH\0"
    "updateSpinboxes\0updateSlider\0updateDialer\0"
    "updateSpinboxesD\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionExit_triggered\0on_2DOF\0on_3DOF\0"
    "on_4DOF\0on_5DOF\0on_6DOF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ROSGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ROSGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ROSGUI *_t = static_cast<ROSGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openCD(); break;
        case 1: _t->openCI(); break;
        case 2: _t->openDH(); break;
        case 3: _t->updateSpinboxes(); break;
        case 4: _t->updateSlider(); break;
        case 5: _t->updateDialer(); break;
        case 6: _t->updateSpinboxesD(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_4_clicked(); break;
        case 10: _t->on_actionOpen_triggered(); break;
        case 11: _t->on_actionSave_triggered(); break;
        case 12: _t->on_actionSave_as_triggered(); break;
        case 13: _t->on_actionExit_triggered(); break;
        case 14: _t->on_2DOF(); break;
        case 15: _t->on_3DOF(); break;
        case 16: _t->on_4DOF(); break;
        case 17: _t->on_5DOF(); break;
        case 18: _t->on_6DOF(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ROSGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ROSGUI.data,
      qt_meta_data_ROSGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ROSGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ROSGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ROSGUI.stringdata0))
        return static_cast<void*>(const_cast< ROSGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ROSGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
