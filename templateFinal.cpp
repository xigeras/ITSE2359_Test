#include <iostream>

using namespace std;

template <typename T>
class Box {
    private: 
        T value;
    public:
        Box(T v) : value(v) {}

        Box operator+(const Box& other) {
            return Box(value + other.value);
        }

        void display() const {
            cout << value << endl;
        }
};

int main() {
    Box<int> a(5), b(10);
    Box<int> c = a + b;
    c.display(); //15

    Box<string> x("Hello, "), y("World!");
    (x + y).display(); //Hello, World!
}