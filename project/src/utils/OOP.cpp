#include <iostream>
#include <OOP.h>

#include <Car.h>
#include <SuperCar.h>
#include <vector>

using namespace std;

void OOP(){
    cout << "================= OOP =======================" << endl;

    Car* car1 = new SuperCar("Toyota", 2025, 300);
    car1->show();
    cout << "Year: " << car1->getYear() << endl;
    car1->setYear(2026);
    cout << "Year (New): " << car1->getYear() << endl;
    car1->start();

    car1->~Car();

    cout << endl;

    vector<Car*> cars;
    cars.push_back(new SuperCar("Nissan", 2025, 280));
    cars.push_back(new SuperCar("Ferrari", 2022, 200));
    cars.push_back(new SuperCar("Isuzu", 2000, 120));

    for (Car* car : cars) {
        car->start();
    }

    for (auto car : cars){
        car->~Car();
        delete car;
    }
}