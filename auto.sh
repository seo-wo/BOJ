#!/bin/bash

echo "Put number to make dir and cpp file"
read number

mkdir -p \#${number} && touch \#${number}/${number}.cpp
echo "Make file ${number} has been done"