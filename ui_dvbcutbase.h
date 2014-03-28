/********************************************************************************
** Form generated from reading UI file 'dvbcutbase.ui'
**
** Created: Fri Mar 28 21:55:32 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVBCUTBASE_H
#define UI_DVBCUTBASE_H

#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3ListBox>
#include <Qt3Support/Q3MainWindow>
#include <Qt3Support/Q3ToolBar>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dvbcutbase
{
public:
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *fileCloseAction;
    QAction *playAudio1Action;
    QAction *playAudio2Action;
    QAction *playPlayAction;
    QAction *playStopAction;
    QAction *editStartAction;
    QAction *editStopAction;
    QAction *editChapterAction;
    QAction *editBookmarkAction;
    QAction *editAutoChaptersAction;
    QAction *editSuggestAction;
    QAction *editImportAction;
    QAction *fileNewAction;
    QAction *fileExportAction;
    QAction *viewNormalAction;
    QAction *viewUnscaledAction;
    QAction *viewDifferenceAction;
    QAction *viewFullSizeAction;
    QAction *viewQuarterSizeAction;
    QAction *viewCustomSizeAction;
    QAction *zoomInAction;
    QAction *zoomOutAction;
    QAction *viewHalfSizeAction;
    QAction *snapshotSaveAction;
    QAction *chapterSnapshotsSaveAction;
    QAction *helpAboutAction;
    QAction *helpContentAction;
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter3;
    Q3ListBox *eventlist;
    QWidget *layout7;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *imagedisplay;
    QSpacerItem *spacer1;
    QSpacerItem *spacer4;
    QHBoxLayout *hboxLayout1;
    QLineEdit *goinput;
    QPushButton *gobutton;
    QSpacerItem *spacer6;
    QLabel *picinfolabel;
    QSpacerItem *spacer61;
    QLineEdit *goinput2;
    QPushButton *gobutton2;
    QHBoxLayout *hboxLayout2;
    QLabel *pictimelabel;
    QSpacerItem *spacer62;
    QLabel *picinfolabel2;
    QSpacerItem *spacer63;
    QLabel *pictimelabel2;
    QFrame *line3;
    QSlider *linslider;
    QSlider *jogslider;
    Q3ToolBar *fileToolbar;
    Q3ToolBar *Toolbar;
    Q3ToolBar *playToolbar;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *playMenu;
    QMenu *Help;

    void setupUi(Q3MainWindow *dvbcutbase)
    {
        if (dvbcutbase->objectName().isEmpty())
            dvbcutbase->setObjectName(QString::fromUtf8("dvbcutbase"));
        dvbcutbase->resize(741, 580);
        dvbcutbase->setUsesTextLabel(false);
        fileOpenAction = new QAction(dvbcutbase);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image0"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon);
        fileOpenAction->setProperty("name", QVariant(QByteArray("fileOpenAction")));
        fileSaveAction = new QAction(dvbcutbase);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        fileSaveAction->setChecked(false);
        fileSaveAction->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image1"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon1);
        fileSaveAction->setProperty("name", QVariant(QByteArray("fileSaveAction")));
        fileSaveAsAction = new QAction(dvbcutbase);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        fileSaveAsAction->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image2"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAsAction->setIcon(icon2);
        fileSaveAsAction->setProperty("name", QVariant(QByteArray("fileSaveAsAction")));
        fileCloseAction = new QAction(dvbcutbase);
        fileCloseAction->setObjectName(QString::fromUtf8("fileCloseAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image3"), QSize(), QIcon::Normal, QIcon::Off);
        fileCloseAction->setIcon(icon3);
        fileCloseAction->setProperty("name", QVariant(QByteArray("fileCloseAction")));
        playAudio1Action = new QAction(dvbcutbase);
        playAudio1Action->setObjectName(QString::fromUtf8("playAudio1Action"));
        playAudio1Action->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("image4"), QSize(), QIcon::Normal, QIcon::Off);
        playAudio1Action->setIcon(icon4);
        playAudio1Action->setProperty("name", QVariant(QByteArray("playAudio1Action")));
        playAudio2Action = new QAction(dvbcutbase);
        playAudio2Action->setObjectName(QString::fromUtf8("playAudio2Action"));
        playAudio2Action->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image5"), QSize(), QIcon::Normal, QIcon::Off);
        playAudio2Action->setIcon(icon5);
        playAudio2Action->setProperty("name", QVariant(QByteArray("playAudio2Action")));
        playPlayAction = new QAction(dvbcutbase);
        playPlayAction->setObjectName(QString::fromUtf8("playPlayAction"));
        playPlayAction->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("image6"), QSize(), QIcon::Normal, QIcon::Off);
        playPlayAction->setIcon(icon6);
        playPlayAction->setProperty("name", QVariant(QByteArray("playPlayAction")));
        playStopAction = new QAction(dvbcutbase);
        playStopAction->setObjectName(QString::fromUtf8("playStopAction"));
        playStopAction->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("image7"), QSize(), QIcon::Normal, QIcon::Off);
        playStopAction->setIcon(icon7);
        playStopAction->setProperty("name", QVariant(QByteArray("playStopAction")));
        editStartAction = new QAction(dvbcutbase);
        editStartAction->setObjectName(QString::fromUtf8("editStartAction"));
        editStartAction->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        editStartAction->setIcon(icon8);
        editStartAction->setProperty("name", QVariant(QByteArray("editStartAction")));
        editStopAction = new QAction(dvbcutbase);
        editStopAction->setObjectName(QString::fromUtf8("editStopAction"));
        editStopAction->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        editStopAction->setIcon(icon9);
        editStopAction->setProperty("name", QVariant(QByteArray("editStopAction")));
        editChapterAction = new QAction(dvbcutbase);
        editChapterAction->setObjectName(QString::fromUtf8("editChapterAction"));
        editChapterAction->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/chapter.png"), QSize(), QIcon::Normal, QIcon::Off);
        editChapterAction->setIcon(icon10);
        editChapterAction->setProperty("name", QVariant(QByteArray("editChapterAction")));
        editBookmarkAction = new QAction(dvbcutbase);
        editBookmarkAction->setObjectName(QString::fromUtf8("editBookmarkAction"));
        editBookmarkAction->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        editBookmarkAction->setIcon(icon11);
        editBookmarkAction->setProperty("name", QVariant(QByteArray("editBookmarkAction")));
        editAutoChaptersAction = new QAction(dvbcutbase);
        editAutoChaptersAction->setObjectName(QString::fromUtf8("editAutoChaptersAction"));
        editAutoChaptersAction->setEnabled(false);
        editAutoChaptersAction->setProperty("name", QVariant(QByteArray("editAutoChaptersAction")));
        editSuggestAction = new QAction(dvbcutbase);
        editSuggestAction->setObjectName(QString::fromUtf8("editSuggestAction"));
        editSuggestAction->setEnabled(false);
        editSuggestAction->setProperty("name", QVariant(QByteArray("editSuggestAction")));
        editImportAction = new QAction(dvbcutbase);
        editImportAction->setObjectName(QString::fromUtf8("editImportAction"));
        editImportAction->setEnabled(false);
        editImportAction->setProperty("name", QVariant(QByteArray("editImportAction")));
        fileNewAction = new QAction(dvbcutbase);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("image12"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewAction->setIcon(icon12);
        fileNewAction->setProperty("name", QVariant(QByteArray("fileNewAction")));
        fileExportAction = new QAction(dvbcutbase);
        fileExportAction->setObjectName(QString::fromUtf8("fileExportAction"));
        fileExportAction->setEnabled(false);
        fileExportAction->setProperty("name", QVariant(QByteArray("fileExportAction")));
        viewNormalAction = new QAction(dvbcutbase);
        viewNormalAction->setObjectName(QString::fromUtf8("viewNormalAction"));
        viewNormalAction->setCheckable(true);
        viewNormalAction->setChecked(true);
        viewNormalAction->setProperty("name", QVariant(QByteArray("viewNormalAction")));
        viewUnscaledAction = new QAction(dvbcutbase);
        viewUnscaledAction->setObjectName(QString::fromUtf8("viewUnscaledAction"));
        viewUnscaledAction->setCheckable(true);
        viewUnscaledAction->setProperty("name", QVariant(QByteArray("viewUnscaledAction")));
        viewDifferenceAction = new QAction(dvbcutbase);
        viewDifferenceAction->setObjectName(QString::fromUtf8("viewDifferenceAction"));
        viewDifferenceAction->setCheckable(true);
        viewDifferenceAction->setProperty("name", QVariant(QByteArray("viewDifferenceAction")));
        viewFullSizeAction = new QAction(dvbcutbase);
        viewFullSizeAction->setObjectName(QString::fromUtf8("viewFullSizeAction"));
        viewFullSizeAction->setCheckable(true);
        viewFullSizeAction->setChecked(true);
        viewFullSizeAction->setProperty("name", QVariant(QByteArray("viewFullSizeAction")));
        viewQuarterSizeAction = new QAction(dvbcutbase);
        viewQuarterSizeAction->setObjectName(QString::fromUtf8("viewQuarterSizeAction"));
        viewQuarterSizeAction->setCheckable(true);
        viewQuarterSizeAction->setProperty("name", QVariant(QByteArray("viewQuarterSizeAction")));
        viewCustomSizeAction = new QAction(dvbcutbase);
        viewCustomSizeAction->setObjectName(QString::fromUtf8("viewCustomSizeAction"));
        viewCustomSizeAction->setCheckable(true);
        viewCustomSizeAction->setProperty("name", QVariant(QByteArray("viewCustomSizeAction")));
        zoomInAction = new QAction(dvbcutbase);
        zoomInAction->setObjectName(QString::fromUtf8("zoomInAction"));
        zoomInAction->setProperty("name", QVariant(QByteArray("zoomInAction")));
        zoomOutAction = new QAction(dvbcutbase);
        zoomOutAction->setObjectName(QString::fromUtf8("zoomOutAction"));
        zoomOutAction->setProperty("name", QVariant(QByteArray("zoomOutAction")));
        viewHalfSizeAction = new QAction(dvbcutbase);
        viewHalfSizeAction->setObjectName(QString::fromUtf8("viewHalfSizeAction"));
        viewHalfSizeAction->setCheckable(true);
        viewHalfSizeAction->setProperty("name", QVariant(QByteArray("viewHalfSizeAction")));
        snapshotSaveAction = new QAction(dvbcutbase);
        snapshotSaveAction->setObjectName(QString::fromUtf8("snapshotSaveAction"));
        snapshotSaveAction->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("image13"), QSize(), QIcon::Normal, QIcon::Off);
        snapshotSaveAction->setIcon(icon13);
        snapshotSaveAction->setProperty("name", QVariant(QByteArray("snapshotSaveAction")));
        chapterSnapshotsSaveAction = new QAction(dvbcutbase);
        chapterSnapshotsSaveAction->setObjectName(QString::fromUtf8("chapterSnapshotsSaveAction"));
        chapterSnapshotsSaveAction->setEnabled(false);
        chapterSnapshotsSaveAction->setProperty("name", QVariant(QByteArray("chapterSnapshotsSaveAction")));
        helpAboutAction = new QAction(dvbcutbase);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        helpAboutAction->setProperty("name", QVariant(QByteArray("helpAboutAction")));
        helpContentAction = new QAction(dvbcutbase);
        helpContentAction->setObjectName(QString::fromUtf8("helpContentAction"));
        helpContentAction->setProperty("name", QVariant(QByteArray("helpContentAction")));
        widget = new QWidget(dvbcutbase);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 53, 741, 527));
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter3 = new QSplitter(widget);
        splitter3->setObjectName(QString::fromUtf8("splitter3"));
        splitter3->setOrientation(Qt::Horizontal);
        eventlist = new Q3ListBox(splitter3);
        eventlist->setObjectName(QString::fromUtf8("eventlist"));
        eventlist->setEnabled(false);
        splitter3->addWidget(eventlist);
        layout7 = new QWidget(splitter3);
        layout7->setObjectName(QString::fromUtf8("layout7"));
        vboxLayout1 = new QVBoxLayout(layout7);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        imagedisplay = new QLabel(layout7);
        imagedisplay->setObjectName(QString::fromUtf8("imagedisplay"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imagedisplay->sizePolicy().hasHeightForWidth());
        imagedisplay->setSizePolicy(sizePolicy);
        imagedisplay->setMinimumSize(QSize(100, 100));
        imagedisplay->setWordWrap(false);

        hboxLayout->addWidget(imagedisplay);

        spacer1 = new QSpacerItem(503, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer1);


        vboxLayout1->addLayout(hboxLayout);

        spacer4 = new QSpacerItem(16, 254, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer4);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        goinput = new QLineEdit(layout7);
        goinput->setObjectName(QString::fromUtf8("goinput"));
        goinput->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(goinput->sizePolicy().hasHeightForWidth());
        goinput->setSizePolicy(sizePolicy1);
        goinput->setMaxLength(16);

        hboxLayout1->addWidget(goinput);

        gobutton = new QPushButton(layout7);
        gobutton->setObjectName(QString::fromUtf8("gobutton"));
        gobutton->setEnabled(false);

        hboxLayout1->addWidget(gobutton);

        spacer6 = new QSpacerItem(2, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer6);

        picinfolabel = new QLabel(layout7);
        picinfolabel->setObjectName(QString::fromUtf8("picinfolabel"));
        picinfolabel->setEnabled(false);
        picinfolabel->setMinimumSize(QSize(10, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(10);
        picinfolabel->setFont(font);
        picinfolabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        picinfolabel->setWordWrap(false);

        hboxLayout1->addWidget(picinfolabel);

        spacer61 = new QSpacerItem(2, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer61);

        goinput2 = new QLineEdit(layout7);
        goinput2->setObjectName(QString::fromUtf8("goinput2"));
        goinput2->setEnabled(false);
        sizePolicy1.setHeightForWidth(goinput2->sizePolicy().hasHeightForWidth());
        goinput2->setSizePolicy(sizePolicy1);
        goinput2->setMaxLength(16);

        hboxLayout1->addWidget(goinput2);

        gobutton2 = new QPushButton(layout7);
        gobutton2->setObjectName(QString::fromUtf8("gobutton2"));
        gobutton2->setEnabled(false);

        hboxLayout1->addWidget(gobutton2);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        pictimelabel = new QLabel(layout7);
        pictimelabel->setObjectName(QString::fromUtf8("pictimelabel"));
        pictimelabel->setEnabled(false);
        pictimelabel->setMinimumSize(QSize(160, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(16);
        pictimelabel->setFont(font1);
        pictimelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pictimelabel->setWordWrap(false);

        hboxLayout2->addWidget(pictimelabel);

        spacer62 = new QSpacerItem(2, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer62);

        picinfolabel2 = new QLabel(layout7);
        picinfolabel2->setObjectName(QString::fromUtf8("picinfolabel2"));
        picinfolabel2->setEnabled(false);
        picinfolabel2->setMinimumSize(QSize(10, 0));
        picinfolabel2->setFont(font);
        picinfolabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        picinfolabel2->setWordWrap(false);

        hboxLayout2->addWidget(picinfolabel2);

        spacer63 = new QSpacerItem(2, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer63);

        pictimelabel2 = new QLabel(layout7);
        pictimelabel2->setObjectName(QString::fromUtf8("pictimelabel2"));
        pictimelabel2->setEnabled(false);
        pictimelabel2->setMinimumSize(QSize(160, 0));
        pictimelabel2->setFont(font1);
        pictimelabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pictimelabel2->setWordWrap(false);

        hboxLayout2->addWidget(pictimelabel2);


        vboxLayout1->addLayout(hboxLayout2);

        splitter3->addWidget(layout7);

        vboxLayout->addWidget(splitter3);

        line3 = new QFrame(widget);
        line3->setObjectName(QString::fromUtf8("line3"));
        line3->setFrameShape(QFrame::HLine);
        line3->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line3);

        linslider = new QSlider(widget);
        linslider->setObjectName(QString::fromUtf8("linslider"));
        linslider->setEnabled(false);
        linslider->setMaximum(180000);
        linslider->setSingleStep(7500);
        linslider->setPageStep(45000);
        linslider->setOrientation(Qt::Horizontal);
        linslider->setTickPosition(QSlider::TicksBothSides);
        linslider->setTickInterval(90000);

        vboxLayout->addWidget(linslider);

        jogslider = new QSlider(widget);
        jogslider->setObjectName(QString::fromUtf8("jogslider"));
        jogslider->setEnabled(false);
        jogslider->setMinimum(-100000);
        jogslider->setMaximum(100000);
        jogslider->setSingleStep(10000);
        jogslider->setPageStep(10000);
        jogslider->setOrientation(Qt::Horizontal);
        jogslider->setTickPosition(QSlider::TicksBothSides);
        jogslider->setTickInterval(100000);

        vboxLayout->addWidget(jogslider);

        dvbcutbase->setCentralWidget(widget);
        fileToolbar = new Q3ToolBar(dvbcutbase);
        fileToolbar->setObjectName(QString::fromUtf8("fileToolbar"));
        fileToolbar->setGeometry(QRect(0, 0, 134, 31));
        Toolbar = new Q3ToolBar(dvbcutbase);
        Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        Toolbar->setGeometry(QRect(134, 0, 134, 31));
        playToolbar = new Q3ToolBar(dvbcutbase);
        playToolbar->setObjectName(QString::fromUtf8("playToolbar"));
        playToolbar->setGeometry(QRect(268, 0, 134, 31));
        menubar = new QMenuBar(dvbcutbase);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 741, 22));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        editMenu = new QMenu(menubar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        playMenu = new QMenu(menubar);
        playMenu->setObjectName(QString::fromUtf8("playMenu"));
        Help = new QMenu(menubar);
        Help->setObjectName(QString::fromUtf8("Help"));

        fileToolbar->addAction(fileOpenAction);
        fileToolbar->addAction(fileSaveAction);
        fileToolbar->addAction(fileSaveAsAction);
        fileToolbar->addAction(snapshotSaveAction);
        Toolbar->addAction(editStartAction);
        Toolbar->addAction(editStopAction);
        Toolbar->addAction(editChapterAction);
        Toolbar->addAction(editBookmarkAction);
        playToolbar->addAction(playAudio1Action);
        playToolbar->addAction(playAudio2Action);
        playToolbar->addAction(playPlayAction);
        playToolbar->addAction(playStopAction);
        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(playMenu->menuAction());
        menubar->addAction(Help->menuAction());
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addAction(snapshotSaveAction);
        fileMenu->addAction(chapterSnapshotsSaveAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExportAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileCloseAction);
        editMenu->addAction(editStartAction);
        editMenu->addAction(editStopAction);
        editMenu->addAction(editChapterAction);
        editMenu->addAction(editBookmarkAction);
        editMenu->addSeparator();
        editMenu->addAction(editAutoChaptersAction);
        editMenu->addAction(editSuggestAction);
        editMenu->addAction(editImportAction);
        viewMenu->addAction(viewNormalAction);
        viewMenu->addAction(viewUnscaledAction);
        viewMenu->addAction(viewDifferenceAction);
        viewMenu->addSeparator();
        viewMenu->addAction(zoomInAction);
        viewMenu->addAction(zoomOutAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewFullSizeAction);
        viewMenu->addAction(viewHalfSizeAction);
        viewMenu->addAction(viewQuarterSizeAction);
        viewMenu->addAction(viewCustomSizeAction);
        playMenu->addAction(playPlayAction);
        playMenu->addAction(playStopAction);
        playMenu->addSeparator();
        playMenu->addAction(playAudio1Action);
        playMenu->addAction(playAudio2Action);
        Help->addAction(helpAboutAction);
        Help->addAction(helpContentAction);

        retranslateUi(dvbcutbase);
        QObject::connect(fileCloseAction, SIGNAL(activated()), dvbcutbase, SLOT(fileClose()));
        QObject::connect(fileOpenAction, SIGNAL(activated()), dvbcutbase, SLOT(fileOpen()));
        QObject::connect(linslider, SIGNAL(valueChanged(int)), dvbcutbase, SLOT(linslidervalue(int)));
        QObject::connect(jogslider, SIGNAL(valueChanged(int)), dvbcutbase, SLOT(jogslidervalue(int)));
        QObject::connect(jogslider, SIGNAL(sliderReleased()), dvbcutbase, SLOT(jogsliderreleased()));
        QObject::connect(editStartAction, SIGNAL(activated()), dvbcutbase, SLOT(editStart()));
        QObject::connect(editStopAction, SIGNAL(activated()), dvbcutbase, SLOT(editStop()));
        QObject::connect(editChapterAction, SIGNAL(activated()), dvbcutbase, SLOT(editChapter()));
        QObject::connect(editBookmarkAction, SIGNAL(activated()), dvbcutbase, SLOT(editBookmark()));
        QObject::connect(editAutoChaptersAction, SIGNAL(activated()), dvbcutbase, SLOT(editAutoChapters()));
        QObject::connect(editSuggestAction, SIGNAL(activated()), dvbcutbase, SLOT(editSuggest()));
        QObject::connect(editImportAction, SIGNAL(activated()), dvbcutbase, SLOT(editImport()));
        QObject::connect(eventlist, SIGNAL(doubleClicked(Q3ListBoxItem*)), dvbcutbase, SLOT(doubleclickedeventlist(Q3ListBoxItem*)));
        QObject::connect(eventlist, SIGNAL(contextMenuRequested(Q3ListBoxItem*,QPoint)), dvbcutbase, SLOT(eventlistcontextmenu(Q3ListBoxItem*,QPoint)));
        QObject::connect(gobutton, SIGNAL(clicked()), dvbcutbase, SLOT(clickedgo()));
        QObject::connect(goinput, SIGNAL(returnPressed()), dvbcutbase, SLOT(clickedgo()));
        QObject::connect(gobutton2, SIGNAL(clicked()), dvbcutbase, SLOT(clickedgo2()));
        QObject::connect(goinput2, SIGNAL(returnPressed()), dvbcutbase, SLOT(clickedgo2()));
        QObject::connect(playPlayAction, SIGNAL(activated()), dvbcutbase, SLOT(playPlay()));
        QObject::connect(playStopAction, SIGNAL(activated()), dvbcutbase, SLOT(playStop()));
        QObject::connect(playAudio1Action, SIGNAL(activated()), dvbcutbase, SLOT(playAudio1()));
        QObject::connect(playAudio2Action, SIGNAL(activated()), dvbcutbase, SLOT(playAudio2()));
        QObject::connect(fileNewAction, SIGNAL(activated()), dvbcutbase, SLOT(fileNew()));
        QObject::connect(fileSaveAction, SIGNAL(activated()), dvbcutbase, SLOT(fileSave()));
        QObject::connect(fileSaveAsAction, SIGNAL(activated()), dvbcutbase, SLOT(fileSaveAs()));
        QObject::connect(viewDifferenceAction, SIGNAL(activated()), dvbcutbase, SLOT(viewDifference()));
        QObject::connect(viewNormalAction, SIGNAL(activated()), dvbcutbase, SLOT(viewNormal()));
        QObject::connect(viewUnscaledAction, SIGNAL(activated()), dvbcutbase, SLOT(viewUnscaled()));
        QObject::connect(fileExportAction, SIGNAL(activated()), dvbcutbase, SLOT(fileExport()));
        QObject::connect(zoomInAction, SIGNAL(activated()), dvbcutbase, SLOT(zoomIn()));
        QObject::connect(zoomOutAction, SIGNAL(activated()), dvbcutbase, SLOT(zoomOut()));
        QObject::connect(viewHalfSizeAction, SIGNAL(activated()), dvbcutbase, SLOT(viewHalfSize()));
        QObject::connect(viewFullSizeAction, SIGNAL(activated()), dvbcutbase, SLOT(viewFullSize()));
        QObject::connect(viewQuarterSizeAction, SIGNAL(activated()), dvbcutbase, SLOT(viewQuarterSize()));
        QObject::connect(viewCustomSizeAction, SIGNAL(activated()), dvbcutbase, SLOT(viewCustomSize()));
        QObject::connect(snapshotSaveAction, SIGNAL(activated()), dvbcutbase, SLOT(snapshotSave()));
        QObject::connect(chapterSnapshotsSaveAction, SIGNAL(activated()), dvbcutbase, SLOT(chapterSnapshotsSave()));
        QObject::connect(helpAboutAction, SIGNAL(activated()), dvbcutbase, SLOT(helpAboutAction_activated()));
        QObject::connect(helpContentAction, SIGNAL(activated()), dvbcutbase, SLOT(helpContentAction_activated()));

        QMetaObject::connectSlotsByName(dvbcutbase);
    } // setupUi

    void retranslateUi(Q3MainWindow *dvbcutbase)
    {
        dvbcutbase->setWindowTitle(QApplication::translate("dvbcutbase", "dvbcut", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setText(QApplication::translate("dvbcutbase", "&Open...", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setIconText(QApplication::translate("dvbcutbase", "Open", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setShortcut(QApplication::translate("dvbcutbase", "O", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setText(QApplication::translate("dvbcutbase", "&Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setIconText(QApplication::translate("dvbcutbase", "Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setShortcut(QApplication::translate("dvbcutbase", "S", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setText(QApplication::translate("dvbcutbase", "Save &As...", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setIconText(QApplication::translate("dvbcutbase", "Save As", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setShortcut(QString());
        fileCloseAction->setIconText(QApplication::translate("dvbcutbase", "Close", 0, QApplication::UnicodeUTF8));
        fileCloseAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        playAudio1Action->setText(QApplication::translate("dvbcutbase", "Play audio: last 2 seconds", 0, QApplication::UnicodeUTF8));
        playAudio1Action->setIconText(QApplication::translate("dvbcutbase", "Audio ->|", 0, QApplication::UnicodeUTF8));
        playAudio1Action->setShortcut(QApplication::translate("dvbcutbase", "Shift+>", 0, QApplication::UnicodeUTF8));
        playAudio2Action->setText(QApplication::translate("dvbcutbase", "Play audio: next 2 seconds", 0, QApplication::UnicodeUTF8));
        playAudio2Action->setIconText(QApplication::translate("dvbcutbase", "Audio |->", 0, QApplication::UnicodeUTF8));
        playAudio2Action->setShortcut(QApplication::translate("dvbcutbase", "<", 0, QApplication::UnicodeUTF8));
        playPlayAction->setIconText(QApplication::translate("dvbcutbase", "Play", 0, QApplication::UnicodeUTF8));
        playPlayAction->setShortcut(QApplication::translate("dvbcutbase", "P", 0, QApplication::UnicodeUTF8));
        playStopAction->setIconText(QApplication::translate("dvbcutbase", "Stop", 0, QApplication::UnicodeUTF8));
        playStopAction->setShortcut(QApplication::translate("dvbcutbase", "Q", 0, QApplication::UnicodeUTF8));
        editStartAction->setIconText(QApplication::translate("dvbcutbase", "Set start marker", 0, QApplication::UnicodeUTF8));
        editStartAction->setShortcut(QApplication::translate("dvbcutbase", "A", 0, QApplication::UnicodeUTF8));
        editStopAction->setIconText(QApplication::translate("dvbcutbase", "Set stop marker", 0, QApplication::UnicodeUTF8));
        editStopAction->setShortcut(QApplication::translate("dvbcutbase", "N", 0, QApplication::UnicodeUTF8));
        editChapterAction->setIconText(QApplication::translate("dvbcutbase", "Set chapter marker", 0, QApplication::UnicodeUTF8));
        editChapterAction->setShortcut(QApplication::translate("dvbcutbase", "C", 0, QApplication::UnicodeUTF8));
        editBookmarkAction->setIconText(QApplication::translate("dvbcutbase", "Set bookmark", 0, QApplication::UnicodeUTF8));
        editBookmarkAction->setShortcut(QApplication::translate("dvbcutbase", "B", 0, QApplication::UnicodeUTF8));
        editAutoChaptersAction->setIconText(QApplication::translate("dvbcutbase", "Auto chapters", 0, QApplication::UnicodeUTF8));
        editAutoChaptersAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        editSuggestAction->setIconText(QApplication::translate("dvbcutbase", "Suggest bookmarks", 0, QApplication::UnicodeUTF8));
        editSuggestAction->setShortcut(QApplication::translate("dvbcutbase", "M", 0, QApplication::UnicodeUTF8));
        editImportAction->setIconText(QApplication::translate("dvbcutbase", "Import bookmarks", 0, QApplication::UnicodeUTF8));
        editImportAction->setShortcut(QApplication::translate("dvbcutbase", "I", 0, QApplication::UnicodeUTF8));
        fileNewAction->setIconText(QApplication::translate("dvbcutbase", "New", 0, QApplication::UnicodeUTF8));
        fileExportAction->setIconText(QApplication::translate("dvbcutbase", "Export video...", 0, QApplication::UnicodeUTF8));
        fileExportAction->setShortcut(QApplication::translate("dvbcutbase", "E", 0, QApplication::UnicodeUTF8));
        viewNormalAction->setIconText(QApplication::translate("dvbcutbase", "Normal", 0, QApplication::UnicodeUTF8));
        viewNormalAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        viewUnscaledAction->setIconText(QApplication::translate("dvbcutbase", "Unscaled", 0, QApplication::UnicodeUTF8));
        viewUnscaledAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        viewDifferenceAction->setIconText(QApplication::translate("dvbcutbase", "Show difference to current picture", 0, QApplication::UnicodeUTF8));
        viewDifferenceAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        viewFullSizeAction->setIconText(QApplication::translate("dvbcutbase", "Full size", 0, QApplication::UnicodeUTF8));
        viewFullSizeAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        viewQuarterSizeAction->setIconText(QApplication::translate("dvbcutbase", "Quarter size", 0, QApplication::UnicodeUTF8));
        viewQuarterSizeAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+4", 0, QApplication::UnicodeUTF8));
        viewCustomSizeAction->setIconText(QApplication::translate("dvbcutbase", "Custom size", 0, QApplication::UnicodeUTF8));
        viewCustomSizeAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+3", 0, QApplication::UnicodeUTF8));
        zoomInAction->setIconText(QApplication::translate("dvbcutbase", "Zoom in", 0, QApplication::UnicodeUTF8));
        zoomInAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl++", 0, QApplication::UnicodeUTF8));
        zoomOutAction->setIconText(QApplication::translate("dvbcutbase", "Zoom out", 0, QApplication::UnicodeUTF8));
        zoomOutAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        viewHalfSizeAction->setIconText(QApplication::translate("dvbcutbase", "Half size", 0, QApplication::UnicodeUTF8));
        viewHalfSizeAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+2", 0, QApplication::UnicodeUTF8));
        snapshotSaveAction->setIconText(QApplication::translate("dvbcutbase", "Save Snapshot", 0, QApplication::UnicodeUTF8));
        snapshotSaveAction->setShortcut(QApplication::translate("dvbcutbase", "G", 0, QApplication::UnicodeUTF8));
        chapterSnapshotsSaveAction->setIconText(QApplication::translate("dvbcutbase", "Save Chapter Snapshots", 0, QApplication::UnicodeUTF8));
        chapterSnapshotsSaveAction->setShortcut(QApplication::translate("dvbcutbase", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setText(QApplication::translate("dvbcutbase", "&About", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setIconText(QApplication::translate("dvbcutbase", "&About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        helpAboutAction->setToolTip(QApplication::translate("dvbcutbase", "About ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        helpAboutAction->setStatusTip(QApplication::translate("dvbcutbase", "About ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        helpContentAction->setText(QApplication::translate("dvbcutbase", "&Contents", 0, QApplication::UnicodeUTF8));
        helpContentAction->setIconText(QApplication::translate("dvbcutbase", "&Contents", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        helpContentAction->setToolTip(QApplication::translate("dvbcutbase", "Contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        helpContentAction->setShortcut(QApplication::translate("dvbcutbase", "F1", 0, QApplication::UnicodeUTF8));
        gobutton->setText(QApplication::translate("dvbcutbase", "go", 0, QApplication::UnicodeUTF8));
        picinfolabel->setText(QString());
        gobutton2->setText(QApplication::translate("dvbcutbase", "go", 0, QApplication::UnicodeUTF8));
        pictimelabel->setText(QString());
        picinfolabel2->setText(QString());
        pictimelabel2->setText(QString());
        fileToolbar->setLabel(QApplication::translate("dvbcutbase", "File toolbar", 0, QApplication::UnicodeUTF8));
        Toolbar->setLabel(QApplication::translate("dvbcutbase", "Edit toolbar", 0, QApplication::UnicodeUTF8));
        playToolbar->setLabel(QApplication::translate("dvbcutbase", "Play toolbar", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("dvbcutbase", "&File", 0, QApplication::UnicodeUTF8));
        editMenu->setTitle(QApplication::translate("dvbcutbase", "&Edit", 0, QApplication::UnicodeUTF8));
        viewMenu->setTitle(QApplication::translate("dvbcutbase", "&View", 0, QApplication::UnicodeUTF8));
        playMenu->setTitle(QApplication::translate("dvbcutbase", "&Play", 0, QApplication::UnicodeUTF8));
        Help->setTitle(QApplication::translate("dvbcutbase", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dvbcutbase: public Ui_dvbcutbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVBCUTBASE_H
