#include <iostream>
using namespace std;

int calculateCube(int num) {
    return num*num*num;
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The cube of " << x << " is " << calculateCube(x);
}