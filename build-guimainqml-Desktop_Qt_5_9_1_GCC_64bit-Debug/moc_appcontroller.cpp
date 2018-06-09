/****************************************************************************
** Meta object code from reading C++ file 'appcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../guimainqml/appcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppController_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppController_t qt_meta_stringdata_AppController = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AppController"
QT_MOC_LITERAL(1, 14, 12), // "stateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "objectName"
QT_MOC_LITERAL(4, 39, 15), // "navigateForward"
QT_MOC_LITERAL(5, 55, 16), // "navigateBackward"
QT_MOC_LITERAL(6, 72, 11), // "navPrevious"
QT_MOC_LITERAL(7, 84, 7), // "navNext"
QT_MOC_LITERAL(8, 92, 12), // "stateMachine"
QT_MOC_LITERAL(9, 105, 10), // "firstState"
QT_MOC_LITERAL(10, 116, 11), // "secondState"
QT_MOC_LITERAL(11, 128, 10), // "thirdState"
QT_MOC_LITERAL(12, 139, 3) // "pop"

    },
    "AppController\0stateChanged\0\0objectName\0"
    "navigateForward\0navigateBackward\0"
    "navPrevious\0navNext\0stateMachine\0"
    "firstState\0secondState\0thirdState\0pop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   44,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QObjectStar, 0x00095401,
       9, QMetaType::QObjectStar, 0x00095401,
      10, QMetaType::QObjectStar, 0x00095401,
      11, QMetaType::QObjectStar, 0x00095401,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void AppController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppController *_t = static_cast<AppController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->navigateForward(); break;
        case 2: _t->navigateBackward(); break;
        case 3: _t->navPrevious(); break;
        case 4: _t->navNext(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppController::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AppController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppController::navigateForward)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AppController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppController::navigateBackward)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AppController *_t = static_cast<AppController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->stateMachine(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->firstState(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->secondState(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->thirdState(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->pop(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AppController *_t = static_cast<AppController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setPop(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AppController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppController.data,
      qt_meta_data_AppController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppController.stringdata0))
        return static_cast<void*>(const_cast< AppController*>(this));
    return QObject::qt_metacast(_clname);
}

int AppController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppController::stateChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppController::navigateForward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppController::navigateBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
