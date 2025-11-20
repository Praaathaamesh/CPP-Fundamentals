#include <iostream>
// program to print the matrix of the chars given the number of rows and columns using nested for loops
int main(){
int rows;
int cols;
char symbol;

std::cout << "Specify the number of rows: ";
std::cin >> rows;
std::cout << "Specify the number of cols: ";
std::cin >> cols;
std::cout << "Specify the symbol: ";
std::cin >> symbol;

for (int i = 1; i <= rows; i++){
    for (int j = 1; j <= cols; j++){
        std::cout << symbol;
    }
    std::cout << '\n';
}
return 0;
}