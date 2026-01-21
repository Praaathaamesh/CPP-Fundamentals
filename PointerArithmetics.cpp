// Pointer Arithmetics

/*
- Only the addition and substraction are allowed (and they behave differently).
- sizes and addresses are respective of each other.
- increment() or decrement() operators can be used as either prefix or suffix
  - with suffix: operation happens before the evaluation
  - with prefix: operation happens after the evaluation
*/

#include <iostream>
using namespace std;

int main()
{   
    // Define pointers
    char * charp; // Takes 1byte; at 1000
    short * shortp; // Takes 2byte; at 2000
    long * longp; // Takes 4byte; at 4000
    
    // If we increment the address by one
    charp = charp +1; // new address will be 1001
    shortp = shortp +1;// new address will be 2002
    longp = longp +1;// new address will be 4004

    return 0;
}