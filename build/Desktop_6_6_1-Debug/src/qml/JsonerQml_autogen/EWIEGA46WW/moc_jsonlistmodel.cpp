/****************************************************************************
** Meta object code from reading C++ file 'jsonlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/qml/jsonlistmodel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jsonlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSJsonListModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJsonListModelENDCLASS = QtMocHelpers::stringData(
    "JsonListModel",
    "QML.Element",
    "JsonListModelBase",
    "QML.AddedInVersion",
    "256",
    "jsonDataChanged",
    "",
    "roles",
    "QQmlListProperty<JsonListModelRole>",
    "data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJsonListModelENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[18];
    char stringdata3[19];
    char stringdata4[4];
    char stringdata5[16];
    char stringdata6[1];
    char stringdata7[6];
    char stringdata8[36];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJsonListModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJsonListModelENDCLASS_t qt_meta_stringdata_CLASSJsonListModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "JsonListModel"
        QT_MOC_LITERAL(14, 11),  // "QML.Element"
        QT_MOC_LITERAL(26, 17),  // "JsonListModelBase"
        QT_MOC_LITERAL(44, 18),  // "QML.AddedInVersion"
        QT_MOC_LITERAL(63, 3),  // "256"
        QT_MOC_LITERAL(67, 15),  // "jsonDataChanged"
        QT_MOC_LITERAL(83, 0),  // ""
        QT_MOC_LITERAL(84, 5),  // "roles"
        QT_MOC_LITERAL(90, 35),  // "QQmlListProperty<JsonListMode..."
        QT_MOC_LITERAL(126, 4)   // "data"
    },
    "JsonListModel",
    "QML.Element",
    "JsonListModelBase",
    "QML.AddedInVersion",
    "256",
    "jsonDataChanged",
    "",
    "roles",
    "QQmlListProperty<JsonListModelRole>",
    "data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJsonListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       2,   25, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   24,    6, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00015009, uint(-1), 0,
       9, QMetaType::QVariant, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject JsonListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSJsonListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJsonListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'roles'
        QQmlListProperty<JsonListModelRole>,
        // property 'data'
        QVariant,
        // Q_OBJECT / Q_GADGET
        JsonListModel,
        // method 'jsonDataChanged'
        void
    >,
    nullptr
} };

void JsonListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonListModel::*)();
            if (_t _q_method = &JsonListModel::jsonDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JsonListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<JsonListModelRole>*>(_v) = _t->roles(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->jsonData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JsonListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setJsonData(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *JsonListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJsonListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int JsonListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void JsonListModel::jsonDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS = QtMocHelpers::stringData(
    "JsonListModelRole",
    "QML.Element",
    "JsonListModelRoleBase",
    "QML.AddedInVersion",
    "256",
    "nameChanged",
    "",
    "propertyNameChanged",
    "aliasesChanged",
    "valueChanged",
    "name",
    "propertyName",
    "aliases",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[22];
    char stringdata3[19];
    char stringdata4[4];
    char stringdata5[12];
    char stringdata6[1];
    char stringdata7[20];
    char stringdata8[15];
    char stringdata9[13];
    char stringdata10[5];
    char stringdata11[13];
    char stringdata12[8];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS_t qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "JsonListModelRole"
        QT_MOC_LITERAL(18, 11),  // "QML.Element"
        QT_MOC_LITERAL(30, 21),  // "JsonListModelRoleBase"
        QT_MOC_LITERAL(52, 18),  // "QML.AddedInVersion"
        QT_MOC_LITERAL(71, 3),  // "256"
        QT_MOC_LITERAL(75, 11),  // "nameChanged"
        QT_MOC_LITERAL(87, 0),  // ""
        QT_MOC_LITERAL(88, 19),  // "propertyNameChanged"
        QT_MOC_LITERAL(108, 14),  // "aliasesChanged"
        QT_MOC_LITERAL(123, 12),  // "valueChanged"
        QT_MOC_LITERAL(136, 4),  // "name"
        QT_MOC_LITERAL(141, 12),  // "propertyName"
        QT_MOC_LITERAL(154, 7),  // "aliases"
        QT_MOC_LITERAL(162, 5)   // "value"
    },
    "JsonListModelRole",
    "QML.Element",
    "JsonListModelRoleBase",
    "QML.AddedInVersion",
    "256",
    "nameChanged",
    "",
    "propertyNameChanged",
    "aliasesChanged",
    "valueChanged",
    "name",
    "propertyName",
    "aliases",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJsonListModelRoleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
       4,   18, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   42,    6, 0x06,    5 /* Public */,
       7,    0,   43,    6, 0x06,    6 /* Public */,
       8,    0,   44,    6, 0x06,    7 /* Public */,
       9,    0,   45,    6, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, QMetaType::QStringList, 0x00015103, uint(2), 0,
      13, QMetaType::QVariant, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject JsonListModelRole::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJsonListModelRoleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'name'
        QString,
        // property 'propertyName'
        QString,
        // property 'aliases'
        QStringList,
        // property 'value'
        QVariant,
        // Q_OBJECT / Q_GADGET
        JsonListModelRole,
        // method 'nameChanged'
        void,
        // method 'propertyNameChanged'
        void,
        // method 'aliasesChanged'
        void,
        // method 'valueChanged'
        void
    >,
    nullptr
} };

void JsonListModelRole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonListModelRole *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->propertyNameChanged(); break;
        case 2: _t->aliasesChanged(); break;
        case 3: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonListModelRole::*)();
            if (_t _q_method = &JsonListModelRole::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JsonListModelRole::*)();
            if (_t _q_method = &JsonListModelRole::propertyNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JsonListModelRole::*)();
            if (_t _q_method = &JsonListModelRole::aliasesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JsonListModelRole::*)();
            if (_t _q_method = &JsonListModelRole::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JsonListModelRole *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->propertyName(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->aliases(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JsonListModelRole *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPropertyName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAliases(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *JsonListModelRole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonListModelRole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJsonListModelRoleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonListModelRole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void JsonListModelRole::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JsonListModelRole::propertyNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JsonListModelRole::aliasesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JsonListModelRole::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
