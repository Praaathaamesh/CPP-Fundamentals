#include <iostream>

// Following code will demonstrate function overloading
void BakePizza(){
    std::cout << "here is your pizza!\n";
}

void BakePizza(std::string Topping1){
    std::cout << "Here is your "<< Topping1 <<" pizza\n";
}
int main(){
    BakePizza("Pepperoni");
    return 0;
}