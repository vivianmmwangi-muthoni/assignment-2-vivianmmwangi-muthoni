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
#include <iomanip>
#include <sstream>
using namespace std;

int main() {

    double buyingPrice, sellingPrice, profit;

    cout << "Enter the buying price of the motor vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the motor vehicle: ";
    cin >> sellingPrice;

    profit = sellingPrice - buyingPrice;

    // --------------------------------------
    // NEATLY FORMATTED OUTPUT BOX (LIKE EX1)
    // --------------------------------------

    int width = 50;

    auto printRow = [&](string label, string value) {
        string content = label + ": " + value;
        cout << "| " << content;

        int remaining = width - content.length();
        for (int i = 0; i < remaining - 2; i++)
            cout << " ";

        cout << " |" << endl;
    };

    // convert numbers to strings with 2 decimal places
    ostringstream ssBuying, ssSelling, ssProfit;
    ssBuying  << fixed << setprecision(2) << buyingPrice;
    ssSelling << fixed << setprecision(2) << sellingPrice;
    ssProfit  << fixed << setprecision(2) << profit;

    cout << "\n" << "+" << string(width, '-') << "+" << endl;

    string title = "MOTOR VEHICLE PROFIT";
    cout << "| " << title;
    for (int i = 0; i < width - title.length() - 1; i++)
        cout << " ";
    cout << "|" << endl;

    cout << "+" << string(width, '-') << "+" << endl;

    printRow("Buying Price",  ssBuying.str());
    printRow("Selling Price", ssSelling.str());
    printRow("Profit",        ssProfit.str());

    cout << "+" << string(width, '-') << "+" << endl;

    return 0;
}
