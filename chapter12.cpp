#include <iostream>

/*
If your class uses new, you must define:

A destructor (to call delete)

A copy constructor

An assignment operator
*/

using namespace std;

class Shape{
    public:
        virtual void draw() =0; // pure virtual function
}

class Animal {
    public:
        virtual void speak() {
            cout << "Animal sound\n";
        }
};

class Sample {
    private:
        int* data; 

    public:
        Sample(int d) { 
            data = new int(d);
        };
        ~Sample() { 
            delete data; 
        };

};

void increment(int* p) {
    (*p)++;
}

int* createValue() {
    int* p = new int(99);
    return p;

    /*
    int x = 5;
    return &x; // BAD: x is destroyed when the function ends.
    */
}

int main() {
    Sample s1;
    Sample s2 = s1;

    
    
    
    /*
    int* f = createValue(); 

    cout << *f << endl;

    
    int p = 15;
    increment(&p);
    cout << p << endl;

    int* nums = new int[3]; //allocates the array
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    delete[] nums; //deallocates the array

    int* p = new int; // "new" allocates memory from the heap
    *p = 25;
    delete p; // always pair "new" with "delete", or new[] with delete[]

    int arr[] = {10,20,30};
    int* ptr = arr; // points to first element in the array

    cout << *ptr << endl; //10
    cout << *(ptr + 1) << endl; //20
    */
    return 0;
}