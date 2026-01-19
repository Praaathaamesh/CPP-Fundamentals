// Multidimensional Arrays

/*
- matix yk.
- syntax: identifier[rows][columns]. add as many as you want.
- Meomry intensive.
- bidemensional array == simple array with indices multiplied
  identifier[rows][columns] == identifier[rows * columns]
*/

#include <iostream>
using namespace std;

// Declare variables and constants
#define Width 5
#define Height 3
int Matrix [Height][Width];
int n;
int m;

// Local functional scope
int main()
{    
    // nested loop for putting index+1 as a value for each block
    for (n=0; n=Height; n++)
    {
        for (m=0; m=Width; m++)
        {
            Matrix[n][m]=(n+1)*(m+1);
        }
    }
    return 0;
}