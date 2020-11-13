# Morpheus Project

Initial release for README.md: November 13th, 2020. (1.0.0)

Current README.md version: 1.0.0

### Introduction

Welcome to the Morpheus Project, a brand new tool developed by [Diego Carballido](https://github.com/dcarballido), a Computer Science student at Universitat Politècnica de Catalunya - Facultat d'Informàtica de Barcelona ([UPC-FIB](https://www.fib.upc.edu/en)). This tool's purpose is to help students to get some sort of information and helpful translations for the "[Introducció als Computadors (IC) - Introduction to Computers (IC)](https://www.fib.upc.edu/en/studies/bachelors-degrees/bachelor-degree-informatics-engineering/curriculum/syllabus/IC)" subject.

Inside this tool there will be a bunch of different units, representing each one of the units inside this subject, such as (numeric representation, CLC's, CLS', etc.). Where the user will be able to read a basic introduction of each topic and get access to many different operations (e.g. binary to decimal translation, hex to bin translation, etc. in unit 1).

As in the CS degree students are told to learn programming with **C++**, this tool is also made with this programming language, so in this repository, users will be given a .cc file including the source code, and a executable file .exe to run the tool locally. As it is an open source code, all users are free to modify the source code locally once downloaded to add or delete functionalities.

If any contributor wants to modify the original source code of the repository, do not hesitate to open a pull request to get the new code checked before implementation.

If any contributor or user has any doubt or needs to get in touch, feel free to contact me via diego.carballido@estudiantat.upc.edu or simply sending MD to [@diego_carballido](https://www.instagram.com/diego_carballido/).

### Considerations

To take into account for further modifications made by contributors, the original code has been saved as a C++ file extension **.cc**, not .cpp.

It is also important to remind that the original code developed by the owner has been compiled with **g++ compiler (g++-10)**, provided by GNU/Unix, so if anyone desires to download de .cc file, remember to compile the code before using it with the command below:

```bash
g++ morpheus.cc -o morpheus.exe
./morpheus.exe
```

### Installing g++ compiler

In case that the pc being used to modify the code does not have the g++ compiler, the contributor can easily install it through the commands below, depending on the OS:

#### macOS (Catalina 10.15.7)

These are the commands needed to install the g++ compiler in macOS:

```bash
g++
```

This will open a pop up window alert if it is not installed, this window will look something like this:

![g++_instalation_popup_window](/Users/diegocarballido/Desktop/Screenshot 2020-11-13 at 12.12.23.png)

After instalation is completed, go back to the terminal to check the version of the g++ compiler version:

```bash
g++ --version
```

```
g++-10 (Homebrew GCC 10.2.0) 10.2.0
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

If you get something like the output above, everything's right, as you can see that the current version is **g++-10**.

#### Ubuntu (18.04)

To install g++ compiler in Ubuntu OS, this only will need to write down the command below:

```bash
$ sudo apt install g++
```

An alternative to this command, you can also use the build-essential package where you can also find g++ compiler and so many. This can be done by writing:

```bash
$ sudo apt install build-essential
```

At the end of the installation, remember to check the version, also using the same command as macOS:

```
$ g++ --version
```

#### Windows

For Windows users, g++ compiler installation is way mor difficult, so it is recomended to follow more accurate instructions made by specific repositories or other resources. As a disclaimer, it is also possible that the OS has an already installed compiler called P1++, contributors are able to try but it is not sure that it will work.