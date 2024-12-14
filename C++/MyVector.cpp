#include <iostream>
#include "MyVector.h"
using namespace std;

int main(){
    double d1[5]={1,2,3,4,5};
    double d2[5]={6,7,8,4,5};

    MyVector a1(5,d1);
    MyVector a2(5,d2);

    return 0;
}

MyVector::MyVector(){
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int dim, double v[]){
    n = dim;
    m = new double[dim];
    for (int i = 0; i<dim; i++){
        m[i]=v[i];
    }
}

MyVector::MyVector(const MyVector& v){
    n= v.n;
    m = new double[n];
    for (int i = 0; i<n; i++){
        m[i]=v.m[i];
    }
}

void MyVector::print()
{
    cout<<"(";
    for(int i = 0; i<n-1;i++){
        cout<<m[i]<<',';
    }
    cout<<m[n-1]<<")\n";
}

bool MyVector::operator==(const MyVector& v) const{
    if(this->n != v.n)
        return false;
    else{
        for(int i = 0; i<n; i++){
            if(this->m[i]!=v.m[i])
                return false;
        }
    }
    return true;
} 

bool MyVector::operator<(const MyVector& v) const{
    if(this->n != v.n)
        return false;
    else{
        for(int i = 0;i<n; i++){
            if(this-> m[i]>=v.m[i])
                return false;
        }
    }
    return true;
}

bool MyVector::operator<(const MyVector& v) const{
    if(this->n != v.n)
        return false;
    else{
        for(int i = 0;i<n; i++){
            if(this-> m[i]<=v.m[i])
                return false;
        }
    }
    return true;
}

bool MyVector::operator!=(const MyVector& v) const{
    if(*this==v)
        return false;
    else
        return true;
    //or return !(*this ==v); 
}

MyVector& MyVector::operator= (const MyVector& v){
    if(this != &v){
        if(this->n != v.n)
        {
            delete [] this->m;
            this->n=v.n;
            this->m = new double[this->n];
        }
        for (int i = 0; i<n;i++)
            this ->m[i]=v.m[i];
    }
    return *this;
}
const MyVector& MyVector::operator+= (const MyVector& v){
    if(this->n == v.n){
        for(int i = 0; i<n;i++)
            this->m[i] += v.m[i];
    }
    return *this;
}
const MyVector MyVector::operator+ (const MyVector& v){
    MyVector sum(*this);
    sum += v;
    return sum;
}
MyVector::~MyVector(){
    delete [] m;
}