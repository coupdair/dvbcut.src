/********************************************************************************
** Form generated from reading UI file 'exportdialogbase.ui'
**
** Created: Sun Mar 23 11:44:47 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOGBASE_H
#define UI_EXPORTDIALOGBASE_H

#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3ListBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_exportdialogbase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QToolButton *filenamebrowsebutton;
    QLabel *textLabel1;
    QLineEdit *filenameline;
    QLabel *textLabel2;
    QComboBox *muxercombo;
    Q3GroupBox *groupBox1;
    QVBoxLayout *vboxLayout1;
    Q3ListBox *audiolist;
    QFrame *line1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *exportdialogbase)
    {
        if (exportdialogbase->objectName().isEmpty())
            exportdialogbase->setObjectName(QString::fromUtf8("exportdialogbase"));
        exportdialogbase->resize(664, 343);
        exportdialogbase->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(exportdialogbase);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filenamebrowsebutton = new QToolButton(exportdialogbase);
        filenamebrowsebutton->setObjectName(QString::fromUtf8("filenamebrowsebutton"));

        gridLayout->addWidget(filenamebrowsebutton, 0, 2, 1, 1);

        textLabel1 = new QLabel(exportdialogbase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        filenameline = new QLineEdit(exportdialogbase);
        filenameline->setObjectName(QString::fromUtf8("filenameline"));

        gridLayout->addWidget(filenameline, 0, 1, 1, 1);

        textLabel2 = new QLabel(exportdialogbase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        muxercombo = new QComboBox(exportdialogbase);
        muxercombo->setObjectName(QString::fromUtf8("muxercombo"));

        gridLayout->addWidget(muxercombo, 1, 1, 1, 2);


        vboxLayout->addLayout(gridLayout);

        groupBox1 = new Q3GroupBox(exportdialogbase);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setColumnLayout(0, Qt::Vertical);
        groupBox1->layout()->setSpacing(6);
        groupBox1->layout()->setContentsMargins(11, 11, 11, 11);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox1->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        audiolist = new Q3ListBox(groupBox1);
        audiolist->setObjectName(QString::fromUtf8("audiolist"));
        audiolist->setSelectionMode(Q3ListBox::Multi);

        vboxLayout1->addWidget(audiolist);


        vboxLayout->addWidget(groupBox1);

        line1 = new QFrame(exportdialogbase);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        buttonOk = new QPushButton(exportdialogbase);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(exportdialogbase);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(exportdialogbase);
        QObject::connect(buttonOk, SIGNAL(clicked()), exportdialogbase, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), exportdialogbase, SLOT(reject()));
        QObject::connect(filenamebrowsebutton, SIGNAL(clicked()), exportdialogbase, SLOT(fileselector()));

        QMetaObject::connectSlotsByName(exportdialogbase);
    } // setupUi

    void retranslateUi(QDialog *exportdialogbase)
    {
        exportdialogbase->setWindowTitle(QApplication::translate("exportdialogbase", "dvbcut: export video", 0, QApplication::UnicodeUTF8));
        filenamebrowsebutton->setText(QApplication::translate("exportdialogbase", "...", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("exportdialogbase", "Export as:", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("exportdialogbase", "Output format:", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("exportdialogbase", "Audio channels", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("exportdialogbase", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("exportdialogbase", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class exportdialogbase: public Ui_exportdialogbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOGBASE_H
