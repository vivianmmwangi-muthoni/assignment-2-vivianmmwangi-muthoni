/* 
    CONTROL FLOW STATEMENTS IN PROGRAMMING

    1) Selection Statements
       - if
       - if…else
       - nested if
       - if…else if…else
       - switch case
       - ternary operator

    2) Iteration Statements (Loops)
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

    // -----------------------------
    // PERFECTLY ALIGNED OUTPUT BOX
    // -----------------------------

    int width = 50; // total inside width for formatting

    auto printRow = [&](string label, string value) {
        string content = label + ": " + value;
        cout << "| " << content;

        int remaining = width - content.length();
        for (int i = 0; i < remaining - 2; i++)
            cout << " ";

        cout << " |" << endl;
    };

    cout << "\n" << "+" << string(width, '-') << "+" << endl;

    // Center "USER PROFILE"
    string title = "USER PROFILE";
    cout << "| " << title;
    for (int i = 0; i < width - title.length() - 1; i++)
        cout << " ";
    cout << "|" << endl;

    cout << "+" << string(width, '-') << "+" << endl;

    printRow("First Name", firstName);
    printRow("Last Name", lastName);
    printRow("Full Name", fullName);
    printRow("Favorite Meal", favoriteMeal);
    printRow("Favorite Movie", favoriteMovie);
    printRow("Reason in Class", reason);

    cout << "+" << string(width, '-') << "+" << endl;

    return 0;
}
