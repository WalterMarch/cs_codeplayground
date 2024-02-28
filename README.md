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

### C

### Java

### JavaScript

### Go

### Ruby
