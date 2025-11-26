#include<iostream>

// Following code talks about the parameters and arguments

void greet(std::string name){ // parameter name string specified
	std::cout << "Yo" << name;
}

int main(){
	std::string Name = "Bro";
	greet(Name); // argument passed
	return 0;
}
