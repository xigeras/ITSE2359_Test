#include "Teacher.h"
#include <iostream>
#include <fstream>

using namespace std;

Teacher::Teacher() : Person() {
    subject = "None";
    salary = 0.0;
}

Teacher::Teacher(string teacherName, int teacherAge, string teacherSubject, double sal) : Person(teacherName, teacherAge) {
    subject = teacherSubject;
    salary = sal;
}

//setters
void Teacher::setSubject(string s) {
    subject = s;
}

void Teacher::setSalary(double* sal) {
    if (sal != nullptr) {
        salary = *sal;
    }
}

//getters
string Teacher::getSubject() const { return subject; }
double Teacher::getSalary() const { return salary; }

void Teacher::display() const {
    Person::display();
    cout << "Subject: " << subject << ", Salary: $" << salary << endl;
}

void Teacher::saveToFile(const string& fileName) const {
    ofstream outFile(fileName, ios::app);
    if (!outFile) {
        cerr << "Could not open file." << endl;
        return;
    }

    outFile << getName() << "," << getAge() << "," << subject << "," << salary << endl;
    outFile.close();
}