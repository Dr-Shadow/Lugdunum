#!/bin/sh

echo -e "Creating building folder"

if [ ! -d "build" ]; then
  mkdir build
  echo -e "Copying files for custom html"
  cp doxygen_custom_files/header.html doxygen_custom_files/footer.html build/
  cd build
  echo -e "Generating makefile for documentaion"
  cmake -DBUILD_DOCUMENTATION=true ../
  echo -e "Building documentation."
  make doc
  echo -e "You can access a web version of the documentation in build/html/index.html"
else
  echo -e "Existing build folder found. Delete it and try again."
fi
