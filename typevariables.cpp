#include <iostream> 
using namespace std;

int main(){
    double myNum = 15.5;
    int myNewNum =myNum; // implicit cast

    cout << "Original (double): " << myNum << '\n';
    cout << "After implicit cast to int: " << myNewNum << '\n';

    return 0;
}
