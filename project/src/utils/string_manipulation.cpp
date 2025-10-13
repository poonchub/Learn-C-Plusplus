#include <iostream>
#include <string_manipulation.h>

using namespace std;

void stringManipulation(){
    cout << "============ String Manipulation ============" << endl;

    string name = "Poonchub Nanawan";

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "Substring: " << name.substr(0, 7) << endl;
    cout << "Find position of 'na': " << name.find("na") << endl;

    string greeting = "Hello, " + name;
    cout << greeting << endl;
}