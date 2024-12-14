#include <iostream>
#include "MyDinamicArray.h"
using namespace std;

int main(){
    double a1[3]={0,1,2};
    MyDinamicArray test1(3,a1);
    // cout<<test1.arr_size()<<endl;
    test1.print();
    cout<<test1[3]<<endl;
}

MyDinamicArray::MyDinamicArray(){
    size = 0;
    m = nullptr;
}
MyDinamicArray::MyDinamicArray(int dim, double v[]){
    size = dim;
    m = new double[dim];
    for(int i=0;i<size;i++){
        m[i]=v[i];
    }
}
MyDinamicArray::MyDinamicArray(const MyDinamicArray& v){
    size = v.size;
    m = new double[size];
    for(int i=0;i<size;i++){
        m[i]=v.m[i];
    }
}

bool MyDinamicArray::operator==(const MyDinamicArray& v) const{
    if(size!=v.size)
        return false;
    for(int i=0;i<size;i++){
        if(m[i]!=v.m[i])
            return false;
    }
    return true;
}

bool MyDinamicArray::operator!=(const MyDinamicArray& v)const {
    return !(*this==v);
}

MyDinamicArray& MyDinamicArray::operator= (const MyDinamicArray& v){
    if (this != &v){
        if(this ->size != v.size){
            delete [] this-> m;
            this->size = v.size;
            this->m = new double[this->size];
        }
        for(int i=0;i<size;i++){
            this->m[i]=v.m[i];
        }
    }
    return *this;
}

int MyDinamicArray::operator[](int i){
    if (i>=size)
        cout<<"Index Out Of Bound";
        exit(0);
    return m[i];
}

void MyDinamicArray::print(){
    cout<<'[';
    for(int i=0;i<size;i++){
        if(i==size-1)
            cout<<m[i];
        else
            cout<<m[i]<<',';
    }   
    cout<<']'<<endl; 
}

// ostream & operator<< (ostream & out, const MyDinamicArray & v) {
//    for (int i = 0; i < v.size; i++) {
//       out << v.m[i] << ' ';
//    }
//    return out;
// }

int MyDinamicArray::arr_size(){
    return size;
}