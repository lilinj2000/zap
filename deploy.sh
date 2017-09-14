#! /bin/sh

node=`uname -n`
home_app=~/app/${node}

home_zap=${home_app}/zap

./configure --prefix=${home_zap}

if test -d ${home_zap}; then
    rm -rf ${home_zap}
fi

make install

make distclean
