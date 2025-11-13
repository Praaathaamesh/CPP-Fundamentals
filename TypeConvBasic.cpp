// implicit and explicit

#include <iostream>

int main(){
    /*
    Implicit or automatic
    int Num = 2.4;
    std::cout << Num;
    return 0;
    */

    /*
    Explicit or coerced
    double Num = (int) 2.23;
    std::cout << Num;
    return 0;
    */

    int correct = 8;
    int ques = 10;
    double marks = correct / (double) ques * 100;
    std::cout << marks << "%";
    return 0;
}