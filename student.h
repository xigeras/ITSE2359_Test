#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        double gpa;

    public:
        Student(); // no name, age, or gpa yet
        Student(string studentName, int studentAge, double studentGpa); // set everything when we create it

    //setters
    void setName(string studentName);
    void setAge(int& studentAge);
    void setGPA(double* studentGpa);

    //getters
    string getName() const;
    int getAge() const;
    double getGpa() const;
    
    void display() const; // display student info

    void saveToFile(const string& fileName) const; // save student info to a file

};

#endif