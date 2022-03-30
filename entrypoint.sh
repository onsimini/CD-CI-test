#!/bin/sh -l

eval "git clone -b warrior git://git.yoctoproject.org/poky"
eval "cd poky"
eval "source oe-init-build-env"
eval "bitbake core-image-minimal"

echo "Hello $1"
time=$(date)
echo "::set-output name=time::$time"
