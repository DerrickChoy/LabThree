/****************************************************************************
** Meta object code from reading C++ file 'phonebook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../phonebook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phonebook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Phonebook_t {
    QByteArrayData data[18];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Phonebook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Phonebook_t qt_meta_stringdata_Phonebook = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Phonebook"
QT_MOC_LITERAL(1, 10, 38), // "on_actionAdd_an_Address_Book_..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(4, 71, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 83, 5), // "index"
QT_MOC_LITERAL(6, 89, 18), // "on_btnNum1_clicked"
QT_MOC_LITERAL(7, 108, 18), // "on_btnNum2_clicked"
QT_MOC_LITERAL(8, 127, 18), // "on_btnNum3_clicked"
QT_MOC_LITERAL(9, 146, 18), // "on_btnNum4_clicked"
QT_MOC_LITERAL(10, 165, 18), // "on_btnNum5_clicked"
QT_MOC_LITERAL(11, 184, 18), // "on_btnNum6_clicked"
QT_MOC_LITERAL(12, 203, 18), // "on_btnNum7_clicked"
QT_MOC_LITERAL(13, 222, 18), // "on_btnNum8_clicked"
QT_MOC_LITERAL(14, 241, 18), // "on_btnNum9_clicked"
QT_MOC_LITERAL(15, 260, 18), // "on_btnNum0_clicked"
QT_MOC_LITERAL(16, 279, 27), // "on_deletePushButton_clicked"
QT_MOC_LITERAL(17, 307, 18) // "on_btnCall_clicked"

    },
    "Phonebook\0on_actionAdd_an_Address_Book_triggered\0"
    "\0on_tableView_clicked\0QModelIndex\0"
    "index\0on_btnNum1_clicked\0on_btnNum2_clicked\0"
    "on_btnNum3_clicked\0on_btnNum4_clicked\0"
    "on_btnNum5_clicked\0on_btnNum6_clicked\0"
    "on_btnNum7_clicked\0on_btnNum8_clicked\0"
    "on_btnNum9_clicked\0on_btnNum0_clicked\0"
    "on_deletePushButton_clicked\0"
    "on_btnCall_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Phonebook[] = {

 // content:
       8,       // revision
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
       3,    1,   85,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
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

void Phonebook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Phonebook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAdd_an_Address_Book_triggered(); break;
        case 1: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_btnNum1_clicked(); break;
        case 3: _t->on_btnNum2_clicked(); break;
        case 4: _t->on_btnNum3_clicked(); break;
        case 5: _t->on_btnNum4_clicked(); break;
        case 6: _t->on_btnNum5_clicked(); break;
        case 7: _t->on_btnNum6_clicked(); break;
        case 8: _t->on_btnNum7_clicked(); break;
        case 9: _t->on_btnNum8_clicked(); break;
        case 10: _t->on_btnNum9_clicked(); break;
        case 11: _t->on_btnNum0_clicked(); break;
        case 12: _t->on_deletePushButton_clicked(); break;
        case 13: _t->on_btnCall_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Phonebook::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Phonebook.data,
    qt_meta_data_Phonebook,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Phonebook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Phonebook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Phonebook.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Phonebook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
