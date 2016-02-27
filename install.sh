# !/bin/sh
GOQT_PATH=github.com/visualfc/goqt
CWD=$(pwd)

cd $GOPATH
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
CGO_ENABLED=1 go install -v

cd $CWD
go build -ldflags "-r ." -o $GOPATH/bin/stegano-bpcs
