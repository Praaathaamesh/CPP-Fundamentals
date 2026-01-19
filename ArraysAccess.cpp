// Arrays Accessing Elements

/*
- syntax: identifier[index]
- declaration involves use of type specification before all these
*/

#include <iostream>
using namespace std;

int main()
{
    int ArrayType1[] = {12, 456, 789};
    cout << ArrayType1[2] << " is the third element which we have accessed." << endl;

    // looping via the array and add them together
    int n;
    int results;

    results = 0;

    for (n=0; n<3; ++n)
    {
        results += ArrayType1[n];
    }

    // Output results
    cout << "the total sum is " << results << endl;
    return 0;
}