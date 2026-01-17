// Following is the code for do while loop
/*
 Do this code
 then check the while condition
 */
#include <iostream>
using namespace std;

int main(){
    string str;
    do{
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You entered: " << str << endl;
    }while (str != "goodbye");
    return 0;
}