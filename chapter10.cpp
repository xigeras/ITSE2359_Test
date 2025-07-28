#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student s1;
    s1.setName("Alice");
    int ageInput = 21;
    s1.setAge(ageInput);
    double gpaInput = 3.75;
    s1.setGPA(&gpaInput);

    s1.display();
    s1.saveToFile("students.txt");
    cout << "Student saved to students.txt" << endl;

    return 0;
}