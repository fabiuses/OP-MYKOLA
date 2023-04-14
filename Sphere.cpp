#include "class.h"


void generateSpheres(Sphere *array, int k) {
    for (size_t i = 0; i < k; i++)
    {
        array[i].Generation();
        cout << "Sphere " << i + 1 << " ";
        array[i].print();
    }
}


void checkPointInSpheres(Sphere *array, int k) {
    double s, d, f;
    cout << "\nEnter the coordinates that will be checked" << endl;
    cout << "Enter x: ";
    while (!(cin >> s) || cin.peek() != '\n') {
        cout << "Invalid input. Please 'x' one more time: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter y: ";
    while (!(cin >> d) || cin.peek() != '\n') {
        cout << "Invalid input. Please 'y' one more time: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter z: ";
    while (!(cin >> f) || cin.peek() != '\n') {
        cout << "Invalid input. Please 'z' one more time: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "This point belongs to spheres:";
    for (size_t i = 0; i < k; i++)
    {
        if (array[i].Checking(s, d, f) < array[i].getRadius()) {
            cout << i + 1 << " ";
        }
    }
}
