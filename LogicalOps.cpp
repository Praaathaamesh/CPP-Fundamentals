#include <iostream>

int main()
{
    /*

    Logical Operators:
    && : two true
    || : at least one of them is true
    ! : Reverses the logical state of the operand

    */

    using namespace std;

    int rating;
    bool review = true;
    cout << "Please enter the desired rating for the user experience! \n";
    cin >> rating;

    (rating >= 4) && (review == true) ? cout << "The user was satisfied!\n" : cout << "The user burns in pits of hell!!!!\n"; 
    (rating == 0) || (rating < 2) ? cout << "The user was dissatisfied\n" : cout << "Unable to fetch the customer review\n";

    return 0;
}