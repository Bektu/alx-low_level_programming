#!/bin/bash
gcc -c fPIC *.c
ar rcs liball.a *.o
