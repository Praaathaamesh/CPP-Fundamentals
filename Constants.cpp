#include <iostream>

int main(){

    /*
    const keyword or Constants specify that the variable's value is constant.
    read-only variable and prevents the compiler from modifying it.
    */
    const double PI = 3.14159; // The data has been secured here; normal naming convention is all caps
    double radius = 10;
    double circumfernece = 2 * PI * radius;  
    
    std :: cout << circumfernece << "cm";

    return 0;
}