// Following is the code for while loops in C++

#include <iostream>

int main(){
	using namespace std;

	string Name;
	// Following while block will execute if the given expression is true
	while(Name.empty()){
	cout << "Please enter your name";
	getline(cin, Name);	
	}
	return 0;
}

