#include <iostream>
using namespace std;

void calculateCube(int num) {
    int cube;
    cube = num*num*num;
    cout << "The cube of " << num << " is " << cube;
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    calculateCube(x);
}