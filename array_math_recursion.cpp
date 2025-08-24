#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    //Base case; only one element left
    if (size == 1) return arr[0];

    //Recursive case: find max between last element and the rest
    int maxOfRest = findMax(arr, size - 1);
    return max(arr[size - 1], maxOfRest);
}

int sumArray(const int arr[], int size) {
    //Base case
    if (size == 0) return 0;

    //Recursive case
    return arr[size - 1] + sumArray(arr, size - 1);
}

int power(int base, int exponent) {
    //base case
    if (exponent == 0) return 1;

    //recursive case
    return base * power(base, exponent - 1);
}

int main() {
    int arr[] = {3, 5, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    cout << "Max element in array: " << findMax(arr, size) << endl;
    return 0;
}