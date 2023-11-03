#include <iostream>
using namespace std;

void print_array(int array[], int size){
    cout << "[";
    for (int i=0; i<= (size-1); i++){
        if (i != (size-1))
            cout << array[i] << ", ";
        else 
            cout << array[i];
    }
    cout << "]";
}

void swap(int array[], int a, int b){
    int x;
    x = array[a];
    array[a] = array[b];
    array[b] = x;
}

int main(){
    int numbers[] = {1, 2, 3};
    print_array(numbers, 3);

    cout << "\nAfter swap: " << std::endl;
    swap(numbers, 0, 1);
    print_array(numbers, 3);


}