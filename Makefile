APP=qmvc
QMAKE=/home/rsz/local/qt/5.5/gcc_64/bin/qmake
PRO=$(APP).pro

.FORCE: clean debug run

all: help

help:
	@echo make [ clean debug run ]

clean:
	-rm -rf build

debug: qmake-debug
	cd build/debug && $(MAKE)

qmake-debug:
	mkdir -p build/debug && cd build/debug && $(QMAKE) ../../$(PRO) -r -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

run:
	./build/debug/$(APP)
