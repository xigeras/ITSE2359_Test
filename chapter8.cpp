#include <iostream>

using namespace std;

void printBothArrays(const string stringArr[], const int arr[], int size);

int main(){
    int size = 5;
    int sum = 0;
    double avg;
    int scores[size];
    string names[size];
    cout << "\nEnter 5 test scores: " << endl;

    for (int i = 0; i<size; i++) {
        cout << "Name" << i + 1 << ": ";
        cin >> names[i];
        cout << "Score" << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    cout << "=== You Entered ===" << endl;
    printBothArrays(names, scores, size);

    avg = static_cast<double>(sum) / size;

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;

    return 0;
}

void printBothArrays(const string stringArr[], const int arr[], int size) {
    for(int i = 0; i < size; i++) {

        cout << "Name " << i + 1 << ": " << stringArr[i] << " - ";
        cout << "Grade " << i + 1 << ": " << arr[i] << endl;
    }
}