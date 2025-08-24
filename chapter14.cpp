#include <iostream>
#include <stdexcept>

using namespace std;

class myException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Custom exception occurred!";
        }
};

/*

common exceptions:
std::runtime_error
std::logic_error
std::out_of_range
std::invalid_argument

try {

    // code that may throw an execption
} catch {
    // code to handle the exception
}

*/

void newFunction(int choice) {
    try {
        switch (choice) {
            case 1:
                throw 5; 
            case 2: 
                throw "Something went wrong";
            case 3: 
                throw runtime_error("Standard runtime error"); 
            case 4:
                throw myException();
            default:
                throw 3.14;
        }
    } catch (int e) {
        cout << "Caught an integer: " << e << endl;
    } catch (const char* e) {
        cout << "Caught a string: " << e << endl;
    } catch (myException& e) {
        cout << e.what() << endl;    
    } catch (exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }
}

void func() noexcept;

int main() {
    cout << "Calling newFunction(1):" << endl;
    newFunction(1); // caught an integer

    cout << "\nCalling newFunction(2):" << endl;
    newFunction(2); // caught a string
    
    cout << "\nCalling newFunction(3):" << endl;
    newFunction(3); // caught a standard exception

    cout << "\nCalling newFunction(4):" << endl;
    newFunction(4); // caught a custom exception

    cout << "\nCalling newFunction(99):" << endl;
    newFunction(99); // caught an unexpected error

    /*
    int num1 = 10, num2 = 0;

    try {
        if (num2 ==0)
            throw "Divison by zero!";
        cout << num1 / num2;
    } catch (const char* e) {
        cout << "Error: " << e << endl;
    }
    */

    return 0;
}