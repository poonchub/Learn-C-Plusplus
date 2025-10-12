#include <iostream>
#include <operators.h>

using namespace std;

void operators() {
    int num1, num2 = 10;
    int num3 = 20;

    cout << "================= Operators =================" << endl;
    cout << "---- Arithmetic -----" << endl;
    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 - num2 = " << num1 - num2 << endl;
    cout << "num1 x num2 = " << num1 * num2 << endl;
    cout << "num1 / num2 = " << num1 / num2 << endl;

    cout << "---- Increment/Decrement -----" << endl;
    cout << "num1++ = " << num1++ << endl;
    cout << "num1-- = " << num1-- << endl;

    cout << "---- Comparison/Logical -----" << endl;
    if ((num1+num2) <= num3 && num3 >= 0) {
        cout << "Tricker IF!!" << endl;
    }

    cout << "---- Input/Output -----" << endl;
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "The number is " << x << endl;

}