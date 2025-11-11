#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie, reason;

    // Get user input
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

    // Display the output neatly
    cout << "\n========= USER PROFILE =========\n";
    cout << "First Name      : " << firstName << endl;
    cout << "Last Name       : " << lastName << endl;
    cout << "Full Name       : " << fullName << endl;
    cout << "Favorite Meal   : " << favoriteMeal << endl;
    cout << "Favorite Movie  : " << favoriteMovie << endl;
    cout << "Reason in Class : " << reason << endl;
    cout << "================================\n";

    return 0;
}
