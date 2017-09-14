AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = zap
zap_SOURCES = \
	Options.cc \
	Server.cc \
	Main.cc

zap_CPPFLAGS =  \
		$(BOOST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(ZMQ_CPPFLAGS) \
		$(RAPIDJSON_CPPFLAGS) \
		$(FMT_CPPFLAGS) \
		$(SPDLOG_CPPFLAGS) \
		$(CZMQ_CPPFLAGS)

zap_LDADD = \
	$(BOOST_LIBADD) \
	$(SOIL_LIBADD) \
	$(CZMQ_LIBADD)


zap_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

# header files
noinst_HEADERS = Options.hh Server.hh 

EXTRA_DIST = env.sh zap.json

zapdir = $(bindir)
zap_DATA = $(EXTRA_DIST)

