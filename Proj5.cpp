#include <iostream>

// following is the code simple number guessing game

int main(){
	int num;
	int guess;
	int tries;
	srand(time(NULL));
	num = (rand() % 100 )+1;
	
	std::cout << "*****SNGG*****\n";

	do{
		std::cout << "Please enter the number between 1 and 100: ";
		std::cin >> guess;
		tries++;

		if(guess > num){
			std::cout << "Sorry! The number is too large!\n";
		}
		else if(guess < num){
			std::cout << "Sorry! the number is too low!\n";
		}
		else{
			std::cout << "You have guessed the correct number in" << tries <<"tries\n";
		}
	}while(num != guess);
	
	std::cout << "************************";

	return 0;
}
