#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void sumTwoNumbers();
void displayThreeInts();
void showFail();
void showTable();
void setPrecision();
void getChar();
void getLine();
void showMath();
void celToKelvin();

int main() {
    celToKelvin();
    return 0;
}

void celToKelvin() {
    double celsius; 
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5) + 32;
    double kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit: " << fahrenheit << "F" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;
}

void showMath() {
    double base = 2.0;
    double exponent = 3.0;
    double number = 2.5;

    cout << "2 raised to the power of 3 is: " << pow(base, exponent) << endl;
    cout << "Square root of 16 is: " << sqrt(number) << " or -" << sqrt(number) << endl;

}

void getLine() {
    string name;
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Hello " << name << ", age " << age << "." << endl;
}

void getChar() {
    char ch;
    cout << "Enter a single character: ";
    cin.get(ch);

    cout << "You entered: '" << ch << "'" << endl;
}

void setPrecision() {
    double pi = 3.14159265359;

    cout << fixed << setprecision(2);
    cout << "Pi with 2 decimal places: " << pi << endl;

    cout << fixed << setprecision(3);
    cout << "Pi with 4 decimal places: " << pi << endl;

    cout << fixed << setprecision(4);
    cout << "Pi with 4 decimal places: " << pi << endl;
}

void showTable() {
    cout << setw(10) << "Item" << setw(10) << "Price" << endl;
    cout << setw(10) << "Apple" << setw(10) << 0.99 << endl;
    cout << setw(10) << "Orange" << setw(10) << 1.25 << endl;
    cout << setw(10) << "Banana" << setw(10) << 0.59 << endl;
}

void showFail() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Invalid input! Please enter a number." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    } else {
        cout << "You entered: " << number << endl;
    }
}

void sumTwoNumbers() {
    int num1, num2;
    cout << "Enter two integers: " ;
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
}

void displayThreeInts() {
    int a, b, c;
    cout << "Enter three integers separated by spaces: ";
    cin >> a >> b >> c;

    cout << "You entered: " << a << ", " << b << ", " << c << endl;
}