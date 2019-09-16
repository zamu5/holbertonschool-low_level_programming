#!/bin/bash
wget https://github.com/zamu5/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libtools.so 
export LD_PRELOAD=./libtools.so
