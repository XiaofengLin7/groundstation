/****************************************************************************
** Meta object code from reading C++ file 'qwebengineview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Qt/Qt5.12.9/5.12.9/msvc2017_64/include/QtWebEngineWidgets/qwebengineview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebengineview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineView_t {
    QByteArrayData data[26];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineView_t qt_meta_stringdata_QWebEngineView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QWebEngineView"
QT_MOC_LITERAL(1, 15, 11), // "loadStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "loadProgress"
QT_MOC_LITERAL(4, 41, 8), // "progress"
QT_MOC_LITERAL(5, 50, 12), // "loadFinished"
QT_MOC_LITERAL(6, 63, 12), // "titleChanged"
QT_MOC_LITERAL(7, 76, 5), // "title"
QT_MOC_LITERAL(8, 82, 16), // "selectionChanged"
QT_MOC_LITERAL(9, 99, 10), // "urlChanged"
QT_MOC_LITERAL(10, 110, 14), // "iconUrlChanged"
QT_MOC_LITERAL(11, 125, 11), // "iconChanged"
QT_MOC_LITERAL(12, 137, 23), // "renderProcessTerminated"
QT_MOC_LITERAL(13, 161, 46), // "QWebEnginePage::RenderProcess..."
QT_MOC_LITERAL(14, 208, 17), // "terminationStatus"
QT_MOC_LITERAL(15, 226, 8), // "exitCode"
QT_MOC_LITERAL(16, 235, 4), // "stop"
QT_MOC_LITERAL(17, 240, 4), // "back"
QT_MOC_LITERAL(18, 245, 7), // "forward"
QT_MOC_LITERAL(19, 253, 6), // "reload"
QT_MOC_LITERAL(20, 260, 3), // "url"
QT_MOC_LITERAL(21, 264, 7), // "iconUrl"
QT_MOC_LITERAL(22, 272, 4), // "icon"
QT_MOC_LITERAL(23, 277, 12), // "selectedText"
QT_MOC_LITERAL(24, 290, 12), // "hasSelection"
QT_MOC_LITERAL(25, 303, 10) // "zoomFactor"

    },
    "QWebEngineView\0loadStarted\0\0loadProgress\0"
    "progress\0loadFinished\0titleChanged\0"
    "title\0selectionChanged\0urlChanged\0"
    "iconUrlChanged\0iconChanged\0"
    "renderProcessTerminated\0"
    "QWebEnginePage::RenderProcessTerminationStatus\0"
    "terminationStatus\0exitCode\0stop\0back\0"
    "forward\0reload\0url\0iconUrl\0icon\0"
    "selectedText\0hasSelection\0zoomFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       8,    0,   89,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,
      10,    1,   93,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,
      12,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QIcon,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095001,
      20, QMetaType::QUrl, 0x00095103,
      21, QMetaType::QUrl, 0x00495001,
      22, QMetaType::QIcon, 0x00495001,
      23, QMetaType::QString, 0x00095001,
      24, QMetaType::Bool, 0x00095001,
      25, QMetaType::QReal, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       6,
       7,
       0,
       0,
       0,

       0        // eod
};

void QWebEngineView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebEngineView *_t = static_cast<QWebEngineView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadStarted(); break;
        case 1: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->iconUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->iconChanged((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 8: _t->renderProcessTerminated((*reinterpret_cast< QWebEnginePage::RenderProcessTerminationStatus(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->stop(); break;
        case 10: _t->back(); break;
        case 11: _t->forward(); break;
        case 12: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebEngineView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::loadStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::loadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::loadFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::titleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::selectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::urlChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::iconUrlChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(const QIcon & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::iconChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QWebEngineView::*_t)(QWebEnginePage::RenderProcessTerminationStatus , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineView::renderProcessTerminated)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWebEngineView *_t = static_cast<QWebEngineView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->iconUrl(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->selectedText(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->zoomFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWebEngineView *_t = static_cast<QWebEngineView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 6: _t->setZoomFactor(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWebEngineView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QWebEngineView.data,
      qt_meta_data_QWebEngineView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebEngineView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebEngineView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebEngineView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QWebEngineView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWebEngineView::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWebEngineView::loadProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebEngineView::loadFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebEngineView::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWebEngineView::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QWebEngineView::urlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QWebEngineView::iconUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QWebEngineView::iconChanged(const QIcon & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QWebEngineView::renderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
