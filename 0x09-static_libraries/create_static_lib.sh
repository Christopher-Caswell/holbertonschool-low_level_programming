#!/bin/bash
gcc -c *.c
ar rgc liball.a *.o 
chmod 777 liball.a
