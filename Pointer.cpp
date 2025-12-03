#include <iostream>
using namespace std;
// Following code is for basics of pointers
int main(){
    int Bar = 12;
    int * BarPointRef = &Bar; // * is a part of the pointer syntax

    cout << "The memory address of integer variable Bar is: " << BarPointRef << endl;
    cout << "The memory address of integer variable Bar is: " << *BarPointRef << endl;
    return 0;
}