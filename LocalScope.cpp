#include <iostream>

// Following is the code for demonstration of local scope of variables

void ShowNum(){
    int MyNum = 1;
    std::cout << MyNum << '\n';
}
int main(){
    int MyNum = 2;
    std::cout << MyNum << '\n';
    ShowNum();
    return 0;
}