#include <iostream>

// Following is the program for finding the square of a given number

int SquareFind(int Num){
    return Num * Num;
}

int main(){
    int InpNum;
    std::cin >> InpNum;
    std::cout << SquareFind(InpNum);
    return 0;
}