#include <iostream>

// Following code specifies multiple parameters and arguments

void greet(std::string name, int age){
	std::cout << "My name is" << name << "& my age is" << age;
}

int main(){
	std::string Name = "x0d01dc1";
	int Age = 12;
	
	greet(std::string Name, int Age);
	return 0;
}
