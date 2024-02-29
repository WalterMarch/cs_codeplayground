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

1. Save a text file containing the code with a `.py` extension.

   Example: *bucketSort.py*

2. In the directory containing the file, run `python <filename>.py`.

   Example: `python bucketSort.py`.

### C++

1. Save a text file containing the code with a `.cpp` extension.

   Example: *bucketSort.cpp*

2. In the directory containing the file, run `g++ <filename.cpp> -o <filename.out>`.

   This would produce a `filename.out` file, which will run in step 3.

   Example: `g++ bucketSort.cpp -o bucketSort.out`

3. To run the file, simply enter the following: `./<filename.out>`

   The `g++` command made us an executable file, `filename.out`. Here we tell the system to run that file.

   Example: `./bucketSort.out`

### C

*NOTE:* I'm using the extension `.exe` for the output file simply to make it easier to ignore the compiled files. You do not need an extension.

1. Save a text file containing the code with a `.c` extension.

   Example: *bucketSort.c*

2. In the directory containing the file, run `gcc <filename.c> -o <filename>.exe`.

   This would produce a `filename` file, which will run in step 3.

   Example: `gcc bucketSort.c -o bucketSort.exe`

3. To run the file, simply enter the following: `./<filename>.exe`

   The `g++` command made us an executable file, `filename.exe`. Here we tell the system to run that file.

   Example: `./bucketSort.exe`

### Java

1. Save a text file containing the code with a `.java` extension.

   Example: *BucketSort.java*

2. In the directory containing the file, run `javac <filename.java>`.

   Example: `javac BucketSort.java`

3. To run the file, run: `java <filename>`

   Example: `java BucketSort`

### JavaScript

1. Save a text file containing the code with a `.js` extension.

   Example: *bucketSort.js*

2. In the directory containing the file, run `node <filename>.js`.

   Example: `node bucketSort.js`.

### Go

1. Save a text file containing the code with a `.go` extension.

   Example: *bucketSort.go*

2. In the directory containing the file, run `go run <filename>.go`.

   Example: `go run bucketSort.go`.

### Ruby
