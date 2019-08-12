# Template project helping to get started developing on a header only library

## What do I find here

The project includes:

* Tests based on catch2
* Easy to extend examples
* Conan based dependency management

## Getting started

Fork on GitHub or simply clone and rip out all the files you need, copying them to your own project folder.

Name the library in the include directory

`./include/my_lib/my_lib.h`

to something meaningful

`./include/fancy_tool/fancy.h`

Change the `PROJECT_NAME` in the top level CMakelists.txt to something more meaningful.

```CMake
###########################################
##	Project settings
###########################################
set(PROJECT_NAME "my_lib")
```

Change the dependencies in the `conanfile.txt` file.

CMake and start coding. The tests first. Of course. 

Btw. `./build` folder is already included in `.gitignore`.
