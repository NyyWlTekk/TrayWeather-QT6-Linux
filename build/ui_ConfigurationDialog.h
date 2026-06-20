/********************************************************************************
** Form generated from reading UI file 'ConfigurationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Utils.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_tabWidget;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *m_providerComboBox;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *m_weatherCheck;
    QLabel *m_forecastLabel;
    QLabel *m_pollutionCheck;
    QLabel *m_uvCheck;
    QLabel *m_mapsCheck;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_6;
    QLabel *m_locationCheck;
    QLabel *m_alertsCheck;
    QLabel *label_10;
    QGroupBox *m_keyBox;
    QVBoxLayout *verticalLayout_10;
    QLabel *m_providerConfigText;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_35;
    QLineEdit *m_apikey;
    QHBoxLayout *horizontalLayout_6;
    QLabel *m_testLabel;
    QPushButton *m_apiTest;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_39;
    QDoubleSpinBox *m_longitudeSpin;
    QDoubleSpinBox *m_latitudeSpin;
    QLabel *m_longitudeLabel;
    QLabel *m_latitudeLabel;
    QRadioButton *m_useManual;
    QRadioButton *m_useGeolocation;
    QPushButton *m_geoRequest;
    QLabel *m_ipapiLabel;
    QFrame *line_2;
    QCheckBox *m_useDNS;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *m_roamingCheck;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_geoFind;
    QGroupBox *m_geoBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *m_country;
    QLabel *label_5;
    QLabel *m_region;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *m_latitude;
    QLabel *m_longitude;
    QLabel *m_ip;
    QLabel *label_3;
    QLabel *m_city;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QComboBox *m_unitsComboBox;
    QGroupBox *m_customBox;
    QGridLayout *gridLayout_5;
    QLabel *label_24;
    QComboBox *m_tempCombo;
    QLabel *label_25;
    QComboBox *m_pressionCombo;
    QLabel *label_26;
    QComboBox *m_windCombo;
    QLabel *label_27;
    QComboBox *m_precipitationCombo;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_7;
    QLabel *label_33;
    QComboBox *m_rainGraph;
    QLabel *label_37;
    QToolButton *m_rainGraphColor;
    QToolButton *m_tempGraphColor;
    QComboBox *m_tempGraph;
    QLabel *label_38;
    QComboBox *m_snowGraph;
    QToolButton *m_snowGraphColor;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QSlider *m_barWidthSlider;
    QDoubleSpinBox *m_barWidthSpinbox;
    QLabel *label_30;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QSlider *m_tempLayerSlider;
    QSpinBox *m_tempLayerSpinbox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QSlider *m_cloudLayerSlider;
    QSpinBox *m_cloudLayerSpinbox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_32;
    QSlider *m_rainLayerSlider;
    QSpinBox *m_rainLayerSpinbox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_34;
    QSlider *m_windLayerSlider;
    QSpinBox *m_windLayerSpinbox;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_6;
    QHBoxLayout *m_tempLayout11;
    QCheckBox *m_borderColor;
    ClickableLabel *m_borderColorLabel;
    QToolButton *m_borderColorButton;
    QHBoxLayout *m_tempLayout_2;
    QRadioButton *m_variable;
    QToolButton *m_minColor;
    QLabel *m_range;
    QToolButton *m_maxColor;
    QLabel *label_15;
    QLabel *m_textColorLabel;
    QComboBox *m_trayIconType;
    QLabel *m_textFontLabel;
    QLabel *m_iconThemeLabel;
    QHBoxLayout *m_tempLayout_3;
    QLabel *m_from;
    QSpinBox *m_minSpinBox;
    QLabel *label_19;
    QSpinBox *m_maxSpinBox;
    QHBoxLayout *m_tempLayout_7;
    QSlider *m_iconSize;
    QSpinBox *m_iconSizeSpinbox;
    QLabel *m_tempIconSizeLabel;
    QHBoxLayout *m_iconThemeLayout;
    QComboBox *m_trayIconTheme;
    QToolButton *m_iconThemeColor;
    QToolButton *m_iconSummary;
    QHBoxLayout *m_tempLayout10;
    QCheckBox *m_drawDegree;
    ClickableLabel *m_drawDegreeLabel;
    QHBoxLayout *m_tempLayout_4;
    QCheckBox *m_border;
    ClickableLabel *m_borderLabel;
    QHBoxLayout *m_tempLayout_6;
    QCheckBox *m_stretch;
    ClickableLabel *m_stretchLabel;
    QHBoxLayout *m_tempLayout_1;
    QRadioButton *m_fixed;
    QToolButton *m_trayTempColor;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *m_tempLayout_5;
    QPushButton *m_fontButton;
    QToolButton *m_fontPreview;
    QHBoxLayout *m_tempLayout_9;
    QLabel *label_8;
    QSlider *m_spacingSlider;
    QSpinBox *m_spacingSpinBox;
    QHBoxLayout *m_tempLayout_8;
    QLabel *m_borderWidthLabel;
    QSlider *m_borderWidth;
    QSpinBox *m_borderSpinBox;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *m_backgroundColor;
    ClickableLabel *m_backgroundColorLabel;
    QToolButton *m_backgroundColorButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    CustomComboBox *m_tooltipValueCombo;
    QToolButton *m_tooltipAdd;
    QListWidget *m_tooltipList;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *m_tooltipUp;
    QToolButton *m_tooltipDown;
    QToolButton *m_tooltipDelete;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QLabel *label_22;
    QComboBox *m_languageCombo;
    QLabel *label_31;
    QLabel *label_12;
    QSpinBox *m_updateTime;
    QLabel *label_14;
    QComboBox *m_updatesCombo;
    QLabel *label_20;
    QCheckBox *m_autostart;
    QCheckBox *m_showAlerts;
    QComboBox *m_theme;
    QCheckBox *m_swapIcons;
    QLabel *m_swapIconsLabel;
    QLabel *m_keepAlertsIconLabel;
    QCheckBox *m_keepAlertsIcon;
    QLabel *label_28;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancel;
    QPushButton *m_ok;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName("ConfigurationDialog");
        ConfigurationDialog->setEnabled(true);
        ConfigurationDialog->resize(435, 592);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigurationDialog->sizePolicy().hasHeightForWidth());
        ConfigurationDialog->setSizePolicy(sizePolicy);
        ConfigurationDialog->setMinimumSize(QSize(435, 592));
        ConfigurationDialog->setMaximumSize(QSize(435, 592));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TrayWeather/application.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ConfigurationDialog->setWindowIcon(icon);
        ConfigurationDialog->setSizeGripEnabled(false);
        ConfigurationDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ConfigurationDialog);
        verticalLayout->setObjectName("verticalLayout");
        m_tabWidget = new QTabWidget(ConfigurationDialog);
        m_tabWidget->setObjectName("m_tabWidget");
        m_tabWidget->setTabPosition(QTabWidget::North);
        m_tabWidget->setTabShape(QTabWidget::Rounded);
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(tab_6);
        label_4->setObjectName("label_4");
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        m_providerComboBox = new QComboBox(tab_6);
        m_providerComboBox->setObjectName("m_providerComboBox");

        horizontalLayout_3->addWidget(m_providerComboBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        m_weatherCheck = new QLabel(groupBox);
        m_weatherCheck->setObjectName("m_weatherCheck");
        m_weatherCheck->setMaximumSize(QSize(16, 16));
        m_weatherCheck->setFont(font);
        m_weatherCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_weatherCheck->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, m_weatherCheck);

        m_forecastLabel = new QLabel(groupBox);
        m_forecastLabel->setObjectName("m_forecastLabel");
        m_forecastLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, m_forecastLabel);

        m_pollutionCheck = new QLabel(groupBox);
        m_pollutionCheck->setObjectName("m_pollutionCheck");
        m_pollutionCheck->setMaximumSize(QSize(16, 16));
        m_pollutionCheck->setFont(font);
        m_pollutionCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_pollutionCheck->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, m_pollutionCheck);

        m_uvCheck = new QLabel(groupBox);
        m_uvCheck->setObjectName("m_uvCheck");
        m_uvCheck->setMaximumSize(QSize(16, 16));
        m_uvCheck->setFont(font);
        m_uvCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_uvCheck->setScaledContents(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, m_uvCheck);

        m_mapsCheck = new QLabel(groupBox);
        m_mapsCheck->setObjectName("m_mapsCheck");
        m_mapsCheck->setMaximumSize(QSize(16, 16));
        m_mapsCheck->setFont(font);
        m_mapsCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_mapsCheck->setScaledContents(true);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, m_mapsCheck);

        label_40 = new QLabel(groupBox);
        label_40->setObjectName("label_40");
        label_40->setFont(font);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_40);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName("label_41");
        label_41->setFont(font);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_41);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName("label_42");
        label_42->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_42);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, label_6);

        m_locationCheck = new QLabel(groupBox);
        m_locationCheck->setObjectName("m_locationCheck");
        m_locationCheck->setMaximumSize(QSize(16, 16));
        m_locationCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_locationCheck->setScaledContents(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, m_locationCheck);

        m_alertsCheck = new QLabel(groupBox);
        m_alertsCheck->setObjectName("m_alertsCheck");
        m_alertsCheck->setMaximumSize(QSize(16, 16));
        m_alertsCheck->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/no-cross.svg")));
        m_alertsCheck->setScaledContents(true);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, m_alertsCheck);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_10);


        verticalLayout_4->addWidget(groupBox);

        m_keyBox = new QGroupBox(tab_6);
        m_keyBox->setObjectName("m_keyBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_keyBox->sizePolicy().hasHeightForWidth());
        m_keyBox->setSizePolicy(sizePolicy1);
        m_keyBox->setFont(font);
        m_keyBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(m_keyBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        m_providerConfigText = new QLabel(m_keyBox);
        m_providerConfigText->setObjectName("m_providerConfigText");
        m_providerConfigText->setText(QString::fromUtf8(""));
        m_providerConfigText->setTextFormat(Qt::RichText);
        m_providerConfigText->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        m_providerConfigText->setWordWrap(true);
        m_providerConfigText->setOpenExternalLinks(true);

        verticalLayout_10->addWidget(m_providerConfigText);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_35 = new QLabel(m_keyBox);
        label_35->setObjectName("label_35");
        label_35->setFont(font);

        horizontalLayout_4->addWidget(label_35);

        m_apikey = new QLineEdit(m_keyBox);
        m_apikey->setObjectName("m_apikey");
        m_apikey->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(m_apikey);


        verticalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        m_testLabel = new QLabel(m_keyBox);
        m_testLabel->setObjectName("m_testLabel");
        m_testLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(m_testLabel);

        m_apiTest = new QPushButton(m_keyBox);
        m_apiTest->setObjectName("m_apiTest");
        m_apiTest->setEnabled(false);
        m_apiTest->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(m_apiTest);

        horizontalLayout_6->setStretch(0, 1);

        verticalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout_4->addWidget(m_keyBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_4->setStretch(3, 1);
        m_tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setFont(font);
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_39 = new QLabel(groupBox_4);
        label_39->setObjectName("label_39");

        gridLayout_4->addWidget(label_39, 1, 0, 1, 1);

        m_longitudeSpin = new QDoubleSpinBox(groupBox_4);
        m_longitudeSpin->setObjectName("m_longitudeSpin");
        m_longitudeSpin->setAlignment(Qt::AlignCenter);
        m_longitudeSpin->setDecimals(6);
        m_longitudeSpin->setMinimum(-180.000000000000000);
        m_longitudeSpin->setMaximum(180.000000000000000);

        gridLayout_4->addWidget(m_longitudeSpin, 1, 2, 1, 1);

        m_latitudeSpin = new QDoubleSpinBox(groupBox_4);
        m_latitudeSpin->setObjectName("m_latitudeSpin");
        m_latitudeSpin->setAlignment(Qt::AlignCenter);
        m_latitudeSpin->setDecimals(6);
        m_latitudeSpin->setMinimum(-90.000000000000000);
        m_latitudeSpin->setMaximum(90.000000000000000);

        gridLayout_4->addWidget(m_latitudeSpin, 0, 2, 1, 1);

        m_longitudeLabel = new QLabel(groupBox_4);
        m_longitudeLabel->setObjectName("m_longitudeLabel");

        gridLayout_4->addWidget(m_longitudeLabel, 1, 1, 1, 1);

        m_latitudeLabel = new QLabel(groupBox_4);
        m_latitudeLabel->setObjectName("m_latitudeLabel");

        gridLayout_4->addWidget(m_latitudeLabel, 0, 1, 1, 1);

        m_useManual = new QRadioButton(groupBox_4);
        m_useManual->setObjectName("m_useManual");

        gridLayout_4->addWidget(m_useManual, 0, 0, 1, 1);

        m_useGeolocation = new QRadioButton(groupBox_4);
        m_useGeolocation->setObjectName("m_useGeolocation");

        gridLayout_4->addWidget(m_useGeolocation, 2, 0, 1, 1);

        m_geoRequest = new QPushButton(groupBox_4);
        m_geoRequest->setObjectName("m_geoRequest");

        gridLayout_4->addWidget(m_geoRequest, 2, 2, 1, 1);

        m_ipapiLabel = new QLabel(groupBox_4);
        m_ipapiLabel->setObjectName("m_ipapiLabel");

        gridLayout_4->addWidget(m_ipapiLabel, 2, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        line_2 = new QFrame(groupBox_4);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_2);

        m_useDNS = new QCheckBox(groupBox_4);
        m_useDNS->setObjectName("m_useDNS");

        verticalLayout_5->addWidget(m_useDNS);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        m_roamingCheck = new QCheckBox(groupBox_4);
        m_roamingCheck->setObjectName("m_roamingCheck");

        horizontalLayout_15->addWidget(m_roamingCheck);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);

        m_geoFind = new QPushButton(groupBox_4);
        m_geoFind->setObjectName("m_geoFind");
        m_geoFind->setMinimumSize(QSize(100, 0));

        horizontalLayout_15->addWidget(m_geoFind);


        verticalLayout_5->addLayout(horizontalLayout_15);


        verticalLayout_7->addWidget(groupBox_4);

        m_geoBox = new QGroupBox(tab);
        m_geoBox->setObjectName("m_geoBox");
        sizePolicy1.setHeightForWidth(m_geoBox->sizePolicy().hasHeightForWidth());
        m_geoBox->setSizePolicy(sizePolicy1);
        m_geoBox->setFont(font);
        m_geoBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        m_geoBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(m_geoBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(m_geoBox);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 18));
        label->setMaximumSize(QSize(16777215, 18));
        label->setFont(font);

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        m_country = new QLabel(m_geoBox);
        m_country->setObjectName("m_country");
        m_country->setMinimumSize(QSize(0, 18));
        m_country->setMaximumSize(QSize(16777215, 18));
        m_country->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_country, 2, 1, 1, 1);

        label_5 = new QLabel(m_geoBox);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 18));
        label_5->setMaximumSize(QSize(16777215, 18));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        m_region = new QLabel(m_geoBox);
        m_region->setObjectName("m_region");
        m_region->setMinimumSize(QSize(0, 18));
        m_region->setMaximumSize(QSize(16777215, 18));
        m_region->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_region, 3, 1, 1, 1);

        label_7 = new QLabel(m_geoBox);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 18));
        label_7->setMaximumSize(QSize(16777215, 18));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(m_geoBox);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(0, 18));
        label_9->setMaximumSize(QSize(16777215, 18));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        m_latitude = new QLabel(m_geoBox);
        m_latitude->setObjectName("m_latitude");
        m_latitude->setMinimumSize(QSize(0, 18));
        m_latitude->setMaximumSize(QSize(16777215, 18));
        m_latitude->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_latitude, 0, 1, 1, 1);

        m_longitude = new QLabel(m_geoBox);
        m_longitude->setObjectName("m_longitude");
        m_longitude->setMinimumSize(QSize(0, 18));
        m_longitude->setMaximumSize(QSize(16777215, 18));
        m_longitude->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_longitude, 1, 1, 1, 1);

        m_ip = new QLabel(m_geoBox);
        m_ip->setObjectName("m_ip");
        m_ip->setMinimumSize(QSize(0, 18));
        m_ip->setMaximumSize(QSize(16777215, 18));
        m_ip->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_ip, 5, 1, 1, 1);

        label_3 = new QLabel(m_geoBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 18));
        label_3->setMaximumSize(QSize(16777215, 18));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        m_city = new QLabel(m_geoBox);
        m_city->setObjectName("m_city");
        m_city->setMinimumSize(QSize(0, 18));
        m_city->setMaximumSize(QSize(16777215, 18));
        m_city->setText(QString::fromUtf8("Unknown"));

        gridLayout_2->addWidget(m_city, 4, 1, 1, 1);

        label_2 = new QLabel(m_geoBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 18));
        label_2->setMaximumSize(QSize(16777215, 18));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(m_geoBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        m_tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setFont(font);
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        verticalLayout_11 = new QVBoxLayout(groupBox_5);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(0, 22));
        label_13->setFont(font);

        horizontalLayout_9->addWidget(label_13);

        m_unitsComboBox = new QComboBox(groupBox_5);
        m_unitsComboBox->addItem(QString());
        m_unitsComboBox->addItem(QString());
        m_unitsComboBox->addItem(QString());
        m_unitsComboBox->setObjectName("m_unitsComboBox");

        horizontalLayout_9->addWidget(m_unitsComboBox);


        verticalLayout_11->addLayout(horizontalLayout_9);

        m_customBox = new QGroupBox(groupBox_5);
        m_customBox->setObjectName("m_customBox");
        m_customBox->setEnabled(false);
        m_customBox->setFont(font);
        m_customBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        gridLayout_5 = new QGridLayout(m_customBox);
        gridLayout_5->setObjectName("gridLayout_5");
        label_24 = new QLabel(m_customBox);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(0, 0));
        label_24->setFont(font);

        gridLayout_5->addWidget(label_24, 0, 0, 1, 1);

        m_tempCombo = new QComboBox(m_customBox);
        m_tempCombo->addItem(QString());
        m_tempCombo->addItem(QString());
        m_tempCombo->setObjectName("m_tempCombo");

        gridLayout_5->addWidget(m_tempCombo, 0, 1, 1, 1);

        label_25 = new QLabel(m_customBox);
        label_25->setObjectName("label_25");
        label_25->setFont(font);

        gridLayout_5->addWidget(label_25, 1, 0, 1, 1);

        m_pressionCombo = new QComboBox(m_customBox);
        m_pressionCombo->addItem(QString());
        m_pressionCombo->addItem(QString());
        m_pressionCombo->addItem(QString());
        m_pressionCombo->addItem(QString());
        m_pressionCombo->setObjectName("m_pressionCombo");

        gridLayout_5->addWidget(m_pressionCombo, 1, 1, 1, 1);

        label_26 = new QLabel(m_customBox);
        label_26->setObjectName("label_26");
        label_26->setFont(font);

        gridLayout_5->addWidget(label_26, 2, 0, 1, 1);

        m_windCombo = new QComboBox(m_customBox);
        m_windCombo->addItem(QString());
        m_windCombo->addItem(QString());
        m_windCombo->addItem(QString());
        m_windCombo->addItem(QString());
        m_windCombo->addItem(QString());
        m_windCombo->setObjectName("m_windCombo");

        gridLayout_5->addWidget(m_windCombo, 2, 1, 1, 1);

        label_27 = new QLabel(m_customBox);
        label_27->setObjectName("label_27");
        label_27->setFont(font);

        gridLayout_5->addWidget(label_27, 3, 0, 1, 1);

        m_precipitationCombo = new QComboBox(m_customBox);
        m_precipitationCombo->addItem(QString());
        m_precipitationCombo->addItem(QString());
        m_precipitationCombo->setObjectName("m_precipitationCombo");

        gridLayout_5->addWidget(m_precipitationCombo, 3, 1, 1, 1);


        verticalLayout_11->addWidget(m_customBox);


        verticalLayout_9->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        verticalLayout_12 = new QVBoxLayout(groupBox_6);
        verticalLayout_12->setObjectName("verticalLayout_12");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        label_33 = new QLabel(groupBox_6);
        label_33->setObjectName("label_33");
        label_33->setFont(font);

        gridLayout_7->addWidget(label_33, 0, 0, 1, 1);

        m_rainGraph = new QComboBox(groupBox_6);
        m_rainGraph->addItem(QString());
        m_rainGraph->addItem(QString());
        m_rainGraph->addItem(QString());
        m_rainGraph->setObjectName("m_rainGraph");

        gridLayout_7->addWidget(m_rainGraph, 1, 1, 1, 1);

        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName("label_37");
        label_37->setFont(font);

        gridLayout_7->addWidget(label_37, 1, 0, 1, 1);

        m_rainGraphColor = new QToolButton(groupBox_6);
        m_rainGraphColor->setObjectName("m_rainGraphColor");
        m_rainGraphColor->setMinimumSize(QSize(24, 24));

        gridLayout_7->addWidget(m_rainGraphColor, 1, 2, 1, 1);

        m_tempGraphColor = new QToolButton(groupBox_6);
        m_tempGraphColor->setObjectName("m_tempGraphColor");
        m_tempGraphColor->setMinimumSize(QSize(24, 24));

        gridLayout_7->addWidget(m_tempGraphColor, 0, 2, 1, 1);

        m_tempGraph = new QComboBox(groupBox_6);
        m_tempGraph->addItem(QString());
        m_tempGraph->addItem(QString());
        m_tempGraph->addItem(QString());
        m_tempGraph->setObjectName("m_tempGraph");

        gridLayout_7->addWidget(m_tempGraph, 0, 1, 1, 1);

        label_38 = new QLabel(groupBox_6);
        label_38->setObjectName("label_38");
        label_38->setFont(font);

        gridLayout_7->addWidget(label_38, 2, 0, 1, 1);

        m_snowGraph = new QComboBox(groupBox_6);
        m_snowGraph->addItem(QString());
        m_snowGraph->addItem(QString());
        m_snowGraph->addItem(QString());
        m_snowGraph->setObjectName("m_snowGraph");

        gridLayout_7->addWidget(m_snowGraph, 2, 1, 1, 1);

        m_snowGraphColor = new QToolButton(groupBox_6);
        m_snowGraphColor->setObjectName("m_snowGraphColor");
        m_snowGraphColor->setMinimumSize(QSize(24, 24));

        gridLayout_7->addWidget(m_snowGraphColor, 2, 2, 1, 1);


        verticalLayout_12->addLayout(gridLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setFont(font);

        horizontalLayout_5->addWidget(label_11);

        m_barWidthSlider = new QSlider(groupBox_6);
        m_barWidthSlider->setObjectName("m_barWidthSlider");
        m_barWidthSlider->setMinimum(5);
        m_barWidthSlider->setMaximum(20);
        m_barWidthSlider->setValue(10);
        m_barWidthSlider->setOrientation(Qt::Horizontal);
        m_barWidthSlider->setTickPosition(QSlider::TicksAbove);
        m_barWidthSlider->setTickInterval(1);

        horizontalLayout_5->addWidget(m_barWidthSlider);

        m_barWidthSpinbox = new QDoubleSpinBox(groupBox_6);
        m_barWidthSpinbox->setObjectName("m_barWidthSpinbox");
        m_barWidthSpinbox->setDecimals(1);
        m_barWidthSpinbox->setMinimum(0.500000000000000);
        m_barWidthSpinbox->setMaximum(2.000000000000000);
        m_barWidthSpinbox->setSingleStep(0.100000000000000);
        m_barWidthSpinbox->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(m_barWidthSpinbox);


        verticalLayout_12->addLayout(horizontalLayout_5);

        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_30->setWordWrap(true);

        verticalLayout_12->addWidget(label_30);


        verticalLayout_9->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 2ex;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0px 5px;\n"
"}"));
        verticalLayout_13 = new QVBoxLayout(groupBox_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(75, 0));
        label_18->setFont(font);

        horizontalLayout_8->addWidget(label_18);

        m_tempLayerSlider = new QSlider(groupBox_2);
        m_tempLayerSlider->setObjectName("m_tempLayerSlider");
        m_tempLayerSlider->setMinimum(5);
        m_tempLayerSlider->setMaximum(100);
        m_tempLayerSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(m_tempLayerSlider);

        m_tempLayerSpinbox = new QSpinBox(groupBox_2);
        m_tempLayerSpinbox->setObjectName("m_tempLayerSpinbox");
        m_tempLayerSpinbox->setMinimumSize(QSize(55, 0));
        m_tempLayerSpinbox->setMinimum(5);
        m_tempLayerSpinbox->setMaximum(100);

        horizontalLayout_8->addWidget(m_tempLayerSpinbox);


        verticalLayout_13->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(75, 0));
        label_21->setFont(font);

        horizontalLayout_10->addWidget(label_21);

        m_cloudLayerSlider = new QSlider(groupBox_2);
        m_cloudLayerSlider->setObjectName("m_cloudLayerSlider");
        m_cloudLayerSlider->setMinimum(5);
        m_cloudLayerSlider->setMaximum(100);
        m_cloudLayerSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(m_cloudLayerSlider);

        m_cloudLayerSpinbox = new QSpinBox(groupBox_2);
        m_cloudLayerSpinbox->setObjectName("m_cloudLayerSpinbox");
        m_cloudLayerSpinbox->setMinimumSize(QSize(55, 0));
        m_cloudLayerSpinbox->setMinimum(5);
        m_cloudLayerSpinbox->setMaximum(100);

        horizontalLayout_10->addWidget(m_cloudLayerSpinbox);


        verticalLayout_13->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName("label_32");
        label_32->setMinimumSize(QSize(75, 0));
        label_32->setFont(font);

        horizontalLayout_13->addWidget(label_32);

        m_rainLayerSlider = new QSlider(groupBox_2);
        m_rainLayerSlider->setObjectName("m_rainLayerSlider");
        m_rainLayerSlider->setMinimum(5);
        m_rainLayerSlider->setMaximum(100);
        m_rainLayerSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(m_rainLayerSlider);

        m_rainLayerSpinbox = new QSpinBox(groupBox_2);
        m_rainLayerSpinbox->setObjectName("m_rainLayerSpinbox");
        m_rainLayerSpinbox->setMinimumSize(QSize(55, 0));
        m_rainLayerSpinbox->setMinimum(5);
        m_rainLayerSpinbox->setMaximum(100);

        horizontalLayout_13->addWidget(m_rainLayerSpinbox);


        verticalLayout_13->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName("label_34");
        label_34->setMinimumSize(QSize(75, 0));
        label_34->setFont(font);

        horizontalLayout_14->addWidget(label_34);

        m_windLayerSlider = new QSlider(groupBox_2);
        m_windLayerSlider->setObjectName("m_windLayerSlider");
        m_windLayerSlider->setMinimum(5);
        m_windLayerSlider->setMaximum(100);
        m_windLayerSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(m_windLayerSlider);

        m_windLayerSpinbox = new QSpinBox(groupBox_2);
        m_windLayerSpinbox->setObjectName("m_windLayerSpinbox");
        m_windLayerSpinbox->setMinimumSize(QSize(55, 0));
        m_windLayerSpinbox->setMinimum(5);
        m_windLayerSpinbox->setMaximum(100);

        horizontalLayout_14->addWidget(m_windLayerSpinbox);


        verticalLayout_13->addLayout(horizontalLayout_14);


        verticalLayout_9->addWidget(groupBox_2);

        m_tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        m_tempLayout11 = new QHBoxLayout();
        m_tempLayout11->setObjectName("m_tempLayout11");
        m_borderColor = new QCheckBox(tab_2);
        m_borderColor->setObjectName("m_borderColor");
        m_borderColor->setChecked(true);

        m_tempLayout11->addWidget(m_borderColor);

        m_borderColorLabel = new ClickableLabel(tab_2);
        m_borderColorLabel->setObjectName("m_borderColorLabel");

        m_tempLayout11->addWidget(m_borderColorLabel);

        m_borderColorButton = new QToolButton(tab_2);
        m_borderColorButton->setObjectName("m_borderColorButton");
        m_borderColorButton->setMinimumSize(QSize(24, 24));

        m_tempLayout11->addWidget(m_borderColorButton);

        m_tempLayout11->setStretch(1, 1);

        gridLayout_6->addLayout(m_tempLayout11, 6, 1, 1, 1);

        m_tempLayout_2 = new QHBoxLayout();
        m_tempLayout_2->setObjectName("m_tempLayout_2");
        m_variable = new QRadioButton(tab_2);
        m_variable->setObjectName("m_variable");
        m_variable->setMinimumSize(QSize(61, 0));

        m_tempLayout_2->addWidget(m_variable);

        m_minColor = new QToolButton(tab_2);
        m_minColor->setObjectName("m_minColor");
        m_minColor->setMinimumSize(QSize(24, 24));

        m_tempLayout_2->addWidget(m_minColor);

        m_range = new QLabel(tab_2);
        m_range->setObjectName("m_range");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_range->sizePolicy().hasHeightForWidth());
        m_range->setSizePolicy(sizePolicy2);
        m_range->setScaledContents(true);
        m_range->setAlignment(Qt::AlignCenter);

        m_tempLayout_2->addWidget(m_range);

        m_maxColor = new QToolButton(tab_2);
        m_maxColor->setObjectName("m_maxColor");
        m_maxColor->setMinimumSize(QSize(24, 24));

        m_tempLayout_2->addWidget(m_maxColor);

        m_tempLayout_2->setStretch(2, 1);

        gridLayout_6->addLayout(m_tempLayout_2, 3, 1, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setFont(font);

        gridLayout_6->addWidget(label_15, 0, 0, 1, 1);

        m_textColorLabel = new QLabel(tab_2);
        m_textColorLabel->setObjectName("m_textColorLabel");
        m_textColorLabel->setMinimumSize(QSize(0, 22));
        m_textColorLabel->setFont(font);
        m_textColorLabel->setWordWrap(true);

        gridLayout_6->addWidget(m_textColorLabel, 2, 0, 1, 1);

        m_trayIconType = new QComboBox(tab_2);
        m_trayIconType->addItem(QString());
        m_trayIconType->addItem(QString());
        m_trayIconType->addItem(QString());
        m_trayIconType->addItem(QString());
        m_trayIconType->setObjectName("m_trayIconType");

        gridLayout_6->addWidget(m_trayIconType, 0, 1, 1, 1);

        m_textFontLabel = new QLabel(tab_2);
        m_textFontLabel->setObjectName("m_textFontLabel");
        m_textFontLabel->setFont(font);
        m_textFontLabel->setWordWrap(true);

        gridLayout_6->addWidget(m_textFontLabel, 8, 0, 1, 1);

        m_iconThemeLabel = new QLabel(tab_2);
        m_iconThemeLabel->setObjectName("m_iconThemeLabel");
        m_iconThemeLabel->setMinimumSize(QSize(100, 0));
        m_iconThemeLabel->setFont(font);

        gridLayout_6->addWidget(m_iconThemeLabel, 1, 0, 1, 1);

        m_tempLayout_3 = new QHBoxLayout();
        m_tempLayout_3->setObjectName("m_tempLayout_3");
        m_from = new QLabel(tab_2);
        m_from->setObjectName("m_from");
        m_from->setMinimumSize(QSize(61, 0));
        m_from->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_from->setIndent(6);

        m_tempLayout_3->addWidget(m_from);

        m_minSpinBox = new QSpinBox(tab_2);
        m_minSpinBox->setObjectName("m_minSpinBox");
        m_minSpinBox->setMinimumSize(QSize(0, 24));
        m_minSpinBox->setAlignment(Qt::AlignCenter);
        m_minSpinBox->setMinimum(-200);
        m_minSpinBox->setMaximum(200);

        m_tempLayout_3->addWidget(m_minSpinBox);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(100, 0));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19->setIndent(5);

        m_tempLayout_3->addWidget(label_19);

        m_maxSpinBox = new QSpinBox(tab_2);
        m_maxSpinBox->setObjectName("m_maxSpinBox");
        m_maxSpinBox->setMinimumSize(QSize(0, 24));
        m_maxSpinBox->setAlignment(Qt::AlignCenter);
        m_maxSpinBox->setMinimum(-200);
        m_maxSpinBox->setMaximum(200);

        m_tempLayout_3->addWidget(m_maxSpinBox);


        gridLayout_6->addLayout(m_tempLayout_3, 4, 1, 1, 1);

        m_tempLayout_7 = new QHBoxLayout();
        m_tempLayout_7->setObjectName("m_tempLayout_7");
        m_iconSize = new QSlider(tab_2);
        m_iconSize->setObjectName("m_iconSize");
        m_iconSize->setMinimum(50);
        m_iconSize->setMaximum(100);
        m_iconSize->setOrientation(Qt::Horizontal);
        m_iconSize->setTickPosition(QSlider::TicksAbove);

        m_tempLayout_7->addWidget(m_iconSize);

        m_iconSizeSpinbox = new QSpinBox(tab_2);
        m_iconSizeSpinbox->setObjectName("m_iconSizeSpinbox");
        m_iconSizeSpinbox->setSuffix(QString::fromUtf8("%"));
        m_iconSizeSpinbox->setMinimum(50);
        m_iconSizeSpinbox->setMaximum(100);

        m_tempLayout_7->addWidget(m_iconSizeSpinbox);


        gridLayout_6->addLayout(m_tempLayout_7, 12, 1, 1, 1);

        m_tempIconSizeLabel = new QLabel(tab_2);
        m_tempIconSizeLabel->setObjectName("m_tempIconSizeLabel");
        m_tempIconSizeLabel->setMinimumSize(QSize(0, 24));
        m_tempIconSizeLabel->setFont(font);
        m_tempIconSizeLabel->setWordWrap(true);

        gridLayout_6->addWidget(m_tempIconSizeLabel, 12, 0, 1, 1);

        m_iconThemeLayout = new QHBoxLayout();
        m_iconThemeLayout->setObjectName("m_iconThemeLayout");
        m_trayIconTheme = new QComboBox(tab_2);
        m_trayIconTheme->setObjectName("m_trayIconTheme");
        m_trayIconTheme->setCurrentText(QString::fromUtf8(""));

        m_iconThemeLayout->addWidget(m_trayIconTheme);

        m_iconThemeColor = new QToolButton(tab_2);
        m_iconThemeColor->setObjectName("m_iconThemeColor");
        m_iconThemeColor->setMinimumSize(QSize(24, 24));
        m_iconThemeColor->setText(QString::fromUtf8(""));

        m_iconThemeLayout->addWidget(m_iconThemeColor);

        m_iconSummary = new QToolButton(tab_2);
        m_iconSummary->setObjectName("m_iconSummary");
        m_iconSummary->setMinimumSize(QSize(24, 24));
        m_iconSummary->setText(QString::fromUtf8(""));

        m_iconThemeLayout->addWidget(m_iconSummary);

        m_iconThemeLayout->setStretch(0, 1);

        gridLayout_6->addLayout(m_iconThemeLayout, 1, 1, 1, 1);

        m_tempLayout10 = new QHBoxLayout();
        m_tempLayout10->setObjectName("m_tempLayout10");
        m_drawDegree = new QCheckBox(tab_2);
        m_drawDegree->setObjectName("m_drawDegree");
        m_drawDegree->setMinimumSize(QSize(0, 24));

        m_tempLayout10->addWidget(m_drawDegree);

        m_drawDegreeLabel = new ClickableLabel(tab_2);
        m_drawDegreeLabel->setObjectName("m_drawDegreeLabel");

        m_tempLayout10->addWidget(m_drawDegreeLabel);

        m_tempLayout10->setStretch(1, 1);

        gridLayout_6->addLayout(m_tempLayout10, 10, 1, 1, 1);

        m_tempLayout_4 = new QHBoxLayout();
        m_tempLayout_4->setObjectName("m_tempLayout_4");
        m_border = new QCheckBox(tab_2);
        m_border->setObjectName("m_border");
        m_border->setMinimumSize(QSize(0, 24));
        m_border->setMaximumSize(QSize(16777215, 24));

        m_tempLayout_4->addWidget(m_border);

        m_borderLabel = new ClickableLabel(tab_2);
        m_borderLabel->setObjectName("m_borderLabel");
        m_borderLabel->setWordWrap(true);

        m_tempLayout_4->addWidget(m_borderLabel);

        m_tempLayout_4->setStretch(1, 1);

        gridLayout_6->addLayout(m_tempLayout_4, 5, 1, 1, 1);

        m_tempLayout_6 = new QHBoxLayout();
        m_tempLayout_6->setObjectName("m_tempLayout_6");
        m_stretch = new QCheckBox(tab_2);
        m_stretch->setObjectName("m_stretch");
        m_stretch->setMinimumSize(QSize(0, 24));

        m_tempLayout_6->addWidget(m_stretch);

        m_stretchLabel = new ClickableLabel(tab_2);
        m_stretchLabel->setObjectName("m_stretchLabel");

        m_tempLayout_6->addWidget(m_stretchLabel);

        m_tempLayout_6->setStretch(1, 1);

        gridLayout_6->addLayout(m_tempLayout_6, 9, 1, 1, 1);

        m_tempLayout_1 = new QHBoxLayout();
        m_tempLayout_1->setObjectName("m_tempLayout_1");
        m_fixed = new QRadioButton(tab_2);
        m_fixed->setObjectName("m_fixed");
        m_fixed->setMinimumSize(QSize(61, 0));
        m_fixed->setChecked(true);

        m_tempLayout_1->addWidget(m_fixed);

        m_trayTempColor = new QToolButton(tab_2);
        m_trayTempColor->setObjectName("m_trayTempColor");
        m_trayTempColor->setMinimumSize(QSize(24, 24));

        m_tempLayout_1->addWidget(m_trayTempColor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        m_tempLayout_1->addItem(horizontalSpacer_2);

        m_tempLayout_1->setStretch(2, 1);

        gridLayout_6->addLayout(m_tempLayout_1, 2, 1, 1, 1);

        m_tempLayout_5 = new QHBoxLayout();
        m_tempLayout_5->setObjectName("m_tempLayout_5");
        m_fontButton = new QPushButton(tab_2);
        m_fontButton->setObjectName("m_fontButton");
        m_fontButton->setStyleSheet(QString::fromUtf8("QPushButton { Text-align:left }"));

        m_tempLayout_5->addWidget(m_fontButton);

        m_fontPreview = new QToolButton(tab_2);
        m_fontPreview->setObjectName("m_fontPreview");
        m_fontPreview->setMinimumSize(QSize(24, 24));

        m_tempLayout_5->addWidget(m_fontPreview);


        gridLayout_6->addLayout(m_tempLayout_5, 8, 1, 1, 1);

        m_tempLayout_9 = new QHBoxLayout();
        m_tempLayout_9->setObjectName("m_tempLayout_9");
        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");

        m_tempLayout_9->addWidget(label_8);

        m_spacingSlider = new QSlider(tab_2);
        m_spacingSlider->setObjectName("m_spacingSlider");
        m_spacingSlider->setMinimum(-25);
        m_spacingSlider->setMaximum(25);
        m_spacingSlider->setOrientation(Qt::Horizontal);
        m_spacingSlider->setTickPosition(QSlider::TicksAbove);
        m_spacingSlider->setTickInterval(5);

        m_tempLayout_9->addWidget(m_spacingSlider);

        m_spacingSpinBox = new QSpinBox(tab_2);
        m_spacingSpinBox->setObjectName("m_spacingSpinBox");
        m_spacingSpinBox->setMinimum(-25);
        m_spacingSpinBox->setMaximum(25);

        m_tempLayout_9->addWidget(m_spacingSpinBox);

        m_tempLayout_9->setStretch(1, 1);

        gridLayout_6->addLayout(m_tempLayout_9, 11, 1, 1, 1);

        m_tempLayout_8 = new QHBoxLayout();
        m_tempLayout_8->setObjectName("m_tempLayout_8");
        m_borderWidthLabel = new QLabel(tab_2);
        m_borderWidthLabel->setObjectName("m_borderWidthLabel");

        m_tempLayout_8->addWidget(m_borderWidthLabel);

        m_borderWidth = new QSlider(tab_2);
        m_borderWidth->setObjectName("m_borderWidth");
        m_borderWidth->setMinimum(4);
        m_borderWidth->setMaximum(32);
        m_borderWidth->setValue(32);
        m_borderWidth->setOrientation(Qt::Horizontal);
        m_borderWidth->setTickPosition(QSlider::TicksAbove);
        m_borderWidth->setTickInterval(2);

        m_tempLayout_8->addWidget(m_borderWidth);

        m_borderSpinBox = new QSpinBox(tab_2);
        m_borderSpinBox->setObjectName("m_borderSpinBox");
        m_borderSpinBox->setMinimum(4);
        m_borderSpinBox->setMaximum(32);

        m_tempLayout_8->addWidget(m_borderSpinBox);


        gridLayout_6->addLayout(m_tempLayout_8, 7, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");
        label_16->setFont(font);
        label_16->setWordWrap(true);

        gridLayout_6->addWidget(label_16, 13, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        m_backgroundColor = new QCheckBox(tab_2);
        m_backgroundColor->setObjectName("m_backgroundColor");
        m_backgroundColor->setChecked(true);

        horizontalLayout_16->addWidget(m_backgroundColor);

        m_backgroundColorLabel = new ClickableLabel(tab_2);
        m_backgroundColorLabel->setObjectName("m_backgroundColorLabel");

        horizontalLayout_16->addWidget(m_backgroundColorLabel);

        m_backgroundColorButton = new QToolButton(tab_2);
        m_backgroundColorButton->setObjectName("m_backgroundColorButton");
        m_backgroundColorButton->setMinimumSize(QSize(24, 24));

        horizontalLayout_16->addWidget(m_backgroundColorButton);

        horizontalLayout_16->setStretch(1, 1);

        gridLayout_6->addLayout(horizontalLayout_16, 13, 1, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);

        verticalLayout_8->addLayout(gridLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        m_tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_23 = new QLabel(tab_5);
        label_23->setObjectName("label_23");
        label_23->setWordWrap(true);

        verticalLayout_6->addWidget(label_23);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(3);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_29 = new QLabel(tab_5);
        label_29->setObjectName("label_29");

        horizontalLayout_11->addWidget(label_29);

        m_tooltipValueCombo = new CustomComboBox(tab_5);
        m_tooltipValueCombo->setObjectName("m_tooltipValueCombo");

        horizontalLayout_11->addWidget(m_tooltipValueCombo);

        m_tooltipAdd = new QToolButton(tab_5);
        m_tooltipAdd->setObjectName("m_tooltipAdd");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_tooltipAdd->sizePolicy().hasHeightForWidth());
        m_tooltipAdd->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/TrayWeather/add.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        m_tooltipAdd->setIcon(icon1);

        horizontalLayout_11->addWidget(m_tooltipAdd);

        horizontalLayout_11->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_11);

        m_tooltipList = new QListWidget(tab_5);
        m_tooltipList->setObjectName("m_tooltipList");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_tooltipList->sizePolicy().hasHeightForWidth());
        m_tooltipList->setSizePolicy(sizePolicy4);
        m_tooltipList->setProperty("showDropIndicator", QVariant(false));

        verticalLayout_6->addWidget(m_tooltipList);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(3);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        m_tooltipUp = new QToolButton(tab_5);
        m_tooltipUp->setObjectName("m_tooltipUp");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/TrayWeather/up.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        m_tooltipUp->setIcon(icon2);

        horizontalLayout_12->addWidget(m_tooltipUp);

        m_tooltipDown = new QToolButton(tab_5);
        m_tooltipDown->setObjectName("m_tooltipDown");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/TrayWeather/down.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        m_tooltipDown->setIcon(icon3);

        horizontalLayout_12->addWidget(m_tooltipDown);

        m_tooltipDelete = new QToolButton(tab_5);
        m_tooltipDelete->setObjectName("m_tooltipDelete");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/TrayWeather/remove.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        m_tooltipDelete->setIcon(icon4);

        horizontalLayout_12->addWidget(m_tooltipDelete);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalLayout_6->setStretch(2, 1);
        m_tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(6);
        label_17 = new QLabel(tab_4);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(0, 22));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        label_22 = new QLabel(tab_4);
        label_22->setObjectName("label_22");
        label_22->setMinimumSize(QSize(0, 22));
        label_22->setFont(font);

        gridLayout->addWidget(label_22, 7, 0, 1, 1);

        m_languageCombo = new QComboBox(tab_4);
        m_languageCombo->setObjectName("m_languageCombo");

        gridLayout->addWidget(m_languageCombo, 7, 1, 1, 1);

        label_31 = new QLabel(tab_4);
        label_31->setObjectName("label_31");
        label_31->setMinimumSize(QSize(0, 22));
        label_31->setFont(font);

        gridLayout->addWidget(label_31, 4, 0, 1, 1);

        label_12 = new QLabel(tab_4);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(0, 22));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        m_updateTime = new QSpinBox(tab_4);
        m_updateTime->setObjectName("m_updateTime");
        m_updateTime->setMinimumSize(QSize(0, 22));
        m_updateTime->setMinimum(5);
        m_updateTime->setMaximum(300);
        m_updateTime->setValue(15);

        gridLayout->addWidget(m_updateTime, 0, 1, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(0, 22));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        m_updatesCombo = new QComboBox(tab_4);
        m_updatesCombo->addItem(QString());
        m_updatesCombo->addItem(QString());
        m_updatesCombo->addItem(QString());
        m_updatesCombo->addItem(QString());
        m_updatesCombo->setObjectName("m_updatesCombo");

        gridLayout->addWidget(m_updatesCombo, 2, 1, 1, 1);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(0, 22));
        label_20->setFont(font);

        gridLayout->addWidget(label_20, 3, 0, 1, 1);

        m_autostart = new QCheckBox(tab_4);
        m_autostart->setObjectName("m_autostart");

        gridLayout->addWidget(m_autostart, 3, 1, 1, 1);

        m_showAlerts = new QCheckBox(tab_4);
        m_showAlerts->setObjectName("m_showAlerts");

        gridLayout->addWidget(m_showAlerts, 4, 1, 1, 1);

        m_theme = new QComboBox(tab_4);
        m_theme->addItem(QString());
        m_theme->addItem(QString());
        m_theme->setObjectName("m_theme");

        gridLayout->addWidget(m_theme, 1, 1, 1, 1);

        m_swapIcons = new QCheckBox(tab_4);
        m_swapIcons->setObjectName("m_swapIcons");
        m_swapIcons->setEnabled(false);

        gridLayout->addWidget(m_swapIcons, 6, 1, 1, 1);

        m_swapIconsLabel = new QLabel(tab_4);
        m_swapIconsLabel->setObjectName("m_swapIconsLabel");
        m_swapIconsLabel->setEnabled(false);
        m_swapIconsLabel->setMinimumSize(QSize(0, 22));
        m_swapIconsLabel->setFont(font);

        gridLayout->addWidget(m_swapIconsLabel, 6, 0, 1, 1);

        m_keepAlertsIconLabel = new QLabel(tab_4);
        m_keepAlertsIconLabel->setObjectName("m_keepAlertsIconLabel");
        m_keepAlertsIconLabel->setEnabled(false);
        m_keepAlertsIconLabel->setMinimumSize(QSize(0, 22));
        m_keepAlertsIconLabel->setFont(font);

        gridLayout->addWidget(m_keepAlertsIconLabel, 5, 0, 1, 1);

        m_keepAlertsIcon = new QCheckBox(tab_4);
        m_keepAlertsIcon->setObjectName("m_keepAlertsIcon");
        m_keepAlertsIcon->setEnabled(false);

        gridLayout->addWidget(m_keepAlertsIcon, 5, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        label_28 = new QLabel(tab_4);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignCenter);
        label_28->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_28);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        m_tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(m_tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancel = new QPushButton(ConfigurationDialog);
        m_cancel->setObjectName("m_cancel");

        horizontalLayout_2->addWidget(m_cancel);

        m_ok = new QPushButton(ConfigurationDialog);
        m_ok->setObjectName("m_ok");

        horizontalLayout_2->addWidget(m_ok);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);

        retranslateUi(ConfigurationDialog);
        QObject::connect(m_ok, &QPushButton::pressed, ConfigurationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_iconSize, &QSlider::valueChanged, m_iconSizeSpinbox, &QSpinBox::setValue);
        QObject::connect(m_iconSizeSpinbox, &QSpinBox::valueChanged, m_iconSize, &QSlider::setValue);
        QObject::connect(m_cancel, &QPushButton::pressed, ConfigurationDialog, qOverload<>(&QDialog::reject));
        QObject::connect(m_tempLayerSlider, &QSlider::valueChanged, m_tempLayerSpinbox, &QSpinBox::setValue);
        QObject::connect(m_tempLayerSpinbox, &QSpinBox::valueChanged, m_tempLayerSlider, &QSlider::setValue);
        QObject::connect(m_cloudLayerSlider, &QSlider::valueChanged, m_cloudLayerSpinbox, &QSpinBox::setValue);
        QObject::connect(m_cloudLayerSpinbox, &QSpinBox::valueChanged, m_cloudLayerSlider, &QSlider::setValue);
        QObject::connect(m_rainLayerSlider, &QSlider::valueChanged, m_rainLayerSpinbox, &QSpinBox::setValue);
        QObject::connect(m_rainLayerSpinbox, &QSpinBox::valueChanged, m_rainLayerSlider, &QSlider::setValue);
        QObject::connect(m_windLayerSlider, &QSlider::valueChanged, m_windLayerSpinbox, &QSpinBox::setValue);
        QObject::connect(m_windLayerSpinbox, &QSpinBox::valueChanged, m_windLayerSlider, &QSlider::setValue);
        QObject::connect(m_spacingSlider, &QSlider::valueChanged, m_spacingSpinBox, &QSpinBox::setValue);
        QObject::connect(m_spacingSpinBox, &QSpinBox::valueChanged, m_spacingSlider, &QSlider::setValue);
        QObject::connect(m_borderSpinBox, &QSpinBox::valueChanged, m_borderWidth, &QSlider::setValue);
        QObject::connect(m_borderWidth, &QSlider::valueChanged, m_borderSpinBox, &QSpinBox::setValue);
        QObject::connect(m_showAlerts, &QCheckBox::toggled, m_keepAlertsIcon, &QCheckBox::setEnabled);
        QObject::connect(m_showAlerts, &QCheckBox::toggled, m_keepAlertsIconLabel, &QLabel::setEnabled);

        m_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QCoreApplication::translate("ConfigurationDialog", "Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selected weather data provider.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_4->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Selected weather data provider.", nullptr));
#endif // QT_CONFIG(statustip)
        label_4->setText(QCoreApplication::translate("ConfigurationDialog", "Weather Data Provider", nullptr));
#if QT_CONFIG(tooltip)
        m_providerComboBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selected weather data provider.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_providerComboBox->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Selected weather data provider.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Capabilities of the current weather data provider.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupBox->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Capabilities of the current weather data provider.", nullptr));
#endif // QT_CONFIG(statustip)
        groupBox->setTitle(QCoreApplication::translate("ConfigurationDialog", "Provider Capabilites", nullptr));
        m_weatherCheck->setText(QString());
        m_forecastLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Weather forecast", nullptr));
        m_pollutionCheck->setText(QString());
        m_uvCheck->setText(QString());
        m_mapsCheck->setText(QString());
        label_40->setText(QCoreApplication::translate("ConfigurationDialog", "Air pollution forecast", nullptr));
        label_41->setText(QCoreApplication::translate("ConfigurationDialog", "Ultraviolet radiation forecast", nullptr));
        label_42->setText(QCoreApplication::translate("ConfigurationDialog", "Weather maps", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigurationDialog", "Geo-Location", nullptr));
        m_locationCheck->setText(QString());
        m_alertsCheck->setText(QString());
        label_10->setText(QCoreApplication::translate("ConfigurationDialog", "Weather alerts", nullptr));
#if QT_CONFIG(tooltip)
        m_keyBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Configuration needed for the current weather provider.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_keyBox->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Configuration needed for the current weather provider.", nullptr));
#endif // QT_CONFIG(statustip)
        m_keyBox->setTitle(QCoreApplication::translate("ConfigurationDialog", "Provider Configuration", nullptr));
        label_35->setText(QCoreApplication::translate("ConfigurationDialog", "API Key:", nullptr));
#if QT_CONFIG(tooltip)
        m_apikey->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Provider API key.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_apikey->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Provider API key.", nullptr));
#endif // QT_CONFIG(statustip)
        m_testLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Testing API Key...", nullptr));
#if QT_CONFIG(tooltip)
        m_apiTest->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Tests the API key.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_apiTest->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Tests the API key.", nullptr));
#endif // QT_CONFIG(statustip)
        m_apiTest->setText(QCoreApplication::translate("ConfigurationDialog", "Test API Key", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_6), QCoreApplication::translate("ConfigurationDialog", "Provider", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConfigurationDialog", "Geographic Location Method", nullptr));
        label_39->setText(QString());
#if QT_CONFIG(tooltip)
        m_longitudeSpin->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Longitude value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_longitudeSpin->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Longitude value", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        m_latitudeSpin->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Latitude value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_latitudeSpin->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Latitude value", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        m_longitudeLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Longitude value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_longitudeLabel->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Longitude value", nullptr));
#endif // QT_CONFIG(statustip)
        m_longitudeLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Longitude", nullptr));
#if QT_CONFIG(tooltip)
        m_latitudeLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Latitude value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_latitudeLabel->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Latitude value", nullptr));
#endif // QT_CONFIG(statustip)
        m_latitudeLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Latitude", nullptr));
#if QT_CONFIG(tooltip)
        m_useManual->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Specify geographic coordinates", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_useManual->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Specify geographic coordinates", nullptr));
#endif // QT_CONFIG(statustip)
        m_useManual->setText(QCoreApplication::translate("ConfigurationDialog", "Manual Coordinates", nullptr));
#if QT_CONFIG(tooltip)
        m_useGeolocation->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Use IP geolocation service", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_useGeolocation->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Use IP geolocation service", nullptr));
#endif // QT_CONFIG(statustip)
        m_useGeolocation->setText(QCoreApplication::translate("ConfigurationDialog", "IP Geolocation", nullptr));
#if QT_CONFIG(tooltip)
        m_geoRequest->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Request IP geolocation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_geoRequest->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Request IP geolocation", nullptr));
#endif // QT_CONFIG(statustip)
        m_geoRequest->setText(QCoreApplication::translate("ConfigurationDialog", "Request Geolocation", nullptr));
#if QT_CONFIG(tooltip)
        m_ipapiLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Geolocation service status", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_ipapiLabel->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Geolocation service status", nullptr));
#endif // QT_CONFIG(statustip)
        m_ipapiLabel->setText(QString());
#if QT_CONFIG(tooltip)
        m_useDNS->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Use DNS IP for geolocation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_useDNS->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Use DNS IP for geolocation", nullptr));
#endif // QT_CONFIG(statustip)
        m_useDNS->setText(QCoreApplication::translate("ConfigurationDialog", "Use DNS address", nullptr));
#if QT_CONFIG(tooltip)
        m_roamingCheck->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Obtain geographical coordinates before each weather data request.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        m_roamingCheck->setStatusTip(QCoreApplication::translate("ConfigurationDialog", "Obtain geographical coordinates before each weather data request.", nullptr));
#endif // QT_CONFIG(statustip)
        m_roamingCheck->setText(QCoreApplication::translate("ConfigurationDialog", "Enable roaming", nullptr));
        m_geoFind->setText(QCoreApplication::translate("ConfigurationDialog", "Find location...", nullptr));
        m_geoBox->setTitle(QCoreApplication::translate("ConfigurationDialog", "Geographic Coordinates", nullptr));
        label->setText(QCoreApplication::translate("ConfigurationDialog", "Country", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigurationDialog", "Region", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigurationDialog", "Latitude", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigurationDialog", "Longitude", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigurationDialog", "IP Address", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigurationDialog", "City", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab), QCoreApplication::translate("ConfigurationDialog", "Location", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ConfigurationDialog", "Measurement Units", nullptr));
        label_13->setText(QCoreApplication::translate("ConfigurationDialog", "Measurement units", nullptr));
        m_unitsComboBox->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "Metric system (\302\272C)", nullptr));
        m_unitsComboBox->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Imperial system (\302\272F)", nullptr));
        m_unitsComboBox->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Custom", nullptr));

        m_customBox->setTitle(QCoreApplication::translate("ConfigurationDialog", "Custom Measurement Units", nullptr));
        label_24->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature", nullptr));
        m_tempCombo->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "Celsius", nullptr));
        m_tempCombo->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Fahrenheit", nullptr));

        label_25->setText(QCoreApplication::translate("ConfigurationDialog", "Pressure", nullptr));
        m_pressionCombo->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "hPa", nullptr));
        m_pressionCombo->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "PSI", nullptr));
        m_pressionCombo->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "mmHg", nullptr));
        m_pressionCombo->setItemText(3, QCoreApplication::translate("ConfigurationDialog", "inHg", nullptr));

        label_26->setText(QCoreApplication::translate("ConfigurationDialog", "Wind", nullptr));
        m_windCombo->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "meters/second", nullptr));
        m_windCombo->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "miles/hour", nullptr));
        m_windCombo->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "kilometers/hour", nullptr));
        m_windCombo->setItemText(3, QCoreApplication::translate("ConfigurationDialog", "feet/second", nullptr));
        m_windCombo->setItemText(4, QCoreApplication::translate("ConfigurationDialog", "knots", nullptr));

        label_27->setText(QCoreApplication::translate("ConfigurationDialog", "Precipitation", nullptr));
        m_precipitationCombo->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "millimeters/hour", nullptr));
        m_precipitationCombo->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "inches/hour", nullptr));

        groupBox_6->setTitle(QCoreApplication::translate("ConfigurationDialog", "Forecast Graph", nullptr));
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_33->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature", nullptr));
        m_rainGraph->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "None", nullptr));
        m_rainGraph->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Smooth Line", nullptr));
        m_rainGraph->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Bars", nullptr));

#if QT_CONFIG(tooltip)
        m_rainGraph->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Rain representation in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_37->setText(QCoreApplication::translate("ConfigurationDialog", "Rain", nullptr));
#if QT_CONFIG(tooltip)
        m_rainGraphColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Rain representation color in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_rainGraphColor->setText(QString());
#if QT_CONFIG(tooltip)
        m_tempGraphColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Temperature representation color in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tempGraphColor->setText(QString());
        m_tempGraph->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "None", nullptr));
        m_tempGraph->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Smooth Line", nullptr));
        m_tempGraph->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Bars", nullptr));

#if QT_CONFIG(tooltip)
        m_tempGraph->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Temperature representation in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_38->setText(QCoreApplication::translate("ConfigurationDialog", "Snow", nullptr));
        m_snowGraph->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "None", nullptr));
        m_snowGraph->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Smooth Line", nullptr));
        m_snowGraph->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Bars", nullptr));

#if QT_CONFIG(tooltip)
        m_snowGraph->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Snow representation in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_snowGraphColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Snow representation color in the forecast graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_snowGraphColor->setText(QString());
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Adjusts the bar width of bar representations.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("ConfigurationDialog", "Bar width", nullptr));
#if QT_CONFIG(tooltip)
        m_barWidthSlider->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Adjusts the bar width of bar representations.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_barWidthSpinbox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Adjusts the bar width of bar representations.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QCoreApplication::translate("ConfigurationDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Note:</span> In the forecast graphs the information can be hidden and shown again by clicking on the legend title text.</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigurationDialog", "Map Layers Opacity", nullptr));
        label_18->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature", nullptr));
        m_tempLayerSpinbox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "%", nullptr));
        label_21->setText(QCoreApplication::translate("ConfigurationDialog", "Clouds", nullptr));
        m_cloudLayerSpinbox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "%", nullptr));
        label_32->setText(QCoreApplication::translate("ConfigurationDialog", "Rain", nullptr));
        m_rainLayerSpinbox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "%", nullptr));
        label_34->setText(QCoreApplication::translate("ConfigurationDialog", "Wind", nullptr));
        m_windLayerSpinbox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "%", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_3), QCoreApplication::translate("ConfigurationDialog", "Units", nullptr));
        m_borderColor->setText(QString());
#if QT_CONFIG(tooltip)
        m_borderColorLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Select a border color automatically.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_borderColorLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Automatic border color", nullptr));
#if QT_CONFIG(tooltip)
        m_borderColorButton->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Custom temperature icon border color.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_borderColorButton->setText(QString());
        m_variable->setText(QCoreApplication::translate("ConfigurationDialog", "Variable", nullptr));
#if QT_CONFIG(tooltip)
        m_minColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Click to change minimum value color...", nullptr));
#endif // QT_CONFIG(tooltip)
        m_minColor->setText(QString());
        m_range->setText(QCoreApplication::translate("ConfigurationDialog", "Range", nullptr));
#if QT_CONFIG(tooltip)
        m_maxColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Click to change maximum value color...", nullptr));
#endif // QT_CONFIG(tooltip)
        m_maxColor->setText(QString());
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Type of tray icon to use.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("ConfigurationDialog", "Icon type", nullptr));
#if QT_CONFIG(tooltip)
        m_textColorLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selects the temperature icon text color", nullptr));
#endif // QT_CONFIG(tooltip)
        m_textColorLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature text color", nullptr));
        m_trayIconType->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "Weather icon", nullptr));
        m_trayIconType->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Temperature icon", nullptr));
        m_trayIconType->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Weather & temperature icon", nullptr));
        m_trayIconType->setItemText(3, QCoreApplication::translate("ConfigurationDialog", "Weather icon & temperature icon", nullptr));

#if QT_CONFIG(tooltip)
        m_trayIconType->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Type of tray icon to use.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_textFontLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selects the temperature icon text font", nullptr));
#endif // QT_CONFIG(tooltip)
        m_textFontLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature text font", nullptr));
#if QT_CONFIG(tooltip)
        m_iconThemeLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selects the icon theme.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_iconThemeLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Icon theme", nullptr));
        m_from->setText(QCoreApplication::translate("ConfigurationDialog", "from", nullptr));
#if QT_CONFIG(tooltip)
        m_minSpinBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Minimum range value", nullptr));
#endif // QT_CONFIG(tooltip)
        m_minSpinBox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "\302\272", nullptr));
        label_19->setText(QCoreApplication::translate("ConfigurationDialog", "to", nullptr));
#if QT_CONFIG(tooltip)
        m_maxSpinBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Maximum range value", nullptr));
#endif // QT_CONFIG(tooltip)
        m_maxSpinBox->setSuffix(QCoreApplication::translate("ConfigurationDialog", "\302\272", nullptr));
#if QT_CONFIG(tooltip)
        m_iconSize->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the temperature icon size.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_iconSizeSpinbox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the temperature icon size.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_tempIconSizeLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the temperature icon size.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tempIconSizeLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Temperature icon size", nullptr));
#if QT_CONFIG(tooltip)
        m_trayIconTheme->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selects the icon theme.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_iconThemeColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Changes icon theme color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_iconSummary->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Shows a summary of theme icons.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_drawDegree->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Draw the degree symbol in the temperature icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_drawDegree->setText(QString());
#if QT_CONFIG(tooltip)
        m_drawDegreeLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Draw the degree symbol in the temperature icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_drawDegreeLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Draw degree symbol", nullptr));
#if QT_CONFIG(tooltip)
        m_border->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Draw a border around temperature icon text.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_border->setText(QString());
#if QT_CONFIG(tooltip)
        m_borderLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Draw a border around temperature icon text.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_borderLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Draw a border around text for better contrast.", nullptr));
#if QT_CONFIG(tooltip)
        m_stretch->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Stretches the font vertically to occupy all available space in the icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_stretch->setText(QString());
#if QT_CONFIG(tooltip)
        m_stretchLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Stretches the font vertically to occupy all available space in the icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_stretchLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Stretch font vertically.", nullptr));
        m_fixed->setText(QCoreApplication::translate("ConfigurationDialog", "Fixed", nullptr));
#if QT_CONFIG(tooltip)
        m_trayTempColor->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Click to change fixed color...", nullptr));
#endif // QT_CONFIG(tooltip)
        m_trayTempColor->setText(QString());
#if QT_CONFIG(tooltip)
        m_fontButton->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Selects the temperature icon text font", nullptr));
#endif // QT_CONFIG(tooltip)
        m_fontButton->setText(QString());
#if QT_CONFIG(tooltip)
        m_fontPreview->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Preview of the temperature icon", nullptr));
#endif // QT_CONFIG(tooltip)
        m_fontPreview->setText(QString());
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the space between characters in the temperatura icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("ConfigurationDialog", "Letter spacing", nullptr));
#if QT_CONFIG(tooltip)
        m_spacingSlider->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the space between characters in the temperature icon.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_spacingSpinBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Modifies the space between characters in the temperatura icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_spacingSpinBox->setSuffix(QCoreApplication::translate("ConfigurationDialog", " px", nullptr));
#if QT_CONFIG(tooltip)
        m_borderWidthLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Width of the border around the text.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_borderWidthLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Border width", nullptr));
#if QT_CONFIG(tooltip)
        m_borderWidth->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Width of the border around the text.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_borderSpinBox->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Width of the border around the text.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_borderSpinBox->setSuffix(QCoreApplication::translate("ConfigurationDialog", " px", nullptr));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Tray icon background color.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("ConfigurationDialog", "Icon background color", nullptr));
        m_backgroundColor->setText(QString());
#if QT_CONFIG(tooltip)
        m_backgroundColorLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Sets the icons background as transparent.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_backgroundColorLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Transparent", nullptr));
#if QT_CONFIG(tooltip)
        m_backgroundColorButton->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Custom icons background color.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_backgroundColorButton->setText(QString());
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_2), QCoreApplication::translate("ConfigurationDialog", "Icon", nullptr));
        label_23->setText(QCoreApplication::translate("ConfigurationDialog", "The values shown in the tooltip are current values or the closest forecast value to the current local time. The values are shown in order, top to bottom of the list.", nullptr));
        label_29->setText(QCoreApplication::translate("ConfigurationDialog", "Value:", nullptr));
#if QT_CONFIG(tooltip)
        m_tooltipValueCombo->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Value to add to the list.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_tooltipAdd->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Add value to tooltip text", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tooltipAdd->setText(QString());
#if QT_CONFIG(tooltip)
        m_tooltipUp->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Move value up.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tooltipUp->setText(QString());
#if QT_CONFIG(tooltip)
        m_tooltipDown->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Move value down.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tooltipDown->setText(QString());
#if QT_CONFIG(tooltip)
        m_tooltipDelete->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Remove value from tooltip text", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tooltipDelete->setText(QString());
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_5), QCoreApplication::translate("ConfigurationDialog", "Icon Tooltip", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Check for application updates frequency.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("ConfigurationDialog", "Check for updates", nullptr));
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Language to use in the application interface.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("ConfigurationDialog", "Language", nullptr));
#if QT_CONFIG(tooltip)
        m_languageCombo->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Language to use in the application interface.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_31->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Shows weather alerts for the selected location.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_31->setText(QCoreApplication::translate("ConfigurationDialog", "Show weather alerts", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Elapsed time between requests for weather data.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("ConfigurationDialog", "Time between update requests", nullptr));
#if QT_CONFIG(tooltip)
        m_updateTime->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Elapsed time between requests for weather data.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_updateTime->setSuffix(QCoreApplication::translate("ConfigurationDialog", " minutes", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Application visual theme.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("ConfigurationDialog", "Visual theme", nullptr));
        m_updatesCombo->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "Never", nullptr));
        m_updatesCombo->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Once a day", nullptr));
        m_updatesCombo->setItemText(2, QCoreApplication::translate("ConfigurationDialog", "Once a week", nullptr));
        m_updatesCombo->setItemText(3, QCoreApplication::translate("ConfigurationDialog", "Once a month", nullptr));

#if QT_CONFIG(tooltip)
        m_updatesCombo->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Check for application updates frequency.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Sets to start the application automatically at user login.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("ConfigurationDialog", "Autostart at login", nullptr));
#if QT_CONFIG(tooltip)
        m_autostart->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Sets to start the application automatically at user login.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_autostart->setText(QString());
#if QT_CONFIG(tooltip)
        m_showAlerts->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Shows weather alerts for the selected location.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_showAlerts->setText(QString());
        m_theme->setItemText(0, QCoreApplication::translate("ConfigurationDialog", "Light", nullptr));
        m_theme->setItemText(1, QCoreApplication::translate("ConfigurationDialog", "Dark", nullptr));

#if QT_CONFIG(tooltip)
        m_theme->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Application visual theme.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_swapIcons->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Swaps tray icons. Only enabled if two icon representation is being used.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_swapIcons->setText(QString());
#if QT_CONFIG(tooltip)
        m_swapIconsLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Swaps tray icons. Only enabled if two icon representation is being used.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_swapIconsLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Swap tray icons", nullptr));
#if QT_CONFIG(tooltip)
        m_keepAlertsIconLabel->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Maintains the alert icon in the tray until all alerts have expired, not when all alerts have been seen.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_keepAlertsIconLabel->setText(QCoreApplication::translate("ConfigurationDialog", "Keep alert icon until all alerts expire", nullptr));
#if QT_CONFIG(tooltip)
        m_keepAlertsIcon->setToolTip(QCoreApplication::translate("ConfigurationDialog", "Maintains the alert icon in the tray until all alerts have expired, not when all alerts have been seen.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_keepAlertsIcon->setText(QString());
        label_28->setText(QCoreApplication::translate("ConfigurationDialog", "If your language is not available you can help with a <a href=\"https://github.com/FelixdelasPozas/TrayWeather#translations\">translation</a>.", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_4), QCoreApplication::translate("ConfigurationDialog", "Miscellaneous", nullptr));
        m_cancel->setText(QCoreApplication::translate("ConfigurationDialog", "Cancel", nullptr));
        m_ok->setText(QCoreApplication::translate("ConfigurationDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
