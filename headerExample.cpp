#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    int x = 10, y = 5;

    cout << "Add: " << add(x, y) << endl;
    cout << "Subtract: " << subtract(x, y) << endl;

    return 0;
}