/****************************************************************************
** Meta object code from reading C++ file 'ex.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ex.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Ui_MainWindow_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[13];
    char stringdata5[11];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Ui_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Ui_MainWindow_t qt_meta_stringdata_Ui_MainWindow = {
    {
        QT_MOC_LITERAL(0, 13),  // "Ui_MainWindow"
        QT_MOC_LITERAL(14, 9),  // "actionsUi"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "setupUi"
        QT_MOC_LITERAL(33, 12),  // "QMainWindow*"
        QT_MOC_LITERAL(46, 10),  // "MainWindow"
        QT_MOC_LITERAL(57, 13)   // "retranslateUi"
    },
    "Ui_MainWindow",
    "actionsUi",
    "",
    "setupUi",
    "QMainWindow*",
    "MainWindow",
    "retranslateUi"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Ui_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    1,   33,    2, 0x0a,    2 /* Public */,
       6,    1,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject Ui_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Ui_MainWindow.offsetsAndSizes,
    qt_meta_data_Ui_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Ui_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ui_MainWindow, std::true_type>,
        // method 'actionsUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMainWindow *, std::false_type>,
        // method 'retranslateUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMainWindow *, std::false_type>
    >,
    nullptr
} };

void Ui_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ui_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionsUi(); break;
        case 1: _t->setupUi((*reinterpret_cast< std::add_pointer_t<QMainWindow*>>(_a[1]))); break;
        case 2: _t->retranslateUi((*reinterpret_cast< std::add_pointer_t<QMainWindow*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMainWindow* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMainWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Ui_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ui_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ui_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ui_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
