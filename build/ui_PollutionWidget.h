/********************************************************************************
** Form generated from reading UI file 'PollutionWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLLUTIONWIDGET_H
#define UI_POLLUTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PollutionWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_dateTime;
    QFrame *line;
    QLabel *m_description;
    QGridLayout *gridLayout;

    void setupUi(QWidget *PollutionWidget)
    {
        if (PollutionWidget->objectName().isEmpty())
            PollutionWidget->setObjectName("PollutionWidget");
        PollutionWidget->resize(200, 173);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PollutionWidget->sizePolicy().hasHeightForWidth());
        PollutionWidget->setSizePolicy(sizePolicy);
        PollutionWidget->setMinimumSize(QSize(200, 150));
        horizontalLayout = new QHBoxLayout(PollutionWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        m_dateTime = new QLabel(PollutionWidget);
        m_dateTime->setObjectName("m_dateTime");
        QFont font;
        font.setBold(true);
        m_dateTime->setFont(font);
        m_dateTime->setText(QString::fromUtf8("TextLabel"));
        m_dateTime->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_dateTime);

        line = new QFrame(PollutionWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        m_description = new QLabel(PollutionWidget);
        m_description->setObjectName("m_description");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        m_description->setFont(font1);
        m_description->setText(QString::fromUtf8("description"));
        m_description->setScaledContents(true);
        m_description->setAlignment(Qt::AlignCenter);
        m_description->setWordWrap(true);

        verticalLayout_3->addWidget(m_description);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");

        verticalLayout_3->addLayout(gridLayout);

        verticalLayout_3->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(PollutionWidget);

        QMetaObject::connectSlotsByName(PollutionWidget);
    } // setupUi

    void retranslateUi(QWidget *PollutionWidget)
    {
        (void)PollutionWidget;
    } // retranslateUi

};

namespace Ui {
    class PollutionWidget: public Ui_PollutionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLLUTIONWIDGET_H
