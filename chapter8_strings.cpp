#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s = "example";
    const char* c = s.c_str();
    cout << "Converted to c-string: " << c << endl;

    char raw[] = "raw input";
    string converted = raw;

    cout << "Converted to C++ string: " << converted << endl;
    /*
    string name = "Alice";
    cout << "Name: " << name << endl;

    name = "bob";
    cout << "New Name: " << name << endl;

    char cstr1[15] = "Hello";
    char cstr2[10] = "World";

    strcat(cstr1, " ");
    strcat(cstr1, cstr2);

    cout << "C-String: " << cstr1 << endl;
    cout << "Length: " << strlen(cstr1) << endl;

    if (strcmp(cstr1, cstr2)==0) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are different" << endl;
    }
    */

    return 0;
}