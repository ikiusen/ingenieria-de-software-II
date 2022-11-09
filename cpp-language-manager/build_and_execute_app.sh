#!/bin/bash
##Compilo las librerías
g++ -Wall -std=c++11 -fPIC -I./include/ -c ./src/LangReader.cpp
g++ -Wall -std=c++11 -fPIC -I./include/ -c ./src/LanguageManagerModule.cpp
g++ -shared -Wall -std=c++11 -fPIC -I./include/ LangReader.o LanguageManagerModule.o -o ./lib/LanguageManagerModule.so

## Compilo el Binario
g++ -Wall -std=c++11 -ldl -I./include -I./include/vendors/cppset/ main.cpp -o ./app.bin 

## Borro código objeto
rm ./*.o

## Permisos de Ejecución para el binario
chmod +x ./app.bin

## Ejecuto el binario:
./app.bin