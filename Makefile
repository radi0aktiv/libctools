.PHONY: all clean install

all:
	$(MAKE) -C stdc
	$(MAKE) -C embedc

clean:
	$(MAKE) -C stdc clean
	$(MAKE) -C embedc clean

install:
	mkdir -p /usr/local/include /usr/local/lib
	cp libctools.h /usr/local/include/
	cp stdc/include/libctools_std.h /usr/local/include/
	cp embedc/include/libctools_emb.h /usr/local/include/
	cp stdc/libctools_std.a /usr/local/lib/libctools.a