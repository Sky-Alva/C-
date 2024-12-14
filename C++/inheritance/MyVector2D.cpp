#include <iostream>
#include "MyVector2D.h"
using namespace std;

MyVector2D::MyVector2D() {
    this->n = 2; 
}
MyVector2D::MyVector2D(double m[]) : MyVector(2, m) {

}
void MyVector2D::setValue(double i1, double i2) {
    if(this->m == nullptr) 
        this->m = new double[2];
    this->m[0] = i1;
    this->m[1] = i2; 
}
void MyVector2D::print() const {
    cout << "2D: (";
    MyVector::print();
}