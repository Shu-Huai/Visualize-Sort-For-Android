/****************************************************************************
** Meta object code from reading C++ file 'VisualizeSort.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../VisualizeSortForAndroid/VisualizeSort.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualizeSort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualizeSort_t {
    const uint offsetsAndSize[22];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VisualizeSort_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VisualizeSort_t qt_meta_stringdata_VisualizeSort = {
    {
QT_MOC_LITERAL(0, 13), // "VisualizeSort"
QT_MOC_LITERAL(14, 16), // "RandomInitialize"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 9), // "StartSort"
QT_MOC_LITERAL(42, 11), // "RepaintSlot"
QT_MOC_LITERAL(54, 10), // "firstIndex"
QT_MOC_LITERAL(65, 11), // "secondIndex"
QT_MOC_LITERAL(77, 8), // "needSwap"
QT_MOC_LITERAL(86, 8), // "needGray"
QT_MOC_LITERAL(95, 5), // "index"
QT_MOC_LITERAL(101, 14) // "referenceValue"

    },
    "VisualizeSort\0RandomInitialize\0\0"
    "StartSort\0RepaintSlot\0firstIndex\0"
    "secondIndex\0needSwap\0needGray\0index\0"
    "referenceValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualizeSort[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    0 /* Public */,
       3,    0,   39,    2, 0x0a,    1 /* Public */,
       4,    3,   40,    2, 0x0a,    2 /* Public */,
       4,    4,   47,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    8,    9,   10,    7,

       0        // eod
};

void VisualizeSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualizeSort *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RandomInitialize(); break;
        case 1: _t->StartSort(); break;
        case 2: _t->RepaintSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->RepaintSlot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject VisualizeSort::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VisualizeSort.offsetsAndSize,
    qt_meta_data_VisualizeSort,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VisualizeSort_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *VisualizeSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualizeSort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualizeSort.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VisualizeSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
