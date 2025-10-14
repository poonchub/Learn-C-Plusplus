#include "Car.h"
#include <iostream>

Car::Car(string brand, int year)
    : brand(brand), year(year) {}

Car::~Car(){
    cout << "Car destroyed" << endl;
}

void Car::start(){
    cout << brand << " (" << year << ") is starting..." << endl;
}

void Car::show(){
    cout << brand << " - " << year << endl;
}

void Car::test(){
    cout << "Test Car!!" << endl;
}

void Car::setYear(int y){
    year = y;
}

int Car::getYear() {
    return year;
}