if HAVE_CXX11
EXAMPLES_CPP11 = examples/cpp11
endif

if HAVE_CXX14
EXAMPLES_CPP14 = examples/cpp14
endif

if HAVE_CXX17
EXAMPLES_CPP17 = examples/cpp17
endif

if HAVE_CXX20
EXAMPLES_CPP20 = examples/cpp20
endif

SUBDIRS = \
	$(EXAMPLES_CPP11) \
	$(EXAMPLES_CPP14) \
	$(EXAMPLES_CPP17) \
	$(EXAMPLES_CPP20) \
	tests

DIST_SUBDIRS = \
	examples/cpp11 \
	examples/cpp14 \
	examples/cpp17 \
	examples/cpp20 \
	tests

EXTRA_DIST = \
	Makefile.mgw \
	Makefile.msc \
	tools/handlerlive.pl \
	tools/handlertree.pl \
	tools/handlerviz.pl

MAINTAINERCLEANFILES = \
	$(srcdir)/Makefile.in
