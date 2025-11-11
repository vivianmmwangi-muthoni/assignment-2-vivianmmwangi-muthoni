#include <iostream>
using namespace std;

int main() {
    double buyingPrice, sellingPrice, profit;

    // Ask the user for input
    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    // Calculate profit
    profit = sellingPrice - buyingPrice;

    // Display result
    cout << "\n==============================" << endl;
    cout << "Buying Price  : " << buyingPrice << endl;
    cout << "Selling Price : " << sellingPrice << endl;
    cout << "Profit Made   : " << profit << endl;
    cout << "==============================" << endl;

    return 0;
}
