#!/bin/bash
gcc -c *.c
gcc -shared -o ihack.so *.o
rm *.o
