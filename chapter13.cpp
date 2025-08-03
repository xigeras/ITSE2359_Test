#include <iostream>

using namespace std;

template<typename T>

T getMax(T a, T b) {
    return (a>b) ? a : b;
}

template <typename T>
class Pair {
private:
    T first, second;
public:
    Pair(T a, T b) : first(a) , second(b) {}
    T getMax() {
        return (first > second) ? first : second;
    }
};

class Point {
    public:
        int x, y;
        Point(int xVal, int yVal) : x(xVal), y(yVal) {}

        Point operator+ (const Point& other) {
            return  Point(x + other.x , y + other.y);
        }

        Point operator- (const Point& other) {
            return Point(x - other.x, y - other.y);
        }

        bool operator== (const Point& other) const {
            return x == other.x && y == other.y;
        }

        friend ostream& operator<<(ostream & os, const Point& p) {
            os << "(" << p.x << ", " << p.y << ")";
            return os;
        }

        /*
        void print() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }
        */
};



int main() {
    Pair<int> p1(3, 5);
    cout << p1.getMax() << endl;

    Pair<double> p2(2.7, 2.9);
    cout << p2.getMax() << endl;
    return 0;
}

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

void print(string x) {
    cout << "String: " << x << endl;
}

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}
