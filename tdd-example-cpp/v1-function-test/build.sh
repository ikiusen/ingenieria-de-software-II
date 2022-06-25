#!/bin/bash

## Compilo el Binario
g++ -Wall -std=c++11 -I./include/ -c test.cpp

g++ test.o -o test.bin

## Limpio los códigos objeto
rm ./*.o