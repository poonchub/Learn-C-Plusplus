#include <SuperCar.h>
#include <iostream>
using namespace std;

SuperCar::SuperCar(string brand, int year, int turbo)
    : Car(brand, year), turbo(turbo) {};

SuperCar::~SuperCar(){
    cout << "SuperCar destroyed" << endl;
}


void SuperCar::show(){
    cout << "SuperCar: " << brand << endl;
}

void SuperCar::setBrand(string b){
    brand = b;
}

void SuperCar::setTurbo(int t){
    turbo = t;
}

int SuperCar::getTurbo(){
    return turbo;
}