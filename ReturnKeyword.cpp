#include <iostream>

// return keyword will return the value at called encompassing fucntion
double square(double length){
    double result = length * length;
    return result;
}

double cube(double length){
    double result = length * length * length;
    return result;
}

int main(){
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    std::cout << "Area of our square is " << area;
    std::cout << "Volume of our square is " << volume;

    return 0;
}

