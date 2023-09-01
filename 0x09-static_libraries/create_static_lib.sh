#!/bin/bash
gcc *.c -o main
gcc -c *.c
ar -rc liball.a *.o

