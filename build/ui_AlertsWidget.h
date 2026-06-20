/********************************************************************************
** Form generated from reading UI file 'AlertsWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTSWIDGET_H
#define UI_ALERTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlertWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *m_nextLayout;
    QLabel *m_alertsNum;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_previous;
    QPushButton *m_next;
    QSpacerItem *verticalSpacer;
    QLabel *m_alertsNumLabel;
    QLabel *m_end;
    QLabel *m_description;
    QLabel *m_event;
    QLabel *label_2;
    QLabel *m_start;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *m_sender;

    void setupUi(QWidget *AlertWidget)
    {
        if (AlertWidget->objectName().isEmpty())
            AlertWidget->setObjectName("AlertWidget");
        AlertWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(AlertWidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        m_nextLayout = new QHBoxLayout();
        m_nextLayout->setSpacing(6);
        m_nextLayout->setObjectName("m_nextLayout");
        m_alertsNum = new QLabel(AlertWidget);
        m_alertsNum->setObjectName("m_alertsNum");
        QFont font;
        font.setBold(true);
        m_alertsNum->setFont(font);
        m_alertsNum->setText(QString::fromUtf8("1/1"));
        m_alertsNum->setAlignment(Qt::AlignCenter);

        m_nextLayout->addWidget(m_alertsNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        m_nextLayout->addItem(horizontalSpacer);

        m_previous = new QPushButton(AlertWidget);
        m_previous->setObjectName("m_previous");

        m_nextLayout->addWidget(m_previous);

        m_next = new QPushButton(AlertWidget);
        m_next->setObjectName("m_next");

        m_nextLayout->addWidget(m_next);


        gridLayout->addLayout(m_nextLayout, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        m_alertsNumLabel = new QLabel(AlertWidget);
        m_alertsNumLabel->setObjectName("m_alertsNumLabel");
        m_alertsNumLabel->setFont(font);
        m_alertsNumLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_alertsNumLabel, 6, 0, 1, 1);

        m_end = new QLabel(AlertWidget);
        m_end->setObjectName("m_end");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_end->sizePolicy().hasHeightForWidth());
        m_end->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_end, 3, 1, 1, 1);

        m_description = new QLabel(AlertWidget);
        m_description->setObjectName("m_description");
        m_description->setWordWrap(true);

        gridLayout->addWidget(m_description, 4, 1, 1, 1);

        m_event = new QLabel(AlertWidget);
        m_event->setObjectName("m_event");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_event->sizePolicy().hasHeightForWidth());
        m_event->setSizePolicy(sizePolicy1);
        m_event->setWordWrap(true);

        gridLayout->addWidget(m_event, 1, 1, 1, 1);

        label_2 = new QLabel(AlertWidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_start = new QLabel(AlertWidget);
        m_start->setObjectName("m_start");
        sizePolicy.setHeightForWidth(m_start->sizePolicy().hasHeightForWidth());
        m_start->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_start, 2, 1, 1, 1);

        label_8 = new QLabel(AlertWidget);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_6 = new QLabel(AlertWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_4 = new QLabel(AlertWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_10 = new QLabel(AlertWidget);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        m_sender = new QLabel(AlertWidget);
        m_sender->setObjectName("m_sender");
        sizePolicy.setHeightForWidth(m_sender->sizePolicy().hasHeightForWidth());
        m_sender->setSizePolicy(sizePolicy);
        m_sender->setWordWrap(true);

        gridLayout->addWidget(m_sender, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(AlertWidget);

        QMetaObject::connectSlotsByName(AlertWidget);
    } // setupUi

    void retranslateUi(QWidget *AlertWidget)
    {
#if QT_CONFIG(tooltip)
        m_alertsNum->setToolTip(QCoreApplication::translate("AlertWidget", "Current alert number.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_previous->setToolTip(QCoreApplication::translate("AlertWidget", "Show previous alert.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_previous->setText(QCoreApplication::translate("AlertWidget", "Previous", nullptr));
#if QT_CONFIG(tooltip)
        m_next->setToolTip(QCoreApplication::translate("AlertWidget", "Show next alert.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_next->setText(QCoreApplication::translate("AlertWidget", "Next", nullptr));
#if QT_CONFIG(tooltip)
        m_alertsNumLabel->setToolTip(QCoreApplication::translate("AlertWidget", "Number of alerts.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_alertsNumLabel->setText(QCoreApplication::translate("AlertWidget", "Alert", nullptr));
#if QT_CONFIG(tooltip)
        m_end->setToolTip(QCoreApplication::translate("AlertWidget", "Expiration time of the event.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_end->setText(QCoreApplication::translate("AlertWidget", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_description->setToolTip(QCoreApplication::translate("AlertWidget", "Event description.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_description->setText(QCoreApplication::translate("AlertWidget", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        m_event->setToolTip(QCoreApplication::translate("AlertWidget", "Weather alert event.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_event->setText(QCoreApplication::translate("AlertWidget", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("AlertWidget", "Sender of the alert.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("AlertWidget", "Sender", nullptr));
#if QT_CONFIG(tooltip)
        m_start->setToolTip(QCoreApplication::translate("AlertWidget", "Start time of the event.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_start->setText(QCoreApplication::translate("AlertWidget", "Unknown", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("AlertWidget", "Expiration time of the event.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("AlertWidget", "End", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("AlertWidget", "Start time of the event.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("AlertWidget", "Start", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("AlertWidget", "Weather alert event.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("AlertWidget", "Event", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("AlertWidget", "Event description.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("AlertWidget", "Description", nullptr));
#if QT_CONFIG(tooltip)
        m_sender->setToolTip(QCoreApplication::translate("AlertWidget", "Sender of the alert.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_sender->setText(QCoreApplication::translate("AlertWidget", "Unknown", nullptr));
        (void)AlertWidget;
    } // retranslateUi

};

namespace Ui {
    class AlertWidget: public Ui_AlertWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTSWIDGET_H
