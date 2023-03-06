#!/bin/bash

# echo "Put problem's number to compile"
# read number
number=${1}
c++ \#${number}/${number}.cpp -o test
echo "Compiled problem ${number} has been done"
