#pragma once
#include <string>

using namespace std;

class Car
{
private:
    /* data */
    string brand;
    int year;

public:
    Car(const string& brand, int year);
    ~Car();

    void start();

    void show();
};
