#include "MyVector.h"

#ifndef _MYVECTOR2D_H_
#define _MYVECTOR2D_H_

class MyVector2D : public MyVector {
public:
    MyVector2D();
    MyVector2D(double m[]);
    MyVector2D(const MyVector2D& v) {}
    void setValue(double i1, double i2);
    void print() const; // override parent's print()
};

#endif
