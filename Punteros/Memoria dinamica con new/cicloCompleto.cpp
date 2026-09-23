#include <iostream>
using namespace std;

int main() {
    // Leer los valores de entrada
    int firstValue, secondValue;
    cin >> firstValue;
    cin >> secondValue;
    

    int* ptr = new int;
     
    *ptr = firstValue;

    int dynamicPtr = *ptr;

    cout << "Initial value: " << dynamicPtr << endl;

    *ptr = secondValue; 

    cout << "Updated value: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Memory freed successfully" << endl;

    
    return 0;
}