/********************************************************************************
** Form generated from reading UI file 'progresswindowbase.ui'
**
** Created: Sun Mar 23 11:44:47 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWINDOWBASE_H
#define UI_PROGRESSWINDOWBASE_H

#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3ProgressBar>
#include <Qt3Support/Q3TextBrowser>
#include <Qt3Support/Q3TextEdit>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_progresswindowbase
{
public:
    QVBoxLayout *vboxLayout;
    Q3TextBrowser *logbrowser;
    QHBoxLayout *hboxLayout;
    Q3ProgressBar *progressbar;
    QPushButton *cancelbutton;

    void setupUi(QDialog *progresswindowbase)
    {
        if (progresswindowbase->objectName().isEmpty())
            progresswindowbase->setObjectName(QString::fromUtf8("progresswindowbase"));
        progresswindowbase->resize(600, 480);
        vboxLayout = new QVBoxLayout(progresswindowbase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        logbrowser = new Q3TextBrowser(progresswindowbase);
        logbrowser->setObjectName(QString::fromUtf8("logbrowser"));
        logbrowser->setTextFormat(Qt::LogText);

        vboxLayout->addWidget(logbrowser);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        progressbar = new Q3ProgressBar(progresswindowbase);
        progressbar->setObjectName(QString::fromUtf8("progressbar"));
        progressbar->setTotalSteps(1000);

        hboxLayout->addWidget(progressbar);

        cancelbutton = new QPushButton(progresswindowbase);
        cancelbutton->setObjectName(QString::fromUtf8("cancelbutton"));

        hboxLayout->addWidget(cancelbutton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(progresswindowbase);
        QObject::connect(cancelbutton, SIGNAL(clicked()), progresswindowbase, SLOT(clickedcancel()));

        QMetaObject::connectSlotsByName(progresswindowbase);
    } // setupUi

    void retranslateUi(QDialog *progresswindowbase)
    {
        progresswindowbase->setWindowTitle(QApplication::translate("progresswindowbase", "dvbcut", 0, QApplication::UnicodeUTF8));
        cancelbutton->setText(QApplication::translate("progresswindowbase", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class progresswindowbase: public Ui_progresswindowbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWINDOWBASE_H
