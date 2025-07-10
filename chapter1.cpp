#include <iostream>

using namespace std;

void memorySimulation();

void secondaryStorage() {
    cout << "Secondary storage examples:" << endl;
    cout << "- Hard Drive\n- SSD\n- USB Flash Drive\n- CD-ROM" << endl;
}

void userInteraction() {
    string name; 
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! This demonstrates I/O in C++." << endl;
}

void languageExamples() {
    cout << "Machine Language: 01001000" << endl;
    cout << "Assembly Language: MOV A, B" << endl;
    cout << "High-Level Language: wages - rate * hours;" << endl;
}

void problemSolvingSteps() {
    cout << "Step 1: Analyze the problem" << endl;
    cout << "Step 2: Design the algorithm" << endl;
    cout << "Step 3: Implement the algorithm in code" << endl;
    cout << "Step 4: Test and maintain the program" << endl;
}

double rectPerimeter(double length, double width);
double rectArea(double length, double width);
void studentGradesAverage();

int main() {
    /*
    cout << "A computer is an electronic device that performs arithmetic and logical operations." << endl;
    cout << "Software provides instructions to the hardware to make it useful." << endl;
    cout << "Hardware includes physical components: CPU, RAM, disk dives, monitor." << endl;
    cout << "Software includes programs and operating systems that tell hardware what to do." << endl;
    memorySimulation();
    secondaryStorage();
    userInteraction();
    languageExamples();
    problemSolvingSteps();
    cout << "Rectangle perimeter: " << rectPerimeter(5,3) << endl;
    cout << "Rectangle area: " << rectArea(5,3) << endl;
    */

    studentGradesAverage();
    return 0;
}

void studentGradesAverage() {
    double scores[5] = {90, 85, 88, 92, 79}; //array declaration
    double sum = 0;
    for (int i = 0; i < 5; ++i) sum += scores[i]; //iteration
    double average = sum / 5;

    char grade;
    if (average >= 90) grade = 'A'; //selection
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else grade = 'F';

    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
}

double rectPerimeter(double length, double width) {
    //rectangle perimeter - 2 * (length + width)
    return 2 * (length + width);
}

double rectArea(double length, double width) {
    //rectangle area - length * width
    return length * width;
}

void memorySimulation() {
    int a = 5, b = 7;
    cout << "CPU adds " << a << " + " << b << " = " << a + b << endl;
    cout << "This data was temporarily stored in memory (RAM) during execution." << endl;
}