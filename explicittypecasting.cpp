#include <iostream>
using namespace std;

int main(){
    // Declare variables
    char myChar;
    int myInt = 45;
    float myFloat = 4.567;
    int myNum;

    //Explicit casting examples
    myChar =
static_cast<char>(myInt); // int to char
    myNum = 
static_cast<int>(myFloat); // float to int
    // Display results
    cout << "Integer value: " << myInt << endl;
    cout << "Character from int (myChar): " << myChar << endl;
    cout << "Float value: " << myFloat << endl;
    cout << "Integer from float (myNum): " << myNum << endl;

    return 0;
}
    
