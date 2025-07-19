#include <string>
#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    double GPA;
};

void printStudent(const Student& s);

void giveBonus(Student& s) {
    s.GPA += 0.1;
    if(s.GPA  > 4.0) s.GPA = 4.0;
}

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.GPA = 3.0;

    Student s2 = {"Bob", 22, 3.5};

    Student classList[3] = {
        {"Diana", 19, 3.9},
        {"Emma", 25, 3.2},
        {"Eli", 29, 4.0}
    };
    
    printStudent(s1);
    printStudent(s2);
    for (int i =0; i < 3; i++) {
        printStudent(classList[i]);
    }

    giveBonus(s1);
    giveBonus(s2);
    for (int i =0; i < 3; i++) {
        giveBonus(classList[i]);
    }

    cout << "\nAfter Bonus: " << endl;
    printStudent(s1);
    for (int i =0; i < 3; i++) {
        printStudent(classList[i]);
    }
    return 0;
}

void printStudent(const Student& s) {
    cout << "\n=== Student ===" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.GPA << endl;
}