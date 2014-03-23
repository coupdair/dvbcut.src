/****************************************************************************
** Meta object code from reading C++ file 'progressstatusbar.h'
**
** Created: Sun Mar 23 11:44:46 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "progressstatusbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressstatusbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_progressstatusbar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   19,   18,   18, 0x0a,
      45,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_progressstatusbar[] = {
    "progressstatusbar\0\0permille\0"
    "setprogress(int)\0clickedcancel()\0"
};

void progressstatusbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        progressstatusbar *_t = static_cast<progressstatusbar *>(_o);
        switch (_id) {
        case 0: _t->setprogress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clickedcancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData progressstatusbar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject progressstatusbar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_progressstatusbar,
      qt_meta_data_progressstatusbar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &progressstatusbar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *progressstatusbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *progressstatusbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_progressstatusbar))
        return static_cast<void*>(const_cast< progressstatusbar*>(this));
    if (!strcmp(_clname, "logoutput"))
        return static_cast< logoutput*>(const_cast< progressstatusbar*>(this));
    return QObject::qt_metacast(_clname);
}

int progressstatusbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
