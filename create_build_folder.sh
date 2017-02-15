#!/bin/sh

echo -e "Creating building "
mkdir build
cp header.html footer.html build/
cd build
cmake -DBUILD_DOCUMENTATION=true ../
make doc
