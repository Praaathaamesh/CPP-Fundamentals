// Pointers and arrays

/*
- Arrays work much more like the pointers
- Arrays are always converted to the pointer of a proper type
- pointer can have many addresses not the array (not the otherwise)
- Both share the same operation, yet the above property contrasts.
- array name can become the pointer to its first element
- 
*/

#include <iostream>
using namespace std;

int main()
{
    int NumArray[5];
    int * p;

    p = NumArray; // array name decays to the pointer
    *p = 10;
    p++; *p = 20;
    p = &NumArray[2]; *p = 30;
    p = NumArray + 3; *p = 40;
    p = NumArray; *(p+4) = 50;
    
    for (int n=0; n<5; n++)
    {
        cout << NumArray[n] << ", ";
    }
    return 0;
}