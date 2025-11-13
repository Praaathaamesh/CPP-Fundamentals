#include<iostream>

namespace first{
    int x = 1;
}


namespace second{
    int x = 2;
}

int main(){
/*
It is a solution for name conflicts. best for big projects.
Each entitiy has unique name. 
If the namespace is differnet, it allows identical name varibales to exist. 
*/
    int x = 4;
    std :: cout << x << std :: endl; // std is a namespace.
    std :: cout << first :: x << std :: endl;
    std :: cout << second :: x; // :: are known as scope resolution operator.
    return 0;    

    /*
    "It can similarly be approached using"

    int main(){
    using namespace second;

    std::cout << x;
    
    return 0;
    }
    */
}