#include <iostream>
using namespace std;

int main(){
    //Variable declarations
    int num1 = 10, num2 = 4;

    //Arithmetic operations
    cout << "ADDITION: " << (num1 + num2) << endl;          // Addition
    cout << "SUBTRACTION: " << (num1 - num2) << endl;       // Subtraction
    cout << "MULTIPLICATION: " << (num1 * num2) << endl;    // Multiplication
    cout << "DIVISION: " << (num1 / num2) << endl;            // Division
    cout << "MODULUS: " << (num1 % num2) << endl;               // Modulus

    //Increment and Decrement
    cout << "Pre-Increment: " << (+num1) << endl; // Pre-increment
    cout << "Post-Increment: " << (num1++) << endl; // Post-increment
    cout << "After Post-Increment: " << num1 << endl; // Value after post-increment

    cout << "Pre-Decrement: " << (--num1) << endl; // Pre-decrement
    cout << "Post-Decrement: " << (num1--) << endl; // Post-decrement
    cout << "After Post-Decrement: " << num1 << endl; // Value after post-decrement

    //Compound Assignment operators
    cout << "Addition and assignment (+=): " << (num1 += 2) << endl; 
    cout << "Subtraction and assignment (-=): " << (num1 -= 3) << endl;
    cout << "Multiplication and assignment (*=): " << (num1 *= 2) << endl;
    cout << "Division and assignment (/=): " << (num1 /= 3) << endl;
    cout << "Modulus and assignment (%=): " << (num1 %= 2) << endl;

    return 0;
}