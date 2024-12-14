#include <iostream>
#include "MyVector.h"
using namespace std;

MyVector::MyVector(): n(0), m(nullptr) {
}
MyVector::MyVector(int n, double m[]) {
    this->n = n;
    this->m = new double[n]; 
    for(int i = 0; i < n; i++)
        this->m[i] = m[i]; 
}
MyVector::MyVector(const MyVector& v) {
    this->n = v.n;
    this->m = new double[n]; 
    for(int i = 0; i < n; i++)
        this->m[i] = v.m[i]; 
}
MyVector::~MyVector() {
    delete [] m;
}
void MyVector::print() const {
    cout << "(";
    for(int i = 0; i < n - 1; i++)
        cout << m[i] << ", "; 
    cout << m[n-1] << ")\n";
}
double& MyVector::operator[](int i) {
    if(i < 0 || i >= n) 
        exit(1);
    return m[i]; 
}