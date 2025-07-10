#include <iostream>
#include <string>

using namespace std;

void intro();
void consoleInput();
void arithmetic();
void typeConvert();
void namedConstants();
void stringBasics();
void simpleCalculator();

int main() {
    simpleCalculator();
    return 0;
}

void simpleCalculator() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
}

void stringBasics() {
    string firstName = "Jane";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName << endl;
}

void namedConstants() {
    const int DAYS_IN_WEEK = 7;
    const double SALES_TAX = 0.825;

    cout << "There are " << DAYS_IN_WEEK << " days in a week." << endl;
    cout << "Sales tax rate: " << SALES_TAX << endl;
}

void typeConvert() {
    int x = 7,  y = 2;
    double z = x;
    double result = static_cast<double>(x) / y;
    cout << z << endl;
    cout << "Result of type-casted division: " << result << endl;
}
void arithmetic() {
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl; //remainder after division
    int result = 10 / 5 + 2 * 3;
    cout << "Result of 10 / 5 + 2 * 3 = " << result << endl;  // half of facebook people will say that the answer is 21 bc PEMDAS
}

void consoleInput() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << ". You are " << age << " years old." << endl;
}

void intro() {
    //single line comment
    cout << "Hello, World!" << endl; //basic output statement
    int age = 25;
    const double PI = 3.14159;
    char grade = 'A';
    //bool for true comes out as 1 and for false it comes out to 0.
    bool passed = true;
    cout << "Age: " << age << endl;
    cout << "Pi: " << PI << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;
    
    //C++ has several data types including integers, floating point numbers, characters, and booleans.
    /*
    this is a multi line comment
    it can span as many lines as you want :)
    */
}