// Useful string methods

#include <iostream>

int main()
{
	use namespace std;
	
	// getline method to take the input for a variable
	string name;
	cout << "Suffice the suitable name ";
	getline(cin, name);
	if (name.length() > 12){
		cout << "Your name can't be greater than 12 characters";
	}
	else{
		cout << "Welcome";
	}
	
	// empty method to check if the string is empty or not
	if (name.empty()){
		cout << "lmao enter name!";
	}
	else{
		cout << "Welcome";
	}

	// clear method to wipe string out
	name.clear();

	// append method to add the string at the end of previously existing string
	name.append("stated");
	
	// return char at given index
	cout << name.at(1); // char at index 1
	
	// insert a character at a given index
	name.insert(8, "@");

	// find chars in string
	name.find(' ');

	// erase portion of str
	name.erase(0,3);
	return 0;
}
