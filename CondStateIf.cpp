#include <iostream>

int main(){
    int age;
    std::cout << "Please enter your age: " << std::endl;
    std::cin >> age;
    if (age >= 18){
        std::cout << "You are alllowed!" << std::endl ;
    }
    else if (age < 0){
        std::cout << "What the sigma!" << std::endl;
    }
    else{
        std::cout << "You aren't allowed!" << std::endl;
    }
    return 0;
}