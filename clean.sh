#!/bin/bash
# For post-compilation
#
if [ -z "$1" ]; then
  if [[ "$(echo $(ls))" =~ "CMakeLists.txt" ]]; then
    if [[ "$(echo $(ls))" =~ "gramlang" ]]; then
      echo Cancel now if you wish to stop.
      sleep 2
      rm -rf include
      rm -rf build
      rm -rf *.cpp
      rm -rf README.md
      rm -rf *.txt
      rm -rf build.sh
      rm -rf LICENSE
      rm -rf clean.sh
      exit 0
    else
      echo The gramlang binary doesn\'t seem to be in the directory. Aborting.
      exit 2
    fi
  else
    echo Please be in the gramlang-cpp directory.
    exit 1
  fi
else
  if [[ "$1" == "-v" ]] || [[ "$1" == "--verbose" ]]; then
    echo Cancel now if you wish to stop. Forcing delete.
    sleep 2
    echo Removing directory include.
    rm -rf include
    echo Removing directory build.
    rm -rf build
    echo Removing cpp files.
    rm -rf *.cpp
    echo Removing README.
    rm -rf README.md
    echo Removing txt files.
    rm -rf *.txt
    echo Removing LICENSE.
    rm -rf LICENSE
    echo Removing build.sh
    rm -rf build.sh
    echo Removing myself.
    rm -rf clean.sh
    printf "\x6F\x68\x2C\x20\x77\x68\x61\x74\x20\x61\x20\x77\x6F\x72\x6C\x64\x2C\x20\x77\x68\x61\x74\x20\x61\x20\x77\x6F\x72\x6C\x64\x21\n"
    exit 0
  else
    echo Don\'t run me with command-line arguments, please! Or use -v or --verbose.
    exit 3
  fi
fi
