/****************************************************************************
** Meta object code from reading C++ file 'TrayWeather.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TrayWeather.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrayWeather.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11TrayWeatherE_t {};
} // unnamed namespace

template <> constexpr inline auto TrayWeather::qt_create_metaobjectdata<qt_meta_tag_ZN11TrayWeatherE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrayWeather",
        "replyFinished",
        "",
        "QNetworkReply*",
        "reply",
        "exitApplication",
        "showAboutDialog",
        "showTab",
        "showCurrentWeatherWidget",
        "showConfiguration",
        "onActivation",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "requestData",
        "onMapsStateChanged",
        "value",
        "onLanguageChanged",
        "lang",
        "showAlert",
        "forceRequestData",
        "processWeatherData",
        "processPollutionData",
        "processUVData",
        "processAlerts",
        "Alerts",
        "alerts",
        "setErrorTooltip",
        "msg",
        "onAlertsSeen"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'replyFinished'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'exitApplication'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAboutDialog'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTab'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showCurrentWeatherWidget'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showConfiguration'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onActivation'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'requestData'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMapsStateChanged'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'onLanguageChanged'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'showAlert'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'forceRequestData'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processWeatherData'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processPollutionData'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processUVData'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processAlerts'
        QtMocHelpers::SlotData<void(const Alerts &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'setErrorTooltip'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'onAlertsSeen'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TrayWeather, qt_meta_tag_ZN11TrayWeatherE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrayWeather::staticMetaObject = { {
    QMetaObject::SuperData::link<QSystemTrayIcon::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrayWeatherE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrayWeatherE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11TrayWeatherE_t>.metaTypes,
    nullptr
} };

void TrayWeather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrayWeather *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->replyFinished((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 1: _t->exitApplication(); break;
        case 2: _t->showAboutDialog(); break;
        case 3: _t->showTab(); break;
        case 4: _t->showCurrentWeatherWidget(); break;
        case 5: _t->showConfiguration(); break;
        case 6: _t->onActivation((*reinterpret_cast<std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 7: _t->requestData(); break;
        case 8: _t->onMapsStateChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->onLanguageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->showAlert(); break;
        case 11: _t->forceRequestData(); break;
        case 12: _t->processWeatherData(); break;
        case 13: _t->processPollutionData(); break;
        case 14: _t->processUVData(); break;
        case 15: _t->processAlerts((*reinterpret_cast<std::add_pointer_t<Alerts>>(_a[1]))); break;
        case 16: _t->setErrorTooltip((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->onAlertsSeen(); break;
        default: ;
        }
    }
}

const QMetaObject *TrayWeather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrayWeather::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TrayWeatherE_t>.strings))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int TrayWeather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
