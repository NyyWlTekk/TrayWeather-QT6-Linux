/********************************************************************************
** Form generated from reading UI file 'WeatherWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERWIDGET_H
#define UI_WEATHERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_dateTime;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_icon;
    QLabel *m_description;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *m_temperature;
    QLabel *m_cloudiness;
    QLabel *m_humidity;
    QLabel *m_pressure;
    QLabel *m_rain;
    QLabel *m_snow;

    void setupUi(QWidget *WeatherWidget)
    {
        if (WeatherWidget->objectName().isEmpty())
            WeatherWidget->setObjectName("WeatherWidget");
        WeatherWidget->resize(169, 162);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WeatherWidget->sizePolicy().hasHeightForWidth());
        WeatherWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(WeatherWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        m_dateTime = new QLabel(WeatherWidget);
        m_dateTime->setObjectName("m_dateTime");
        QFont font;
        font.setBold(true);
        m_dateTime->setFont(font);
        m_dateTime->setText(QString::fromUtf8("TextLabel"));
        m_dateTime->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_dateTime);

        line = new QFrame(WeatherWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(5, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        m_icon = new QLabel(WeatherWidget);
        m_icon->setObjectName("m_icon");
        m_icon->setMinimumSize(QSize(64, 64));
        m_icon->setMaximumSize(QSize(64, 64));
        m_icon->setText(QString::fromUtf8("icon"));
        m_icon->setScaledContents(true);
        m_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(m_icon);


        verticalLayout_2->addLayout(horizontalLayout_3);

        m_description = new QLabel(WeatherWidget);
        m_description->setObjectName("m_description");
        m_description->setFont(font);
        m_description->setText(QString::fromUtf8("description"));
        m_description->setScaledContents(true);
        m_description->setAlignment(Qt::AlignCenter);
        m_description->setWordWrap(true);

        verticalLayout_2->addWidget(m_description);

        verticalSpacer_2 = new QSpacerItem(5, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        m_temperature = new QLabel(WeatherWidget);
        m_temperature->setObjectName("m_temperature");
        QFont font1;
        font1.setBold(false);
        m_temperature->setFont(font1);
        m_temperature->setText(QString::fromUtf8("temp"));

        verticalLayout->addWidget(m_temperature);

        m_cloudiness = new QLabel(WeatherWidget);
        m_cloudiness->setObjectName("m_cloudiness");
        m_cloudiness->setFont(font1);
        m_cloudiness->setText(QString::fromUtf8("cloudiness"));

        verticalLayout->addWidget(m_cloudiness);

        m_humidity = new QLabel(WeatherWidget);
        m_humidity->setObjectName("m_humidity");
        m_humidity->setFont(font1);
        m_humidity->setText(QString::fromUtf8("humidity"));

        verticalLayout->addWidget(m_humidity);

        m_pressure = new QLabel(WeatherWidget);
        m_pressure->setObjectName("m_pressure");
        m_pressure->setFont(font1);
        m_pressure->setText(QString::fromUtf8("pressure"));

        verticalLayout->addWidget(m_pressure);

        m_rain = new QLabel(WeatherWidget);
        m_rain->setObjectName("m_rain");
        m_rain->setFont(font1);
        m_rain->setText(QString::fromUtf8("rain"));

        verticalLayout->addWidget(m_rain);

        m_snow = new QLabel(WeatherWidget);
        m_snow->setObjectName("m_snow");
        m_snow->setFont(font1);
        m_snow->setText(QString::fromUtf8("snow"));

        verticalLayout->addWidget(m_snow);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(WeatherWidget);

        QMetaObject::connectSlotsByName(WeatherWidget);
    } // setupUi

    void retranslateUi(QWidget *WeatherWidget)
    {
        (void)WeatherWidget;
    } // retranslateUi

};

namespace Ui {
    class WeatherWidget: public Ui_WeatherWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERWIDGET_H
