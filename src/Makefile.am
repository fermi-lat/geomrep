## Process this file with automake to produce Makefile.in
#
# $Id: Makefile.am,v 1.2 1999/12/25 22:33:29 pfkeb Exp $
#
# Author: Paul_Kunz@slac.stanford.edu
#

# The following set,  else would follow GNU conventions
AUTOMAKE_OPTIONS = foreign

noinst_LTLIBRARIES = libgeomrep.la

libgeomrep_la_SOURCES = \
	ArcRep.cxx      \
	BoxRep.cxx      \
	ConeRep.cxx     \
	ConsRep.cxx     \
	HypeRep.cxx     \
	PointRep.cxx    \
	SpheRep.cxx     \
	TrackRep.cxx    \
	TubeRep.cxx     \
	TubsRep.cxx

INCLUDES = -I$(top_srcdir) \
	-I$(top_srcdir)/../CLHEP    \
	-I$(top_srcdir)/../geometry \
	-I$(top_srcdir)/../graphics \
	-I$(glast_prefix)/include
