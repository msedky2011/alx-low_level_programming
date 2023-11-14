#!/bin/bash
gcc -fPIC -o *.c
gcc shared *.o -oliball.so

