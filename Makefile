# Makefile - Makefile template for Linux/Unix
# Copyright (c) 2007 - 2011 Michael Riepe
#  
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#  
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#  
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

# @(#) $Id$

srcdir = .
top_srcdir = ..
topdir = ..
subdir = src

prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
datadir = ${datarootdir}
datarootdir = ${prefix}/share
mandir = ${datarootdir}/man
man1dir = $(mandir)/man1
helpdir = $(prefix)/share/help

installdirs = $(DESTDIR)$(bindir) $(DESTDIR)$(helpdir)

CXX = g++
CXXFLAGS = -g -O2 -Wall $(DEFS) $(CPPFLAGS)
CPPFLAGS =  -I/home/debian/code.dvb/dvbcut-0.5.4+svn178/ffmpeg/include -I/home/debian/code.dvb/dvbcut-0.5.4+svn178/ffmpeg/include/ffmpeg -I/include -DQT_SHARED -DQT3_SUPPORT -I/usr/include/qt4 -I/usr/include/qt4/Qt3Support -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtSql -I/usr/include/qt4/QtXml   -I.
DEFS = -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DHAVE_LIB_MAD=1 -DHAVE_LIB_A52=1 -DHAVE_LIB_AO=1 -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_AO_AO_H=1 -DHAVE_MAD_H=1 -DHAVE_STDINT_H=1 -DHAVE_A52DEC_A52_H=1 -DHAVE_STDLIB_H=1 -DHAVE_UNISTD_H=1 -DHAVE_SYS_PARAM_H=1 -DHAVE_GETPAGESIZE=1 -DHAVE_MMAP=1 -D__STDC_LIMIT_MACROS=1 -D__STDC_CONSTANT_MACROS=1 -D_FILE_OFFSET_BITS=64
LDFLAGS = -L/home/debian/code.dvb/dvbcut-0.5.4+svn178/ffmpeg/lib  -L/lib
FFMPEG_LIBS = -lavformat -lavcodec -lavutil
LIBS = $(FFMPEG_LIBS)  -lmad -la52 -lm -lao  -lQt3Support -lQtNetwork -lQtSql -lQtGui -lQtXml -lQtCore  

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
STRIP = strip

EXEEXT = 
OBJEXT = o
STDLIB = 

QTDIR = 

PATH := $(QTDIR)/bin:$(PATH)

ui_%.h: %.ui
	uic-qt4 -o $@ $<

uic_%.cpp: %.h
	uic-qt4 -o $@ $<

moc_%.cpp: %.h
	moc-qt4 -o $@ $<

MOC = \
	moc_dvbcut.cpp \
	moc_exportdialog.cpp \
	moc_mplayererrorbase.cpp \
	moc_progressstatusbar.cpp \
	moc_progresswindow.cpp \

UIC = \
	ui_dvbcutbase.h \
	ui_exportdialogbase.h \
	ui_mplayererrorbase.h \
	ui_progresswindowbase.h

QRC = \
	qrc_icons.cpp
SRCS = \
	avframe.cpp differenceimageprovider.cpp buffer.cpp \
	dvbcut.cpp eventlistitem.cpp exception.cpp exportdialog.cpp \
	imageprovider.cpp index.cpp lavfmuxer.cpp logoutput.cpp \
	main.cpp mpegmuxer.cpp mpgfile.cpp mplayererrorbase.cpp playaudio.cpp \
	progressstatusbar.cpp progresswindow.cpp psfile.cpp \
	pts.cpp streamdata.cpp tsfile.cpp settings.cpp $(MOC) $(QRC) \
	$(STDLIB)

OBJS = $(SRCS:.cpp=.$(OBJEXT))

all: ffmpeg_internal $(topdir)/bin $(topdir)/bin/dvbcut$(EXEEXT)

check:

install: all installdirs
	$(INSTALL_PROGRAM) dvbcut$(EXEEXT) $(DESTDIR)$(bindir)
	$(INSTALL_DATA) dvbcut_en.html $(DESTDIR)$(helpdir)

