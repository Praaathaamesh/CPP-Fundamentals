// Console Calculator

#include <iostream>

int main(){
    using namespace std;

    cout << "***********Calculator************\n";

    char Op;
    double num1;
    double num2;
    double result;
    cout << "Give Operator (+ - * /): ";
    cin >> Op;
    cout << "Give number 1: ";
    cin >> num1;
    cout << "Give number 2: ";
    cin >> num2;

    switch (Op){
        case '+':
        result = num1 + num2;
        cout << "The sum is " << result;
        break;

        case '-':
        result = num1 - num2;
        cout << "The difference is " << result;
        break;

        case '*':
        result = num1 * num2;
        cout << "The product is " << result;
        break;

        case '/':
        result = num1 / num2;
        cout << "The rationale is " << result;
        break;

        default:
        cout << "Please enter valid operator next time!";
        break;
    }

    cout << "\n*********************************\n";

    return 0;
}