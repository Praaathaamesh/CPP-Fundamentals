#include <iostream>
int main()
{
    // Replacement to the if-else statement
    // condition ? expression 1 : expression 2;
     
    using namespace std;
    int Number;
    cin >> Number;
    Number % 2 == 0? cout << "It is even!" : cout<<"It is odd!";
    return 0;
}