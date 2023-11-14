#!/bin/bash
gcc -fpic -o *.c
gcc shared *.o -oliball.so

