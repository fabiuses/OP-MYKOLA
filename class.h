#pragma once
#include <iostream>
#include <ctime>
#include <math.h>
#include <cctype>

using namespace std;
int getInput();

class Sphere {
private:
    double x;
    double y;
    double z;
    double r;
public:
    Sphere();
    Sphere(double x, double y, double z, double r);
    void print();
    void Generation();
    double getRadius();
    double Checking(double a, double s, double d);
};
void checkPointInSpheres(Sphere *array, int k);
void generateSpheres(Sphere *array, int k);
