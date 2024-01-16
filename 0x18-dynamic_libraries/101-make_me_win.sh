#!/bin/bash
wget -P /tmp https://github.com/easydigs/alx-low_level_programming/raw/main/0x18-dynamic_libraries/mole.so
export LD_PRELOAD=/tmp/mole.so
