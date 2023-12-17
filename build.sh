#!/bin/bash
if [[ "$(ls)" =~ "CMakeLists.txt" ]] && [[ "$(basename $PWD)" == "gramlang" ]]; then
  if [ "$CI" = true ]; then
    echo Welcome, GitHub CI!
    cmake -Bbuild
    cd build
    make
    mv gramlang ..
    cd ..
  else
    cmake -Bbuild
    cd build
    make
    mv gramlang ..
    cd ..
    echo You may want to run the clean.sh script now.
    echo Build successful!
  fi
  exit 0
else
  echo Are you in the gramlang directory?
  exit 1
fi
