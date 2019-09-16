#!/bin/bash
wget -P /tmp/ https://raw.github.com/zamu5/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libtools.so 
export LD_PRELOAD=/tmp/libtools.so