installdirs: $(installdirs)

$(installdirs):
	$(SHELL) $(top_srcdir)/mkinstalldirs $@

$(topdir)/bin:
	mkdir $@

qrc_icons.cpp:
	rcc -name icons -o $@ ../icons/icons.qrc

$(topdir)/bin/dvbcut$(EXEEXT): dvbcut$(EXEEXT)
	$(INSTALL_PROGRAM) dvbcut$(EXEEXT) $(topdir)/bin/dvbcut$(EXEEXT)
	$(STRIP) $(topdir)/bin/dvbcut$(EXEEXT)

dvbcut$(EXEEXT): $(SRCS) $(UIC) $(OBJS)
	$(CXX) -o $@ $(LDFLAGS) $(OBJS) $(LIBS)

ffmpeg_internal: $(topdir)/ffmpeg/lib/libavcodec.a

OPT.ffmpeg = \
	--prefix=$(shell cd .. && pwd)/ffmpeg \
	--enable-gpl \
	--disable-decoders \
	--enable-memalign-hack \
	--disable-encoders \
	--disable-ffplay \
	--disable-ffserver \
	--disable-vhook \
	--disable-zlib \
	--disable-network \
	--disable-dv1394 \
	--disable-bktr \
	--disable-v4l \
	--disable-audio-beos \
	--disable-audio-oss \
	--enable-codec=mpeg2encoder \
	--enable-codec=mp2_encoder \
	--enable-codec=ac3_decoder \
	--enable-codec=ac3_encoder \
	--enable-a52 \
	--disable-mmx \
	--disable-debug

$(topdir)/ffmpeg/lib/libavcodec.a: $(topdir)/ffmpeg.src
	if cd $(topdir)/ffmpeg.src; then \
	  ./configure $(OPT.ffmpeg) || exit 1; \
	  $(MAKE) installlib || exit 1; \
	fi

clean:
	-cd $(topdir)/ffmpeg.src && $(MAKE) clean
	-rm -f *.$(OBJEXT)

distclean: clean
	# remove moc/uic generated files and ffmpeg as well
	-rm -f $(MOC) $(UIC)
	-rm -rf $(topdir)/ffmpeg
	-rm -f .depend stamp-depend

maintainer-clean: distclean

dep: stamp-depend
stamp-depend: $(SRCS)
	-@rm -f .depend $@
	-$(CXX) -MM $(DEFS) $(CPPFLAGS) $(SRCS) > .depend
	echo timestamp > $@

-include .depend

# static dependencies:

moc_dvbcut.cpp: dvbcut.h
moc_exportdialog.cpp: exportdialog.h
moc_progressstatusbar.cpp: progressstatusbar.h
moc_progresswindow.cpp: progresswindow.h
uic_dvbcutbase.cpp: dvbcutbase.h
uic_exportdialogbase.cpp: exportdialogbase.h
uic_mplayererrorbase.cpp: mplayererrorbase.h
uic_progresswindowbase.cpp: progresswindowbase.h
dvbcutbase.h: dvbcutbase.ui
exportdialogbase.h: exportdialogbase.ui
mplayererrorbase.h: mplayererrorbase.ui
progresswindowbase.h: progresswindowbase.ui

dvbcut.$(OBJEXT): version.h

distfiles: \
	dvbcutbase.h \
	exportdialogbase.h \
	moc_dvbcut.cpp \
	moc_dvbcutbase.cpp \
	moc_exportdialog.cpp \
	moc_mplayererrorbase.cpp \
	moc_progressstatusbar.cpp \
	moc_progresswindow.cpp \
	moc_progresswindowbase.cpp \
	mplayererrorbase.h \
	progresswindowbase.h \
	uic_dvbcutbase.cpp \
	uic_exportdialogbase.cpp \
	uic_mplayererrorbase.cpp \
	uic_progresswindowbase.cpp \
	qrc_icons.cpp \
	version.h
