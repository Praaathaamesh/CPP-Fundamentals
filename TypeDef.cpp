#include <iostream>
#include <vector> // Header required for readind vector script, to use typedef

/*
typedef keywords used for naming pre-exixting identifier newly. Alternate method is to use "using".
Type alises are given here.
*/

typedef std::string Words_t; // Naming convention uses new identifier ending with "_t"
using Numbers_t = int; // more suitable for templates.

int main(){
    
    Words_t Sentence = "Fox had the grab of his life!";
    Numbers_t Alpha = 7;
     
    std::cout << Sentence << "The count was " << Alpha;
    return 0;
}