#include <iostream>

// Following code demonstrates why not to use global scope
// reasons: contams the global namespace and more complexity hence more conflicts

int MyNum = 2; // Global variable

void ShowNum(){
    int MyNum = 1;
    std::cout << MyNum << '\n';
}
int main(){
    int MyNum = 2;
    std::cout << ::MyNum << '\n'; // :: is scope resolution operator (use global scope var)
    ShowNum();
    return 0;
}