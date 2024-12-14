// If not ever define _MYVECTOR_H_, define it
// and define the class MyVector
#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_

class MyVector
{
protected: // to be explained
    int n;
    double* m; 
public:
    MyVector();
    MyVector(int n, double m[]); 
    MyVector(const MyVector& v); 
    ~MyVector();
    void print() const;
    // ==, !=, <, [], =, +=
    double& operator[](int i);
};

#endif