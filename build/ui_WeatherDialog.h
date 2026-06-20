/********************************************************************************
** Form generated from reading UI file 'WeatherDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERDIALOG_H
#define UI_WEATHERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *m_location;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *m_temp_max_label;
    QLabel *m_cloudiness;
    QLabel *m_rain;
    QLabel *m_sunrise;
    QLabel *label_7;
    QLabel *m_wind_dir;
    QLabel *m_temp_min_label;
    QLabel *m_sunset;
    QLabel *m_pressure;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *m_snow;
    QLabel *m_temp_min;
    QLabel *m_humidity;
    QLabel *m_air_quality;
    QLabel *m_temp;
    QLabel *label_4;
    QLabel *m_wind_speed;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_6;
    QLabel *m_airLabel;
    QLabel *label_13;
    QLabel *m_temp_max;
    QLabel *label_10;
    QLabel *m_uvLabel;
    QLabel *m_uvi;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_icon;
    QLabel *m_description;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_moonLabel;
    QLabel *m_moon_phase;
    QLabel *m_illumination;
    QLabel *m_moon;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_mapsButton;
    QPushButton *m_reset;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_ok;

    void setupUi(QDialog *WeatherDialog)
    {
        if (WeatherDialog->objectName().isEmpty())
            WeatherDialog->setObjectName("WeatherDialog");
        WeatherDialog->resize(717, 515);
        WeatherDialog->setMinimumSize(QSize(717, 515));
        WeatherDialog->setMaximumSize(QSize(717, 515));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TrayWeather/application.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        WeatherDialog->setWindowIcon(icon);
        WeatherDialog->setModal(true);
        verticalLayout = new QVBoxLayout(WeatherDialog);
        verticalLayout->setObjectName("verticalLayout");
        m_tabWidget = new QTabWidget(WeatherDialog);
        m_tabWidget->setObjectName("m_tabWidget");
        m_tabWidget->setTabPosition(QTabWidget::North);
        m_tabWidget->setTabShape(QTabWidget::Rounded);
        m_tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        m_location = new QLabel(tab);
        m_location->setObjectName("m_location");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        m_location->setFont(font);
        m_location->setAlignment(Qt::AlignCenter);
        m_location->setWordWrap(true);
        m_location->setMargin(4);

        verticalLayout_2->addWidget(m_location);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        QFont font1;
        font1.setBold(true);
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        m_temp_max_label = new QLabel(tab);
        m_temp_max_label->setObjectName("m_temp_max_label");
        m_temp_max_label->setFont(font1);

        gridLayout_2->addWidget(m_temp_max_label, 1, 0, 1, 1);

        m_cloudiness = new QLabel(tab);
        m_cloudiness->setObjectName("m_cloudiness");
        m_cloudiness->setFrameShape(QFrame::NoFrame);
        m_cloudiness->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_cloudiness, 3, 1, 1, 1);

        m_rain = new QLabel(tab);
        m_rain->setObjectName("m_rain");
        m_rain->setFrameShape(QFrame::NoFrame);
        m_rain->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_rain, 8, 1, 1, 1);

        m_sunrise = new QLabel(tab);
        m_sunrise->setObjectName("m_sunrise");

        gridLayout_2->addWidget(m_sunrise, 10, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        m_wind_dir = new QLabel(tab);
        m_wind_dir->setObjectName("m_wind_dir");
        m_wind_dir->setFrameShape(QFrame::NoFrame);
        m_wind_dir->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_wind_dir, 7, 1, 1, 1);

        m_temp_min_label = new QLabel(tab);
        m_temp_min_label->setObjectName("m_temp_min_label");
        m_temp_min_label->setFont(font1);

        gridLayout_2->addWidget(m_temp_min_label, 2, 0, 1, 1);

        m_sunset = new QLabel(tab);
        m_sunset->setObjectName("m_sunset");

        gridLayout_2->addWidget(m_sunset, 11, 1, 1, 1);

        m_pressure = new QLabel(tab);
        m_pressure->setObjectName("m_pressure");
        m_pressure->setFrameShape(QFrame::NoFrame);
        m_pressure->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_pressure, 5, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 10, 0, 1, 1);

        m_snow = new QLabel(tab);
        m_snow->setObjectName("m_snow");
        m_snow->setFrameShape(QFrame::NoFrame);
        m_snow->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_snow, 9, 1, 1, 1);

        m_temp_min = new QLabel(tab);
        m_temp_min->setObjectName("m_temp_min");
        m_temp_min->setFrameShape(QFrame::NoFrame);
        m_temp_min->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_temp_min, 2, 1, 1, 1);

        m_humidity = new QLabel(tab);
        m_humidity->setObjectName("m_humidity");
        m_humidity->setFrameShape(QFrame::NoFrame);
        m_humidity->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_humidity, 4, 1, 1, 1);

        m_air_quality = new QLabel(tab);
        m_air_quality->setObjectName("m_air_quality");

        gridLayout_2->addWidget(m_air_quality, 12, 1, 1, 1);

        m_temp = new QLabel(tab);
        m_temp->setObjectName("m_temp");
        m_temp->setFrameShape(QFrame::NoFrame);
        m_temp->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_temp, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        m_wind_speed = new QLabel(tab);
        m_wind_speed->setObjectName("m_wind_speed");
        m_wind_speed->setFrameShape(QFrame::NoFrame);
        m_wind_speed->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_wind_speed, 6, 1, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        m_airLabel = new QLabel(tab);
        m_airLabel->setObjectName("m_airLabel");
        m_airLabel->setFont(font1);

        gridLayout_2->addWidget(m_airLabel, 12, 0, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        gridLayout_2->addWidget(label_13, 11, 0, 1, 1);

        m_temp_max = new QLabel(tab);
        m_temp_max->setObjectName("m_temp_max");
        m_temp_max->setFrameShape(QFrame::NoFrame);
        m_temp_max->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(m_temp_max, 1, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        gridLayout_2->addWidget(label_10, 9, 0, 1, 1);

        m_uvLabel = new QLabel(tab);
        m_uvLabel->setObjectName("m_uvLabel");
        m_uvLabel->setFont(font1);

        gridLayout_2->addWidget(m_uvLabel, 13, 0, 1, 1);

        m_uvi = new QLabel(tab);
        m_uvi->setObjectName("m_uvi");

        gridLayout_2->addWidget(m_uvi, 13, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        m_icon = new QLabel(tab);
        m_icon->setObjectName("m_icon");
        m_icon->setText(QString::fromUtf8("WeatherIcon"));
        m_icon->setScaledContents(false);
        m_icon->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_icon);

        m_description = new QLabel(tab);
        m_description->setObjectName("m_description");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        m_description->setFont(font2);
        m_description->setText(QString::fromUtf8("description"));
        m_description->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_description);

        line_2 = new QFrame(tab);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        m_moonLabel = new QLabel(tab);
        m_moonLabel->setObjectName("m_moonLabel");
        m_moonLabel->setFont(font1);
        m_moonLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(m_moonLabel);

        m_moon_phase = new QLabel(tab);
        m_moon_phase->setObjectName("m_moon_phase");
        m_moon_phase->setText(QString::fromUtf8("moon_phase"));
        m_moon_phase->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(m_moon_phase);

        m_illumination = new QLabel(tab);
        m_illumination->setObjectName("m_illumination");
        m_illumination->setText(QString::fromUtf8("Illumination"));
        m_illumination->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(m_illumination);


        horizontalLayout_2->addLayout(verticalLayout_4);

        m_moon = new QLabel(tab);
        m_moon->setObjectName("m_moon");
        m_moon->setMinimumSize(QSize(64, 64));
        m_moon->setText(QString::fromUtf8("MoonIcon"));
        m_moon->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_moon);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);

        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        line = new QFrame(tab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_2->addLayout(gridLayout);

        verticalLayout_2->setStretch(1, 1);
        m_tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(m_tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        m_mapsButton = new QPushButton(WeatherDialog);
        m_mapsButton->setObjectName("m_mapsButton");

        horizontalLayout->addWidget(m_mapsButton);

        m_reset = new QPushButton(WeatherDialog);
        m_reset->setObjectName("m_reset");

        horizontalLayout->addWidget(m_reset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ok = new QPushButton(WeatherDialog);
        m_ok->setObjectName("m_ok");

        horizontalLayout->addWidget(m_ok);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WeatherDialog);
        QObject::connect(m_ok, &QPushButton::clicked, WeatherDialog, qOverload<>(&QDialog::accept));

        m_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WeatherDialog);
    } // setupUi

    void retranslateUi(QDialog *WeatherDialog)
    {
        WeatherDialog->setWindowTitle(QCoreApplication::translate("WeatherDialog", "Tray Weather", nullptr));
#if QT_CONFIG(tooltip)
        m_location->setToolTip(QCoreApplication::translate("WeatherDialog", "Location and date", nullptr));
#endif // QT_CONFIG(tooltip)
        m_location->setText(QCoreApplication::translate("WeatherDialog", "location", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("WeatherDialog", "Current wind direction", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("WeatherDialog", "Wind direction", nullptr));
#if QT_CONFIG(tooltip)
        m_temp_max_label->setToolTip(QCoreApplication::translate("WeatherDialog", "Maximum temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        m_temp_max_label->setText(QCoreApplication::translate("WeatherDialog", "Maximum temperature", nullptr));
#if QT_CONFIG(tooltip)
        m_cloudiness->setToolTip(QCoreApplication::translate("WeatherDialog", "Current cloudiness", nullptr));
#endif // QT_CONFIG(tooltip)
        m_cloudiness->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_rain->setToolTip(QCoreApplication::translate("WeatherDialog", "Rain accumulation in the last 3 hours", nullptr));
#endif // QT_CONFIG(tooltip)
        m_rain->setText(QCoreApplication::translate("WeatherDialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        m_sunrise->setToolTip(QCoreApplication::translate("WeatherDialog", "Sunrise time", nullptr));
#endif // QT_CONFIG(tooltip)
        m_sunrise->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("WeatherDialog", "Current wind speed", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("WeatherDialog", "Wind speed", nullptr));
#if QT_CONFIG(tooltip)
        m_wind_dir->setToolTip(QCoreApplication::translate("WeatherDialog", "Current wind direction", nullptr));
#endif // QT_CONFIG(tooltip)
        m_wind_dir->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_temp_min_label->setToolTip(QCoreApplication::translate("WeatherDialog", "Minimum temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        m_temp_min_label->setText(QCoreApplication::translate("WeatherDialog", "Minimum temperature", nullptr));
#if QT_CONFIG(tooltip)
        m_sunset->setToolTip(QCoreApplication::translate("WeatherDialog", "Sunset time", nullptr));
#endif // QT_CONFIG(tooltip)
        m_sunset->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_pressure->setToolTip(QCoreApplication::translate("WeatherDialog", "Current ground pressure", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pressure->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("WeatherDialog", "Current humidity", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("WeatherDialog", "Humidity", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("WeatherDialog", "Sunrise time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("WeatherDialog", "Sunrise", nullptr));
#if QT_CONFIG(tooltip)
        m_snow->setToolTip(QCoreApplication::translate("WeatherDialog", "Snow accumulation in the last 3 hours", nullptr));
#endif // QT_CONFIG(tooltip)
        m_snow->setText(QCoreApplication::translate("WeatherDialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        m_temp_min->setToolTip(QCoreApplication::translate("WeatherDialog", "Minimum temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        m_temp_min->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_humidity->setToolTip(QCoreApplication::translate("WeatherDialog", "Current humidity", nullptr));
#endif // QT_CONFIG(tooltip)
        m_humidity->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_air_quality->setToolTip(QCoreApplication::translate("WeatherDialog", "Air quality", nullptr));
#endif // QT_CONFIG(tooltip)
        m_air_quality->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_temp->setToolTip(QCoreApplication::translate("WeatherDialog", "Current temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        m_temp->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("WeatherDialog", "Current cloudiness", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("WeatherDialog", "Cloudiness", nullptr));
#if QT_CONFIG(tooltip)
        m_wind_speed->setToolTip(QCoreApplication::translate("WeatherDialog", "Current wind speed", nullptr));
#endif // QT_CONFIG(tooltip)
        m_wind_speed->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("WeatherDialog", "Rain accumulation in the last 3 hours", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("WeatherDialog", "Rain accumulation", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("WeatherDialog", "Current temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("WeatherDialog", "Temperature", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("WeatherDialog", "Current ground pressure", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("WeatherDialog", "Ground pressure", nullptr));
        m_airLabel->setText(QCoreApplication::translate("WeatherDialog", "Air Quality", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("WeatherDialog", "Sunset time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("WeatherDialog", "Sunset", nullptr));
#if QT_CONFIG(tooltip)
        m_temp_max->setToolTip(QCoreApplication::translate("WeatherDialog", "Maximum temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        m_temp_max->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("WeatherDialog", "Snow accumulation in the last 3 hours", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("WeatherDialog", "Snow accumulation", nullptr));
        m_uvLabel->setText(QCoreApplication::translate("WeatherDialog", "Ultraviolet radiation", nullptr));
        m_uvi->setText(QCoreApplication::translate("WeatherDialog", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_icon->setToolTip(QCoreApplication::translate("WeatherDialog", "Current weather icon", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_description->setToolTip(QCoreApplication::translate("WeatherDialog", "Current weather description", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_moonLabel->setToolTip(QCoreApplication::translate("WeatherDialog", "Current moon phase", nullptr));
#endif // QT_CONFIG(tooltip)
        m_moonLabel->setText(QCoreApplication::translate("WeatherDialog", "Moon phase", nullptr));
#if QT_CONFIG(tooltip)
        m_moon->setToolTip(QCoreApplication::translate("WeatherDialog", "Current moon phase", nullptr));
#endif // QT_CONFIG(tooltip)
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab), QCoreApplication::translate("WeatherDialog", "Current Weather", nullptr));
#if QT_CONFIG(tooltip)
        m_tabWidget->setTabToolTip(m_tabWidget->indexOf(tab), QCoreApplication::translate("WeatherDialog", "Current weather information", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_mapsButton->setToolTip(QCoreApplication::translate("WeatherDialog", "Show weather maps.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_mapsButton->setText(QCoreApplication::translate("WeatherDialog", "Show Maps", nullptr));
#if QT_CONFIG(tooltip)
        m_reset->setToolTip(QCoreApplication::translate("WeatherDialog", "Reset graph zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        m_reset->setText(QCoreApplication::translate("WeatherDialog", "Reset Zoom", nullptr));
#if QT_CONFIG(tooltip)
        m_ok->setToolTip(QCoreApplication::translate("WeatherDialog", "Close dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        m_ok->setText(QCoreApplication::translate("WeatherDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeatherDialog: public Ui_WeatherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERDIALOG_H
