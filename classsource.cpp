#include "class.h"
#include "Source.h"

int getInput() {
    int k;
    cout << "Enter the amount of spheres: ";
    while (!(cin >> k) || cin.peek() != '\n') {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return k;
}


Sphere::Sphere() {
    x = 0;
    y = 0;
    z = 0;
    r = 0;
}

Sphere::Sphere(double x, double y, double z, double r) {
    x = x;
    y = y;
    z = z;
    r = r;
}

void Sphere::print() {
    cout << "Coordinates of centre of sphere: " << x << ", " << y << ", " << z << ", " << "\nRadius of sphere: " << r << endl;
}

void Sphere::Generation() {
    x = rand() % 100 - 50;
    y = rand() % 100 - 50;
    z = rand() % 100 - 50;
    r = rand() % 50 + 1;
}

double Sphere::getRadius() {
    return r;
}

double Sphere::Checking(double a, double s, double d) {
    return sqrt(pow(x - a, 2) + pow(y - s, 2) + pow(z - d, 2));
}