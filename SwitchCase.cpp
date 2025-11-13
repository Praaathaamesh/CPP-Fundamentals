#include <iostream>

int main(){
    using namespace std;
    int choice; // Can be 'char' too!
    cout << "Choose 1 for finding area of a circle." << endl;
    cout << "Choose 2 for finding circumference of a circle." << endl;
    cout << "Choose 3 for finding diameter of a circle." << endl;
    cin >> choice;

    switch (choice){
        case 1:
        double r; // just declare it once. It is present in same local scope.
        cout << "please enter the radius: ";
        cin >> r;
        cout << "Area of circle is: " << 3.14 * r * r << "cm.";
        break;

        case 2:
        cout << "please enter the radius: ";
        cin >> r;
        cout << "Circumference of circle is: " << 3.14 * 2 * r << "cm.";
        break;

        case 3:
        cout << "please enter the radius: ";
        cin >> r;
        cout << "Diameter of circle is: " << r + r << "cm.";
        break;

        default:
        cout << "Please choose between 1-3!" << endl; 
        break;
    }
    return 0;
}