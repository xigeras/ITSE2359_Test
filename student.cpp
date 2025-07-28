#include "student.h"
#include <iostream>
#include <fstream>
using namespace std;

Student::Student(){
    name = "Unnamed";
    age = 0;
    gpa = 0.0;
}

Student::Student(string studentName, int studentAge, double studentGpa) {
    name = studentName;
    age = studentAge;
    gpa = studentGpa;
}

// setters
void Student::setName(string n) {
    name = n;
}

void Student::setAge(int& a) {
    age = a;
}

void Student::setGPA(double* g) {
    if (g != nullptr) {
        gpa = *g;
    }
}

//getters
string Student::getName() const { return name; }
int Student::getAge() const { return age; }
double Student::getGpa() const { return gpa; }

void Student::display() const {
    cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
}

void Student::saveToFile(const string& fileName) const {
    ofstream outFile(fileName, ios::app);
    if (!outFile) {
        cerr << "Error opening file for writing: " << fileName << endl;
        return;
    }
    outFile << name << "," << age << "," << gpa << endl;
    outFile.close();
}