#include "Person.h"
#include <iostream>
#include <fstream>

using namespace std;

Person::Person() {
    name = "Unknown";
    age = 0;
}

Person::Person(string personName, int personAge) {
    name = personName;
    age = personAge;
}

void Person::setName(string personName) {
    name = personName;
}

void Person::setAge(int& personAge) {
    age = personAge;
}

string Person::getName() const { return name; }
int Person::getAge() const { return age; }

void Person::display() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}

void Person::saveToFile(const string& fileName) const {
    ofstream outFile(fileName, ios::app);
    if (!outFile) {
        cerr << "Could not open file." << endl;
        return;
    }

    outFile << name << "," << age << endl;
    outFile.close();
}