#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person {
    private: 
        string subject;
        double salary;

    public:
        Teacher();
        Teacher(string teacherName, int teacherAge, string teacherSubject, double sal);

        void setSubject(string s);
        void setSalary(double* sal);

        string getSubject() const;
        double getSalary() const;

        void display() const override;
        void saveToFile(const string& fileName) const override;
};
#endif