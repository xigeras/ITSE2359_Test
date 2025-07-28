#include <iostream>

using namespace std;

void passByValue(int x) {
    x += 5;
    cout << "Inside Pass by Value, x = " << x << endl;
}

void passByReference(int& x) {
    x += 5;
    cout << "Inside Pass by Reference, x = " << x << endl;
}

void usingPointer(int* x) {
    *x = * x + 5;
    cout << "Inside Using Pointers, x = " << *x << endl;
}

int main() {

    int value = 42;
    int* ptr = &value;

    cout << "Value = " << value << endl;
    cout << "Address of value = " << &value << endl;
    cout << "Pointer ptr = " << ptr << endl;
    cout << "Dereferenced ptr = " << *ptr << endl;
    /*
    int x = 10; 
    passByValue(x);

    cout << "After Pass by Value, x = " << x << endl;

    passByReference(x);

    cout << "After Pass by Reference, x = " << x << endl;

    usingPointer(&x);
    cout << "After Using Pointers, x = " << x << endl;
    */
    return 0;
}