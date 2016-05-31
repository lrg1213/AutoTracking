/****************************************************************************
** Meta object code from reading C++ file 'sound.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sound.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sound.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sound_t {
    QByteArrayData data[16];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sound_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sound_t qt_meta_stringdata_Sound = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Sound"
QT_MOC_LITERAL(1, 6, 4), // "play"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 5), // "pause"
QT_MOC_LITERAL(4, 18, 4), // "stop"
QT_MOC_LITERAL(5, 23, 6), // "playTo"
QT_MOC_LITERAL(6, 30, 11), // "importSongs"
QT_MOC_LITERAL(7, 42, 9), // "plusSound"
QT_MOC_LITERAL(8, 52, 11), // "reduceSound"
QT_MOC_LITERAL(9, 64, 14), // "updateSongList"
QT_MOC_LITERAL(10, 79, 1), // "i"
QT_MOC_LITERAL(11, 81, 16), // "setPlaybackMode1"
QT_MOC_LITERAL(12, 98, 16), // "setPlaybackMode2"
QT_MOC_LITERAL(13, 115, 16), // "setPlaybackMode3"
QT_MOC_LITERAL(14, 132, 16), // "setPlaybackMode4"
QT_MOC_LITERAL(15, 149, 11) // "setPosition"

    },
    "Sound\0play\0\0pause\0stop\0playTo\0importSongs\0"
    "plusSound\0reduceSound\0updateSongList\0"
    "i\0setPlaybackMode1\0setPlaybackMode2\0"
    "setPlaybackMode3\0setPlaybackMode4\0"
    "setPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sound[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    2,   82,    2, 0x0a /* Public */,
       6,    0,   87,    2, 0x0a /* Public */,
       7,    0,   88,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Sound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sound *_t = static_cast<Sound *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->pause(); break;
        case 2: _t->stop(); break;
        case 3: _t->playTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->importSongs(); break;
        case 5: _t->plusSound(); break;
        case 6: _t->reduceSound(); break;
        case 7: _t->updateSongList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setPlaybackMode1(); break;
        case 9: _t->setPlaybackMode2(); break;
        case 10: _t->setPlaybackMode3(); break;
        case 11: _t->setPlaybackMode4(); break;
        case 12: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Sound::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Sound.data,
      qt_meta_data_Sound,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Sound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sound::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Sound.stringdata0))
        return static_cast<void*>(const_cast< Sound*>(this));
    if (!strcmp(_clname, "Ui::BackgroundMusic"))
        return static_cast< Ui::BackgroundMusic*>(const_cast< Sound*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Sound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
