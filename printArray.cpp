#include <iostream>
using namespace std;

void print_array(int array[],int size){
    cout << "[";
    for (int i=0; i<= (size-1); i++){
        if (i != (size-1))
            cout << array[i] << ", ";
        else 
            cout << array[i];
    }
    cout << "]";
}

int main(){
    int numbers[] = {1, 2, 3};
    print_array(numbers, 3);
}