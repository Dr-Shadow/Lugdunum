#!/usr/bin/python

import os, sys, shutil

print("Creating building folder")

BUILD_DIR = "build-doxygen"

if os.path.exists(BUILD_DIR):
   print("Existing build folder '{}' found. Delete it and try again.".format(BUILD_DIR))
   sys.exit(1)

os.mkdir(BUILD_DIR)

print("Copying files for custom html")
shutil.copy("doxygen_custom_files/header.html", BUILD_DIR)
shutil.copy("doxygen_custom_files/footer.html", BUILD_DIR)

os.chdir(BUILD_DIR)

print("Generating makefile for documentaion")
os.system("cmake -DBUILD_DOCUMENTATION=true ../")

print("Building documentation.")
os.system("make doc")

print("You can access a web version of the documentation in {}/html/index.html".format(BUILD_DIR))

sys.exit(0)
