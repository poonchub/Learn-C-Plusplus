#ifndef CAR_H
#define CAR_H

#pragma once
#include <string>

using namespace std;

class Car
{

// ใช้ได้เฉพาะใน class นั้น
private:
    /* data */
    int year;

// ใช้ได้ใน class และ class ลูก
protected:
    string brand;
    void test();


// ใช้ได้ทุกที่
public:
    // Constructor
    Car(string brand, int year);

    // Destructor
    ~Car();

    void start();

    // Abstract Class
    // บังคับ Overtide ใน class ลูก
    virtual void show() = 0;

    // Encapsulation และ Getter/Setter (การ “ห่อหุ้มข้อมูล” เพื่อไม่ให้ภายนอกแก้ไขได้โดยตรง)
    int getYear();
    void setYear(int y);
};

#endif