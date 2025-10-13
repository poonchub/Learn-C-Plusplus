#include <iostream>
#include <dynamic_memory_allocation.h>

using namespace std;

void dynamicMemoryAllocation() {
    cout << "========= Dynamic Memory Allocation =========" << endl;
    // ใช้เมื่อไม่รู้จำนวนข้อมูลล่วงหน้า เช่น รับข้อมูลจากผู้ใช้

    int n;
    cout << "Enter number of students: "; 
    cin >> n;

    int* scores = new int[n];   // จองหน่วยความจำแบบ dynamic

    for (int i=0 ; i<n ; i++) {
        cout << "Enter score: ";
        cin >> scores[i];
    }

    cout << "All Score" << endl;
    for (int i=0 ; i < n ; i++) {
        cout << scores[i] << ", ";
    }
    cout << endl;

    delete[] scores;    // คืนหน่วยความจำ
}