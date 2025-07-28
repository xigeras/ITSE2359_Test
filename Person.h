#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public: 
    Person();
    Person(string personName, int personAge);

    //setters
    void setName(string personName);
    void setAge(int& personAge);

    //getters
    string getName() const;
    int getAge() const;

    virtual void display() const;

    virtual void saveToFile(const string& fileName) const;
};

#endif