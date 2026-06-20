/****************************************************************************
** Meta object code from reading C++ file 'Provider.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Provider.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Provider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN15WeatherProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto WeatherProvider::qt_create_metaobjectdata<qt_meta_tag_ZN15WeatherProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WeatherProvider",
        "weatherDataReady",
        "",
        "weatherForecastDataReady",
        "pollutionForecastDataReady",
        "uvForecastDataReady",
        "apiKeyValid",
        "errorMessage",
        "foundLocations",
        "Locations",
        "locations",
        "weatherAlerts",
        "Alerts",
        "alert"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'weatherDataReady'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'weatherForecastDataReady'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pollutionForecastDataReady'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'uvForecastDataReady'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'apiKeyValid'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'errorMessage'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'foundLocations'
        QtMocHelpers::SignalData<void(const Locations &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'weatherAlerts'
        QtMocHelpers::SignalData<void(const Alerts &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WeatherProvider, qt_meta_tag_ZN15WeatherProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WeatherProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WeatherProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WeatherProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15WeatherProviderE_t>.metaTypes,
    nullptr
} };

void WeatherProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WeatherProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->weatherDataReady(); break;
        case 1: _t->weatherForecastDataReady(); break;
        case 2: _t->pollutionForecastDataReady(); break;
        case 3: _t->uvForecastDataReady(); break;
        case 4: _t->apiKeyValid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->errorMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->foundLocations((*reinterpret_cast<std::add_pointer_t<Locations>>(_a[1]))); break;
        case 7: _t->weatherAlerts((*reinterpret_cast<std::add_pointer_t<Alerts>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)()>(_a, &WeatherProvider::weatherDataReady, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)()>(_a, &WeatherProvider::weatherForecastDataReady, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)()>(_a, &WeatherProvider::pollutionForecastDataReady, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)()>(_a, &WeatherProvider::uvForecastDataReady, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)(bool )>(_a, &WeatherProvider::apiKeyValid, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)(const QString & )>(_a, &WeatherProvider::errorMessage, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)(const Locations & )>(_a, &WeatherProvider::foundLocations, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WeatherProvider::*)(const Alerts & )>(_a, &WeatherProvider::weatherAlerts, 7))
            return;
    }
}

const QMetaObject *WeatherProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeatherProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15WeatherProviderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WeatherProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WeatherProvider::weatherDataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WeatherProvider::weatherForecastDataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WeatherProvider::pollutionForecastDataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WeatherProvider::uvForecastDataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WeatherProvider::apiKeyValid(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void WeatherProvider::errorMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void WeatherProvider::foundLocations(const Locations & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void WeatherProvider::weatherAlerts(const Alerts & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
