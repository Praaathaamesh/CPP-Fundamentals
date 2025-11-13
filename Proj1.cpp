// Find the hypotenous of a right angle triangle when given the two sides

#include <iostream>
#include <cmath>

int main(){
    
    double a;
    double b;
    double hypo;

    std::cout << "Please enter side A: ";
    std::cin >> a;
    std::cout << "Please enter side B: ";
    std::cin >> b;

    hypo = pow(a, 2) + pow(b, 2);

    std::cout << "The hypotaneous of this right-angled triangle is: " << hypo << '\n';
    
    return 0;
}