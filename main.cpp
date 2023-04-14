#include "class.h"
#include "Source.h"

int main()
{
    int k = getInput();
    Sphere* array = new Sphere[k];
    generateSpheres(array, k);
    checkPointInSpheres(array, k);
    delete[] array;
    return 0;

}