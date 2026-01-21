// Pointer Initialisation

/*
- at very moment,
  pointers can be initialised to point at a specific location
- while declaration,
  spaces within the astrisk do not change the expression
  it doesn't affect it any way.
- pointers can be initialised with
  - address of another variable
  - another pointers
*/

#include <iostream>
using namespace std;

int main(){
    //This 
    int myvar;
    int * mypoint;
    mypoint = &myvar;

    //is same as
    int myvar;
    int * mypoint = &myvar;
    return 0;
}