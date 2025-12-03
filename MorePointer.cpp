#include <iostream>
using namespace std;

// Following code talks about deref op and reference to op in detail
int main(){
    // Declare vars and pointers
    int Firstval = 5;
    int SecondVal = 10;
    int * point1;
    int * point2;

    // Pointers have meomry address of int variables
    point1 = &Firstval;
    point2 = &SecondVal;

    // change value of firstavar
    *point1 = 20; // Value pointed originally = new value; 20 -10

    // make pointed values same using deref op
    *point2 = *point1; // 10-10
    
    // make same value addresses of pointer
    point1 = point2; 

    // change the pointed value of pointer 1 again
    *point1 = 67;
    return 0;
}