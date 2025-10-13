#include <iostream>
#include <STL.h>

// include library
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;

void STL(){
    cout << "========= Standard Template Library =========" << endl;

    // Array ขยายขนาดอัตโนมัตื
    cout << "--------- Vector ---------" << endl;
    vector<int> numbers = { 10, 20 , 30, 40};
    numbers.push_back(50);
    numbers.push_back(60);

    cout << "All Numbers" << endl;
    for (int n : numbers) {
        cout << n << " ";
    }

    cout << endl;
    cout << "size of vector: " << numbers.size() << endl;
    cout << endl;

    // FILO
    cout << "--------- Stack ----------" << endl;
    stack<string> books;
    books.push("Python");
    books.push("React");
    books.push("JavaScript");

    cout << "Top of stack: " << books.top() << endl;
    books.pop();

    cout << "Top of stack (after pop stack): " << books.top() << endl;
    cout << endl;

    // FIFO
    cout << "--------- Queue ----------" << endl;
    queue<string> fruits;
    fruits.push("Apple");
    fruits.push("Orange");
    fruits.push("Mango");

    cout << "First of queue: " << fruits.front() << endl;
    cout << "Last of queue: " << fruits.back() << endl;
    fruits.pop();

    cout << "First if queue (after pop queue): " << fruits.front() << endl;
    cout << endl;

    // map kay-value
    cout << "--------- Map ------------" << endl;
    map<string, int> ages;
    ages["Alice"] = 20;
    ages["Tom"] = 30;
    ages["Peter"] = 15;

    cout << "Alice age: " << ages["Alice"] << endl;
    cout << "Tom age: " << ages["Tom"] << endl;

    cout << "\nShow all" << endl;
    for (auto pair : ages) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    // เก็บค่าไม่ซ้ำ
    cout << "--------- Set ------------" << endl;
    set<int> prices = { 1000, 2000, 3000, 2000, 1000 };
    
    cout << "Unique Number" << endl;
    for (int price : prices) {
        cout << price << " " << endl;
    }
    cout << endl;

    cout << "---- Pointer/Reference ---" << endl;
    // Pointer
    int a = 10;
    int* ptr = &a;
    
    cout << "Value of x: " << a << endl;
    cout << "Address of x: " << &a << endl;
    cout << "Pointer points to: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;
    cout << endl;

    // Reference
    int b = 20;
    int& ref = b;

    cout << "Value of b: " << b << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 30; // จะเปลี่ยนค่าของ b ด้วย

    cout << "Value of b (new value): " << b << endl;
    cout << "Value of ref (new value): " << ref << endl;
    cout << endl;
}