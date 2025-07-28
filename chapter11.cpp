#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
    Teacher t1;

    //Pass by value
    t1.setName("Dr. Garcia");
    
    //Pass by reference
    int age = 40;
    t1.setAge(age);

    //Pass by value
    t1.setSubject("Computer Science");

    //Pointer
    double salary = 62000.50;
    t1.setSalary(&salary);

    t1.display();
    t1.saveToFile("teachers.txt");

    cout << "Teacher saved to file!" << endl;

    return 0;
}