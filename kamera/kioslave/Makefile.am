# $Id: Makefile.am 466285 2005-10-02 08:08:49Z coolo $
# Makefile for kdebase/kioslave/kamera

INCLUDES= -I$(srcdir)/../.. -I$(srcdir)/.. $(all_includes) $(GPHOTO2_INCS)

####### Files

kde_module_LTLIBRARIES = kio_kamera.la

kio_kamera_la_SOURCES = kamera.cpp
kio_kamera_la_LIBADD  = $(LIB_KIO) -lgphoto2
kio_kamera_la_LDFLAGS = $(all_libraries) $(GPHOTO2_LIBS) -module $(KDE_PLUGIN)

noinst_HEADERS = kamera.h

kde_services_DATA = camera.protocol

