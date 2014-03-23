/********************************************************************************
** Form generated from reading UI file 'mplayererrorbase.ui'
**
** Created: Sun Mar 23 11:44:47 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPLAYERERRORBASE_H
#define UI_MPLAYERERRORBASE_H

#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <Qt3Support/Q3TextEdit>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mplayererrorbase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    Q3TextBrowser *textbrowser;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer13;
    QPushButton *okaybutton;

    void setupUi(QDialog *mplayererrorbase)
    {
        if (mplayererrorbase->objectName().isEmpty())
            mplayererrorbase->setObjectName(QString::fromUtf8("mplayererrorbase"));
        mplayererrorbase->resize(600, 480);
        vboxLayout = new QVBoxLayout(mplayererrorbase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(mplayererrorbase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        vboxLayout->addWidget(textLabel1);

        textbrowser = new Q3TextBrowser(mplayererrorbase);
        textbrowser->setObjectName(QString::fromUtf8("textbrowser"));
        textbrowser->setAutoFormatting(Q3TextEdit::AutoAll);

        vboxLayout->addWidget(textbrowser);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacer13 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer13);

        okaybutton = new QPushButton(mplayererrorbase);
        okaybutton->setObjectName(QString::fromUtf8("okaybutton"));

        hboxLayout->addWidget(okaybutton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(mplayererrorbase);
        QObject::connect(okaybutton, SIGNAL(clicked()), mplayererrorbase, SLOT(accept()));

        QMetaObject::connectSlotsByName(mplayererrorbase);
    } // setupUi

    void retranslateUi(QDialog *mplayererrorbase)
    {
        mplayererrorbase->setWindowTitle(QApplication::translate("mplayererrorbase", "dvbcut: MPlayer error", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("mplayererrorbase", "MPlayer finished unsuccesfully.", 0, QApplication::UnicodeUTF8));
        okaybutton->setText(QApplication::translate("mplayererrorbase", "okay", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mplayererrorbase: public Ui_mplayererrorbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPLAYERERRORBASE_H
