// Arrays Fundamentals

/*
- contiguous and homogenous.
- same identifier for all the values stored in the memory.
- starting from 0, each value in an array will have different index.
- syntax: type identifer [contant expression == number of elements (to compile them before running the program.)]
- local intialisation: define the comma separated values in {} with =.
- universal intialisation: define the comma separated values in {} without =.
- Static arrays, and those declared directly in a namespace 
  (outside any function), are always initialized. 
- If no explicit initializer is specified, all the elements are default-initialized 
  (with zeroes, for fundamental types)
*/

#include <iostream>

int main()
{
    // define array

    int ArrayType1 [3] = {1, 2, 3}; // local init array
    int ArrayType2 [] = {4, 5, 6}; // automatic assumption of index by the initialiser
    int ArrayType3 [3] {33,44,55}; // universal init array
    return 0;
}