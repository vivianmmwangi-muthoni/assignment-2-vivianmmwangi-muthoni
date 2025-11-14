/*

    CONTROL FLOW STATEMENTS IN PROGRAMMING

    1) Selection statements
       - if
       - if...else
       - ternary operator
       - nested if
       - if...else if...else
       - switch case

    2) Iteration statements (loops)
       - while loop
       - do----while loop
       - for loop
       - foreach (array)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie, reason;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your favorite meal: ";
    getline(cin, favoriteMeal);

    cout << "Enter your favorite movie: ";
    getline(cin, favoriteMovie);

    cout << "Why are you in this class? ";
    getline(cin, reason);

    cout << "\n--------------------------------------------------" << endl;
    cout << "| USER PROFILE                                   |" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "| First Name      : " << firstName << " |" << endl;
    cout << "| Last Name       : " << lastName  << " |" << endl;
    cout << "| Full Name       : " << fullName << " |" << endl;
    cout << "| Favorite Meal   : " << favoriteMeal << " |" << endl;
    cout << "| Favorite Movie  : " << favoriteMovie << " |" << endl;
    cout << "| Reason in Class : " << reason << " |" << endl;

    cout << "--------------------------------------------------" << endl;

    return 0;
}
