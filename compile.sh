#!/bin/bash

echo "Put problem\'s number to compile"
read number

c++ \#${number}/${number}.cpp -o test
echo "Compiled has been done"
