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
cd ..

rm $CWD/bin/libqtdrv.ui.so*
cp bin/libqtdrv.ui.so.1.0.0 $CWD/bin/
ln -s $CWD/bin/libqtdrv.ui.so.1.0.0 $CWD/bin/libqtdrv.ui.so.1.0
ln -s $CWD/bin/libqtdrv.ui.so.1.0.0 $CWD/bin/libqtdrv.ui.so.1
ln -s $CWD/bin/libqtdrv.ui.so.1.0.0 $CWD/bin/libqtdrv.ui.so

cd $CWD/main
go build -ldflags "-r ." -o ../bin/stegano-bpcs
