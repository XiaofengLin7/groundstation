/****************************************************************************
** Meta object code from reading C++ file 'QtGuiApplication1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiApplication1/QtGuiApplication1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiApplication1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_uav_Pos_Info_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_uav_Pos_Info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_uav_Pos_Info_t qt_meta_stringdata_uav_Pos_Info = {
    {
QT_MOC_LITERAL(0, 0, 12), // "uav_Pos_Info"
QT_MOC_LITERAL(1, 13, 11), // "dataChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8) // "jsonData"

    },
    "uav_Pos_Info\0dataChanged\0\0jsonData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uav_Pos_Info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,

 // properties: name, type, flags
       3, QMetaType::QJsonObject, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void uav_Pos_Info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uav_Pos_Info *_t = static_cast<uav_Pos_Info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (uav_Pos_Info::*_t)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&uav_Pos_Info::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        uav_Pos_Info *_t = static_cast<uav_Pos_Info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJsonObject*>(_v) = _t->m_jsonData; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        uav_Pos_Info *_t = static_cast<uav_Pos_Info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_jsonData != *reinterpret_cast< QJsonObject*>(_v)) {
                _t->m_jsonData = *reinterpret_cast< QJsonObject*>(_v);
                Q_EMIT _t->dataChanged(_t->m_jsonData);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject uav_Pos_Info::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uav_Pos_Info.data,
      qt_meta_data_uav_Pos_Info,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *uav_Pos_Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uav_Pos_Info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_uav_Pos_Info.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int uav_Pos_Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void uav_Pos_Info::dataChanged(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QtGuiApplication1_t {
    QByteArrayData data[10];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiApplication1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiApplication1_t qt_meta_stringdata_QtGuiApplication1 = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtGuiApplication1"
QT_MOC_LITERAL(1, 18, 4), // "test"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "ser_open"
QT_MOC_LITERAL(4, 33, 9), // "ser_close"
QT_MOC_LITERAL(5, 43, 20), // "serialPort_readyRead"
QT_MOC_LITERAL(6, 64, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(7, 88, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(8, 110, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(9, 132, 22) // "on_clearButton_clicked"

    },
    "QtGuiApplication1\0test\0\0ser_open\0"
    "ser_close\0serialPort_readyRead\0"
    "on_searchButton_clicked\0on_openButton_clicked\0"
    "on_sendButton_clicked\0on_clearButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiApplication1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void QtGuiApplication1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiApplication1 *_t = static_cast<QtGuiApplication1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test(); break;
        case 1: _t->ser_open(); break;
        case 2: _t->ser_close(); break;
        case 3: _t->serialPort_readyRead(); break;
        case 4: _t->on_searchButton_clicked(); break;
        case 5: _t->on_openButton_clicked(); break;
        case 6: _t->on_sendButton_clicked(); break;
        case 7: _t->on_clearButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtGuiApplication1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtGuiApplication1.data,
      qt_meta_data_QtGuiApplication1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGuiApplication1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiApplication1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiApplication1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtGuiApplication1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
