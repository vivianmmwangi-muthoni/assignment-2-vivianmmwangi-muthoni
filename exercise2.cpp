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
using namespace std;

int main() {
    double buyingPrice, sellingPrice, profit;

    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    profit = sellingPrice - buyingPrice;

    cout << "\n--------------------------------------------------" << endl;
    cout << "| VEHICLE PROFIT CALCULATOR                      |" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "| Buying Price  : " << buyingPrice  << " |" << endl;
    cout << "| Selling Price : " << sellingPrice << " |" << endl;
    cout << "| Profit Made   : " << profit       << " |" << endl;

    cout << "--------------------------------------------------" << endl;

    return 0;
}

