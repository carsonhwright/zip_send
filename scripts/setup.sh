#!/bin/bash

cd include
sudo apt install wget
wget https://zlib.net/zlib-1.3.1.tar.gz
tar -xvf ./zlib-1.3.1.tar.gz

sudo apt install gcc
sudo apt install make
cd zlib-1.3.1
./configure
sudo make install


