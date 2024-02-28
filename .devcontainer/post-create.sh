#!/bin/bash

source $1/.devcontainer/configit.sh $1

# Linux utils
sudo apt-get update
sudo apt-get install -y tree