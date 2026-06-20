/********************************************************************************
** Form generated from reading UI file 'UVWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UVWIDGET_H
#define UI_UVWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UVWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_dateTime;
    QFrame *line;
    QLabel *m_level;
    QLabel *m_description;
    QLabel *m_suggestion;

    void setupUi(QWidget *UVWidget)
    {
        if (UVWidget->objectName().isEmpty())
            UVWidget->setObjectName("UVWidget");
        UVWidget->resize(168, 137);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UVWidget->sizePolicy().hasHeightForWidth());
        UVWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(UVWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        m_dateTime = new QLabel(UVWidget);
        m_dateTime->setObjectName("m_dateTime");
        QFont font;
        font.setBold(true);
        m_dateTime->setFont(font);
        m_dateTime->setText(QString::fromUtf8("TextLabel"));
        m_dateTime->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_dateTime);

        line = new QFrame(UVWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        m_level = new QLabel(UVWidget);
        m_level->setObjectName("m_level");
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        m_level->setFont(font1);
        m_level->setText(QString::fromUtf8("L"));
        m_level->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_level);

        m_description = new QLabel(UVWidget);
        m_description->setObjectName("m_description");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        m_description->setFont(font2);
        m_description->setText(QString::fromUtf8("description"));
        m_description->setScaledContents(true);
        m_description->setAlignment(Qt::AlignCenter);
        m_description->setWordWrap(true);

        verticalLayout_3->addWidget(m_description);

        m_suggestion = new QLabel(UVWidget);
        m_suggestion->setObjectName("m_suggestion");
        m_suggestion->setText(QString::fromUtf8("suggestion"));
        m_suggestion->setAlignment(Qt::AlignCenter);
        m_suggestion->setWordWrap(true);

        verticalLayout_3->addWidget(m_suggestion);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(UVWidget);

        QMetaObject::connectSlotsByName(UVWidget);
    } // setupUi

    void retranslateUi(QWidget *UVWidget)
    {
        (void)UVWidget;
    } // retranslateUi

};

namespace Ui {
    class UVWidget: public Ui_UVWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UVWIDGET_H
