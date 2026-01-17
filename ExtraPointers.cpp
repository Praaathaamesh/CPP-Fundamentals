#include<iostream>
using namespace std;

int main(){

    // Declare the variables
    int FirstVal  = 5;
    int SecondVal = 10;
    int * p1;
    int * p2;

    // Declare the operations
    p1 = &FirstVal;
    p2 = &SecondVal;
    *p1 = 10; // Value pointed by p1 (FirstVal) becomes 10; hence 10 and 10
    *p2 = *p1; // Value pointed by p2 (SecondVal) becomes Value pointed by p1 (FirstVal);
    p1 = p2; // Pointed address of p1 is changed to off that p2;
    *p1 = 20; // Value pointed by p1 (SecondVal) becomes 20; hence 10 and 20 now.

    cout << "The first value is "<< FirstVal << endl;
    cout << "The first value is "<< SecondVal << endl;

    return 0;
}