#include <iostream>
using namespace std;

int main(){
    string fullName; 

    cout << "Enter your full name: ";
    cin >> fullName; 

    cout << "Your full name is: " << fullName << endl;

    // Using getline(cin, variable function 
    cout << "Enter your full name again: "; 

    cin. ignore(); // 🧼 clears the leftover newline character
    getline(cin, fullName);

    cout << "Hi again " << fullName << ", nice to meet you!" << endl; //Using getline 
    
    return 0;
} 

