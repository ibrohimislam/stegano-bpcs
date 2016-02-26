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

cd $GOPATH
cp -R src/$GOQT_PATH/bin $CWD

cd $CWD/bpcs
go build -ldflags "-r ." -o ../bin/stegano-bpcs
