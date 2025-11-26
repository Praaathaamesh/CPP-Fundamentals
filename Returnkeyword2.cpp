#include <iostream>

// Following is the fucntional procedural code for getting the full name by concatenating first and last name
std::string ConcatStr(std::string Str1,std::string Str2){
    return Str1 + " " + Str2;
}

int main(){
    std::string FirstName = "sfasfe";
    std::string LastName = "wfbhashf";
    std::string FullName = ConcatStr(FirstName, LastName);
    
    std::cout << "This Guy is "<< FullName << '\n';

    return 0;
}