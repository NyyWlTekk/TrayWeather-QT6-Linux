/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Utils.h"

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *m_version;
    QLabel *m_copyright;
    QLabel *m_compilationDate;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_26;
    QLabel *m_qtVersion;
    QLabel *label_7;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QLabel *m_chartsVersion;
    QLabel *label_12;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_16;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_15;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    ClickableHoverLabel *m_banner;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_15;
    QTableWidget *m_providers;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *m_translations;
    QLabel *label_9;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *m_themes;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(374, 614);
        AboutDialog->setMaximumSize(QSize(374, 614));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TrayWeather/application.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AboutDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(tab);
        label->setObjectName("label");
        label->setMaximumSize(QSize(64, 64));
        label->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/application.svg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setText(QString::fromUtf8("Tray Weather"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        m_version = new QLabel(tab);
        m_version->setObjectName("m_version");
        m_version->setText(QString::fromUtf8("version 1.0.0"));
        m_version->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_version);

        m_copyright = new QLabel(tab);
        m_copyright->setObjectName("m_copyright");
        m_copyright->setText(QString::fromUtf8("Copyright (c) 2016-2019 F\303\251lix de las Pozas \303\201lvarez"));
        m_copyright->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_copyright);

        m_compilationDate = new QLabel(tab);
        m_compilationDate->setObjectName("m_compilationDate");
        m_compilationDate->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(m_compilationDate);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        line = new QFrame(tab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        groupBox = new QGroupBox(tab);
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
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(false);
        verticalLayout_11 = new QVBoxLayout(groupBox);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(32, 32));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/Qt.ico")));
        label_3->setScaledContents(true);

        horizontalLayout_7->addWidget(label_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_26 = new QLabel(groupBox);
        label_26->setObjectName("label_26");
        label_26->setFont(font);
        label_26->setText(QString::fromUtf8("libqt opensource\n"
"Qt Framework"));
        label_26->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_26);

        m_qtVersion = new QLabel(groupBox);
        m_qtVersion->setObjectName("m_qtVersion");
        m_qtVersion->setText(QString::fromUtf8("version 5.5.1"));
        m_qtVersion->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(m_qtVersion);


        horizontalLayout_7->addLayout(verticalLayout_4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setText(QString::fromUtf8("<a href=\"http://www.qt.io/\">http://www.qt.io/</a>"));
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setOpenExternalLinks(true);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_11->addLayout(horizontalLayout_7);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_11->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(32, 32));
        label_11->setMaximumSize(QSize(32, 32));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/Qt.ico")));
        label_11->setScaledContents(true);

        horizontalLayout_2->addWidget(label_11);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setText(QString::fromUtf8("QtCharts Module"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);

        m_chartsVersion = new QLabel(groupBox);
        m_chartsVersion->setObjectName("m_chartsVersion");
        m_chartsVersion->setText(QString::fromUtf8("version 2.1.0"));
        m_chartsVersion->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(m_chartsVersion);


        horizontalLayout_2->addLayout(verticalLayout_8);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setText(QString::fromUtf8("<a href=\"https://github.com/qt/qtcharts/\">https://github.com/qt/qtcharts</a>"));
        label_12->setAlignment(Qt::AlignCenter);
        label_12->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(label_12);


        verticalLayout_11->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
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
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setText(QString::fromUtf8("<a href=\"http://www.flaticon.com/\">http://www.flaticon.com/</a>\n"
""));
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(label_8);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");
        label_16->setText(QString::fromUtf8("<a href=\"https://www.svgrepo.com/\">https://www.svgrepo.com/</a>"));
        label_16->setAlignment(Qt::AlignCenter);
        label_16->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(label_16);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        label_5->setText(QString::fromUtf8("<a href=\"http://ip-api.com/\">http://ip-api.com/</a>"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setOpenExternalLinks(true);

        verticalLayout_6->addWidget(label_5);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(tab);
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
        verticalLayout_14 = new QVBoxLayout(groupBox_6);
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName("label_15");
        label_15->setText(QString::fromUtf8("<a href=\"https://www.ipify.org/\">https://www.ipify.org/</a>"));
        label_15->setAlignment(Qt::AlignCenter);
        label_15->setOpenExternalLinks(true);

        verticalLayout_14->addWidget(label_15);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(tab);
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
        verticalLayout_13 = new QVBoxLayout(groupBox_5);
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");
        label_13->setText(QString::fromUtf8("<a href=\"https://www.openstreetmap.org\">https://www.openstreetmap.org</a>"));
        label_13->setAlignment(Qt::AlignCenter);
        label_13->setOpenExternalLinks(true);

        verticalLayout_13->addWidget(label_13);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");
        label_14->setText(QString::fromUtf8("<a href=\"https://maps.google.com\">https://maps.google.com</a>"));
        label_14->setAlignment(Qt::AlignCenter);
        label_14->setOpenExternalLinks(true);

        verticalLayout_13->addWidget(label_14);


        verticalLayout_2->addWidget(groupBox_5);


        verticalLayout_9->addLayout(verticalLayout_2);

        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);
        label_6->setOpenExternalLinks(true);

        verticalLayout_9->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        m_banner = new ClickableHoverLabel(tab);
        m_banner->setObjectName("m_banner");
        m_banner->setMaximumSize(QSize(16777215, 60));
        m_banner->setPixmap(QPixmap(QString::fromUtf8(":/TrayWeather/kofi_logo.png")));
        m_banner->setScaledContents(true);

        horizontalLayout_3->addWidget(m_banner);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_15 = new QVBoxLayout(tab_4);
        verticalLayout_15->setObjectName("verticalLayout_15");
        m_providers = new QTableWidget(tab_4);
        if (m_providers->columnCount() < 2)
            m_providers->setColumnCount(2);
        m_providers->setObjectName("m_providers");
        m_providers->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_providers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_providers->setTabKeyNavigation(false);
        m_providers->setProperty("showDropIndicator", QVariant(false));
        m_providers->setDragDropOverwriteMode(false);
        m_providers->setAlternatingRowColors(true);
        m_providers->setSelectionMode(QAbstractItemView::NoSelection);
        m_providers->setShowGrid(true);
        m_providers->setCornerButtonEnabled(false);
        m_providers->setColumnCount(2);
        m_providers->horizontalHeader()->setVisible(false);
        m_providers->horizontalHeader()->setStretchLastSection(true);
        m_providers->verticalHeader()->setVisible(false);

        verticalLayout_15->addWidget(m_providers);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        m_translations = new QTableWidget(tab_2);
        if (m_translations->columnCount() < 2)
            m_translations->setColumnCount(2);
        m_translations->setObjectName("m_translations");
        m_translations->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_translations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_translations->setTabKeyNavigation(false);
        m_translations->setProperty("showDropIndicator", QVariant(false));
        m_translations->setDragDropOverwriteMode(false);
        m_translations->setAlternatingRowColors(true);
        m_translations->setSelectionMode(QAbstractItemView::NoSelection);
        m_translations->setShowGrid(true);
        m_translations->setCornerButtonEnabled(false);
        m_translations->setColumnCount(2);
        m_translations->horizontalHeader()->setVisible(false);
        m_translations->horizontalHeader()->setStretchLastSection(true);
        m_translations->verticalHeader()->setVisible(false);

        verticalLayout_10->addWidget(m_translations);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setOpenExternalLinks(true);

        verticalLayout_10->addWidget(label_9);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_12 = new QVBoxLayout(tab_3);
        verticalLayout_12->setObjectName("verticalLayout_12");
        m_themes = new QTableWidget(tab_3);
        m_themes->setObjectName("m_themes");
        m_themes->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        m_themes->setAlternatingRowColors(true);
        m_themes->setSelectionMode(QAbstractItemView::NoSelection);
        m_themes->setCornerButtonEnabled(false);
        m_themes->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_12->addWidget(m_themes);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMaximumSize(QSize(575, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About...", nullptr));
        label->setText(QString());
        m_compilationDate->setText(QCoreApplication::translate("AboutDialog", "Compiled on", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("AboutDialog", "TrayWeather Homepage", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("AboutDialog", "Homepage hosted on <a href=https://github.com/FelixdelasPozas/TrayWeather><b>GitHub</b></a>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AboutDialog", "Powered by", nullptr));
        label_3->setText(QString());
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("AboutDialog", "Qt Framework", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QString());
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("AboutDialog", "Qt Charts Module", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("AboutDialog", "Icons courtesy of", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("AboutDialog", "FlatIcon", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("AboutDialog", "IP Geolocation provided by", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("AboutDialog", "IP API", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_6->setTitle(QCoreApplication::translate("AboutDialog", "Public IP Address API provided by", nullptr));
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QCoreApplication::translate("AboutDialog", "IP API", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_5->setTitle(QCoreApplication::translate("AboutDialog", "Maps data provided by", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("AboutDialog", "OpenStreetMap", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("AboutDialog", "Google Maps", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("AboutDialog", "If you want to support this project you can do it on <a href=\"https://ko-fi.com/felixdelaspozas\">Ko-fi</a>.", nullptr));
#if QT_CONFIG(tooltip)
        m_banner->setToolTip(QCoreApplication::translate("AboutDialog", "You can support me on Ko-fi!", nullptr));
#endif // QT_CONFIG(tooltip)
        m_banner->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutDialog", "Tray Weather", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("AboutDialog", "Weather Providers", nullptr));
        label_9->setText(QCoreApplication::translate("AboutDialog", "If your language is not available you can help with a <a href=\"https://github.com/FelixdelasPozas/TrayWeather#translations\">translation</a>.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AboutDialog", "Translations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AboutDialog", "Icon Themes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
