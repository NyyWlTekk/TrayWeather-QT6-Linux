/********************************************************************************
** Form generated from reading UI file 'LocationFinderDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONFINDERDIALOG_H
#define UI_LOCATIONFINDERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LocationFinderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_location;
    QPushButton *m_searchButton;
    QFrame *line;
    QLabel *label_3;
    QTableWidget *m_locationsTable;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *LocationFinderDialog)
    {
        if (LocationFinderDialog->objectName().isEmpty())
            LocationFinderDialog->setObjectName("LocationFinderDialog");
        LocationFinderDialog->resize(669, 328);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TrayWeather/application.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LocationFinderDialog->setWindowIcon(icon);
        LocationFinderDialog->setModal(true);
        verticalLayout = new QVBoxLayout(LocationFinderDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(LocationFinderDialog);
        label_2->setObjectName("label_2");
        label_2->setTextFormat(Qt::RichText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label_2->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LocationFinderDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        m_location = new QLineEdit(LocationFinderDialog);
        m_location->setObjectName("m_location");
        m_location->setClearButtonEnabled(true);

        horizontalLayout->addWidget(m_location);

        m_searchButton = new QPushButton(LocationFinderDialog);
        m_searchButton->setObjectName("m_searchButton");

        horizontalLayout->addWidget(m_searchButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(LocationFinderDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(LocationFinderDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        m_locationsTable = new QTableWidget(LocationFinderDialog);
        if (m_locationsTable->columnCount() < 6)
            m_locationsTable->setColumnCount(6);
        m_locationsTable->setObjectName("m_locationsTable");
        m_locationsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_locationsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_locationsTable->setProperty("showDropIndicator", QVariant(false));
        m_locationsTable->setDragDropOverwriteMode(false);
        m_locationsTable->setAlternatingRowColors(true);
        m_locationsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        m_locationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        m_locationsTable->setColumnCount(6);
        m_locationsTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(m_locationsTable);

        m_buttonBox = new QDialogButtonBox(LocationFinderDialog);
        m_buttonBox->setObjectName("m_buttonBox");
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);


        retranslateUi(LocationFinderDialog);
        QObject::connect(m_buttonBox, &QDialogButtonBox::accepted, LocationFinderDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_buttonBox, &QDialogButtonBox::rejected, LocationFinderDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LocationFinderDialog);
    } // setupUi

    void retranslateUi(QDialog *LocationFinderDialog)
    {
        LocationFinderDialog->setWindowTitle(QCoreApplication::translate("LocationFinderDialog", "Search location coordinates", nullptr));
        label_2->setText(QCoreApplication::translate("LocationFinderDialog", "<html><head/><body><p>Enter the city name and, optionally, the state code (only for the US) and country code divided by comma. Use <a href=\"https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2\">ISO 3166 country codes</a>. For example: \"London, GB\".</p>\n"
"</body></html>", nullptr));
        label->setText(QCoreApplication::translate("LocationFinderDialog", "Location:", nullptr));
        m_location->setPlaceholderText(QCoreApplication::translate("LocationFinderDialog", "Enter location...", nullptr));
        m_searchButton->setText(QCoreApplication::translate("LocationFinderDialog", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("LocationFinderDialog", "Search results:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocationFinderDialog: public Ui_LocationFinderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONFINDERDIALOG_H
