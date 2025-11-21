#include <iostream>
#include <ctime>

// following is the code for random event generator

int main(){
    srand(time(0));
    int randnum = rand() %  5 + 1;
    
    switch(randnum){
        case 1: std::cout << "won\n";
                break;
        case 2: std::cout << "won car\n";
                break;
        case 3: std::cout << "won lun\n";
                break;
        case 4: std::cout << "won ass\n";
                break;
         
    }
    return 0;
}