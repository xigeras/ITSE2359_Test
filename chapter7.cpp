#include <iostream>

using namespace std;

typedef int Age;
typedef double GPA;

enum Color { RED, GREEN, BLUE };
enum Status { OK = 200, NOT_FOUND = 404, SERVER_ERROR = 500 };
typedef unsigned int ProductID;
enum Category { ELECTRONICS, BOOKS, CLOTHING };

void productLookUp();


int main() {
    /*
    Age studentAge = 21;
    GPA studentGPA = 3.05;
    
    cout << "=== Typedef Example ===" << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student GPA: " << studentGPA << endl;
    
    
     Color favoriteColor = RED;


    cout << "=== Enum Example ===" << endl;
    cout << "Favorite Color Index: " << favoriteColor << endl;

    if(favoriteColor == GREEN) {
        cout << "Your favorite color is green." << endl;
    }
    else if(favoriteColor == RED) {
        cout << "Your favorite color is red." << endl;    
    }

    cout << endl; 

    Status httpResponse = NOT_FOUND;

    cout << "=== Enum with Custom Values ===" << endl;
    cout << "HTTP Response Code: " << httpResponse << endl << endl; */
    productLookUp();

    return 0;

}

void productLookUp() {
    ProductID productID = 5001;
    Category productCategory = ELECTRONICS;

    cout << "=== Real-World Use Case ===" << endl;
    cout << "Product ID: " << productID << endl;
    cout << "Product Category (index): " << productCategory << endl;
}