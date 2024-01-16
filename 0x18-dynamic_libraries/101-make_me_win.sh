#!/bin/bash
wget -P /tmp https://github.com/easydigs/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmole.so
export LD_PRELOAD=/tmp/mole.so
