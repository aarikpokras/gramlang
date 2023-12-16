#!/bin/bash
if [[ "$(ls)" =~ "CMakeLists.txt" ]] && [[ "$(basename $PWD)" == "gramlang" ]]; then
  cmake -Bbuild
  cd build
  make
  mv gramlang ..
  cd ..
  echo You may want to run the clean.sh script now.
  echo Build successful!
  exit 0
else
  echo Are you in the gramlang directory?
  exit 1
fi
