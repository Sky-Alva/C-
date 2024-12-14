#include <iostream>
#include "MyVector.h"
#include "MyVector2D.h"
using namespace std;

int main() {
    double i[2] = {1, 2}; 
    MyVector v1(2, i);
    v1.print();
    MyVector2D v2D(i);
    v2D.print();

    return 0; 
}