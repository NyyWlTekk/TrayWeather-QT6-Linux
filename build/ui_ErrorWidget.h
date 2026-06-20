/********************************************************************************
** Form generated from reading UI file 'ErrorWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWIDGET_H
#define UI_ERRORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_text;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ErrorWidget)
    {
        if (ErrorWidget->objectName().isEmpty())
            ErrorWidget->setObjectName("ErrorWidget");
        ErrorWidget->resize(400, 300);
        ErrorWidget->setWindowTitle(QString::fromUtf8("ErrorWidget"));
        verticalLayout = new QVBoxLayout(ErrorWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ErrorWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(128, 128));
        label->setMaximumSize(QSize(128, 128));
        label->setText(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/network_error.svg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        m_text = new QLabel(ErrorWidget);
        m_text->setObjectName("m_text");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        m_text->setFont(font);
        m_text->setText(QString::fromUtf8(""));
        m_text->setAlignment(Qt::AlignCenter);
        m_text->setWordWrap(true);

        verticalLayout->addWidget(m_text);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(ErrorWidget);

        QMetaObject::connectSlotsByName(ErrorWidget);
    } // setupUi

    void retranslateUi(QWidget *ErrorWidget)
    {
        (void)ErrorWidget;
    } // retranslateUi

};

namespace Ui {
    class ErrorWidget: public Ui_ErrorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWIDGET_H
