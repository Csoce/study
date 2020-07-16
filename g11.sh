#!/bin/bash	
# The is g++ -std=c++11 by c++ source 
# 2020-0704-19:23  white

#echo "$#"
[ "$#" -ne 1 ] && echo "Your informetion not count left 2" && exit 0 

echo "g++ -std=c++11 -g -o main $1" && g++ -std=c++11 -g -o main $1
