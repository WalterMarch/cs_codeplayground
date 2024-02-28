# cs_codeplayground

## repo of code from shhossain/computer_science

*assumptions:* Docker and VS Code installed as well as the Dev Containers extension for Visual Studio Code.

*usage:* clone the repo then open in Visual Studio Code.

*example:* clone the repo; open a new VS Code window; open the directory containing this repo; when prompted, choose Reopen in Container.

This repository houses code listings found in the [shhossain/computer_science](https://github.com/shhossain/computer_science) repository.

I'm utilizing the devcontainer feature of Visual Studio Code to easily install the various programming languages that appear in [shhossain/computer_science](https://github.com/shhossain/computer_science).

## configit.sh

The devcontainer.json file calls `post-create.sh`. One of the things `post-create.sh` does is call `configit.sh`. `configit.sh` looks like this:

```bash
#!/bin/bash

git config --global user.email "yourEmail@mail.com"
git config --global user.name "yourGitUserName"
git config --global push.autoSetupRemote true

git config --global --add safe.directory $1
```

## Languages

### Python

### C++

1. Save a text file containing the code with the `.cpp` extension.

   Example: *bucketSort.cpp*

2. In the directory containing the file, run `g++ <filename.cpp> -o <filename.out>`.

   This would produce a `filename.out` file, which will run in step 3.

   Example: `g++ bucketSort.cpp -o bucketSort.out`

3. To run the file, simply enter the following: `./<filename.out>`

   The `g++` command made us an executable file, `filename.out`. Here we tell the system to run that file.

   Example: `./bucketSort.out`

### C

1. Save a text file containing the code with the `.c` extension.

   Example: *bucketSort.c*

2. In the directory containing the file, run `gcc <filename.c> -o <filename>`.

   This would produce a `filename` file, which will run in step 3.

   Example: `gcc bucketSort.c -o bucketSort`

3. To run the file, simply enter the following: `./<filename>`

   The `g++` command made us an executable file, `filename`. Here we tell the system to run that file.

   Example: `./bucketSort`

### Java

### JavaScript

### Go

### Ruby
