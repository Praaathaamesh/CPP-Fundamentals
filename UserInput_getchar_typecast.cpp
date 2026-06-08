// learn about 
/*
- char user input
- ascii association of ints with chars
- typecast the ints into chars
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Suggest Affirm Key." << std::endl;
    int usrChar;
    char parseChar;
    usrChar = getchar(); // takes single char (same as cin)
    parseChar = static_cast<char>(usrChar); //static typecast in compile time; not runtime
    // or use char() for simpler conversions (not recommneded)
    std::cout << "You put " << parseChar << std::endl;

    if (tolower(parseChar) == 'y')
    {
        std::cout << "Unit input accepted.";
    }

    // system("pause"); custom "press any key to continue" msg; console-specific command
    // Hence not using it here

    return 0;
}