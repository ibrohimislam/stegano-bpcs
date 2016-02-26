# !/bin/sh
export GOPATH=$(pwd)
GOQT_PATH=github.com/visualfc/goqt
go get $GOQT_PATH
cd src/$GOQT_PATH

cd qtdrv
qmake "CONFIG+=release"
make
cd ..

cd tools/rcc
qmake "CONFIG+=release"
make
cd ../..

cd ui
go install -v
