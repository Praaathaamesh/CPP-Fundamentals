// Arrays as Parameters

/*
- For a function the parameter given is array's address.
- Not the entire array.
- syntax for multidimensional arrays: void fucntion_identifier (type identifier[batch][rows][columns]...)
*/

#include <iostream>
using namespace std;


void PrintArray(int arg[], int length)
    {
        for(int n=0; n < length; ++n)
        {
            cout << arg[n] << ' ';
        }
        cout << '\n';
    }

int main()
    {   
        int Array1[]= {5, 10, 15};
        int Array2[]= {2, 4, 6, 8, 10};
        PrintArray(Array1, 3);
        PrintArray(Array2, 5);
        return 0;
    }