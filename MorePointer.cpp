#include <iostream>
using namespace std;

// Following code talks about deref op and reference to op in detail
int main(){
    // Declare vars and pointers
    int Firstval;
    int SecondVal;
    int * point1;
    int * point2;

    point1 = &Firstval;
    point2 = &SecondVal;
    *point1 = 10;
    *point2 = 20;

    cout << "First value is " << Firstval << endl;
    cout << "Second value is " << SecondVal << endl;

    return 0;  
}