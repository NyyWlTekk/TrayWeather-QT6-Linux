/****************************************************************************
** Meta object code from reading C++ file 'ConfigurationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/ConfigurationDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigurationDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13PreviewWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PreviewWidget::qt_create_metaobjectdata<qt_meta_tag_ZN13PreviewWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PreviewWidget"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PreviewWidget, qt_meta_tag_ZN13PreviewWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PreviewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PreviewWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PreviewWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PreviewWidgetE_t>.metaTypes,
    nullptr
} };

void PreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PreviewWidget *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *PreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PreviewWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN19ConfigurationDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigurationDialog::qt_create_metaobjectdata<qt_meta_tag_ZN19ConfigurationDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigurationDialog",
        "languageChanged",
        "",
        "replyFinished",
        "QNetworkReply*",
        "reply",
        "requestGeolocation",
        "requestAPIKeyTest",
        "onDNSRequestStateChanged",
        "state",
        "onLocationRadioChanged",
        "onCoordinatesChanged",
        "onThemeIndexChanged",
        "index",
        "onColorButtonClicked",
        "onTemperatureValueChanged",
        "value",
        "onAutostartValueChanged",
        "onLanguageChanged",
        "onUnitsValueChanged",
        "onUnitComboChanged",
        "onTooltipTextAdded",
        "onTooltipTextDeleted",
        "onTooltipTextMoved",
        "onTooltipFieldsRowChanged",
        "row",
        "onIconPreviewPressed",
        "onFontPreviewPressed",
        "onFontSelectorPressed",
        "onIconThemeIndexChanged",
        "idx",
        "updateTemperatureIcon",
        "onIconTypeChanged",
        "onSearchButtonClicked",
        "onProviderChanged",
        "apiKeyValid",
        "providerErrorMessage",
        "msg",
        "refreshNetworkLog",
        "onTemperatureUnitsChanged",
        "onBorderStateChanged",
        "onBarWidthSliderChanged",
        "onBarWidthSpinboxChanged",
        "updateIconBackgroundColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'languageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'replyFinished'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'requestGeolocation'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'requestAPIKeyTest'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDNSRequestStateChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'onLocationRadioChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCoordinatesChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onThemeIndexChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'onColorButtonClicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTemperatureValueChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'onAutostartValueChanged'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'onLanguageChanged'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'onUnitsValueChanged'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'onUnitComboChanged'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'onTooltipTextAdded'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTooltipTextDeleted'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTooltipTextMoved'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTooltipFieldsRowChanged'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'onIconPreviewPressed'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFontPreviewPressed'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFontSelectorPressed'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onIconThemeIndexChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'updateTemperatureIcon'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onIconTypeChanged'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onSearchButtonClicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onProviderChanged'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'apiKeyValid'
        QtMocHelpers::SlotData<void(const bool)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'providerErrorMessage'
        QtMocHelpers::SlotData<void(const QString &)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'refreshNetworkLog'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTemperatureUnitsChanged'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBorderStateChanged'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBarWidthSliderChanged'
        QtMocHelpers::SlotData<void(int)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'onBarWidthSpinboxChanged'
        QtMocHelpers::SlotData<void(double)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 16 },
        }}),
        // Slot 'updateIconBackgroundColor'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigurationDialog, qt_meta_tag_ZN19ConfigurationDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigurationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ConfigurationDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ConfigurationDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ConfigurationDialogE_t>.metaTypes,
    nullptr
} };

void ConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigurationDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->languageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->replyFinished((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 2: _t->requestGeolocation(); break;
        case 3: _t->requestAPIKeyTest(); break;
        case 4: _t->onDNSRequestStateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onLocationRadioChanged(); break;
        case 6: _t->onCoordinatesChanged(); break;
        case 7: _t->onThemeIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onColorButtonClicked(); break;
        case 9: _t->onTemperatureValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onAutostartValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->onLanguageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->onUnitsValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->onUnitComboChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->onTooltipTextAdded(); break;
        case 15: _t->onTooltipTextDeleted(); break;
        case 16: _t->onTooltipTextMoved(); break;
        case 17: _t->onTooltipFieldsRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->onIconPreviewPressed(); break;
        case 19: _t->onFontPreviewPressed(); break;
        case 20: _t->onFontSelectorPressed(); break;
        case 21: _t->onIconThemeIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->updateTemperatureIcon(); break;
        case 23: _t->onIconTypeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->onSearchButtonClicked(); break;
        case 25: _t->onProviderChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->apiKeyValid((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->providerErrorMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->refreshNetworkLog(); break;
        case 29: _t->onTemperatureUnitsChanged(); break;
        case 30: _t->onBorderStateChanged(); break;
        case 31: _t->onBarWidthSliderChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->onBarWidthSpinboxChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 33: _t->updateIconBackgroundColor(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigurationDialog::*)(const QString & )>(_a, &ConfigurationDialog::languageChanged, 0))
            return;
    }
}

const QMetaObject *ConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ConfigurationDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void ConfigurationDialog::languageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
