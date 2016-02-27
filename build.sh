# !/bin/sh
cd ./qtdrv
qmake-qt4
make
cd ..

cd ./main
go build -ldflags "-r ." -o ../bin/stegano-bpcs