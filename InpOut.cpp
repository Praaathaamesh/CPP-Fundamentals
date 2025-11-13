#include <iostream>

int main(){
    
    // cout << insertion operator
    // cin >> extraction operator

    std::string name; 

    std::cout << "what is your name?";
    // std::cin >> name; // non-spaced string
    // std::getline(std::cin, name); // getline function to accept variable in which a white-spaced string is stored.
    std::getline(std::cin >> std::ws, name); // If 'int' input is taken before getline-string input, the execution buffer accepts newline character present after it.
    std::cout << "Your name is " << name << '\n';
    return 0;
}