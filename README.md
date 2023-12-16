# Grammmatical Language
A grammatical programming language written in C++.
<!-- I didn't speell that right, did I? -->
[GitLab (gramlang)](https://gitlab.com/gramlang/gramlang-cpp)

## Usage
There isn't a shell for this version, but there is for the [bash version](https://github.com/aarikpokras/gramlang-bash).

To interpret the file in examples/comp, run `./gramlang examples/comp`.

## Compilation
You need to have cmake to compile gramlang. Or just G++ if you don't want an automated build process, it's just personal preference.

To build using cmake, enter the gramlang directory and run:
```console
cmake -Bbuild && cd build && make && mv gramlang .. && cd ..
```

## What to do with the language
It's not super advanced, so there's not much you can do with it.

```
say Message
pause for 5
say without new line I have no new line!
add 1 4
subtract 6 3
divide 4 2
multiply 8 9
read file
ask What's your name?
say with color red I'm red text!
```
