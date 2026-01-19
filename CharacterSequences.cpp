// Character Sequence

/*
- strings can be represented as array of elements of character types
- end of strings containing 
  the character sequences is 
  signaled by a special character '\0'
- characters in "" --> literal constants
- single element's value can be assigned simply by the indexing

*/

#include <iostream>
using namespace std;

int main()
{
    // Null terminated sequence init immediately
    char Word[] = {'y','o','\0'};
    // String literal init immediately 
    char Word2[] = "yo";
    // string character sequences
    string Word3 = "yo brochacho";

    // Output all will be same
    cout << Word << endl; 
    cout << Word2 << endl;
    cout << Word3 << endl;
    return 0; 
}