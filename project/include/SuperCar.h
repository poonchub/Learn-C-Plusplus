#ifndef SUPERCAR_H
#define SUPERCAR_H

#pragma once

#include <string>
#include <Car.h>

class SuperCar : public Car
{
private:
    int turbo;    

public:
    SuperCar(string brand, int year, int turbo);

    ~SuperCar();

    void show() override;

    void setBrand(string b);
    void setTurbo(int t);
    int getTurbo();
};

#endif