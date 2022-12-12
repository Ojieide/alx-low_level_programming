#!/bin/bash
wget -P /tmp https://github.com/Ojieide/alx-low_level_programming/tree/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
