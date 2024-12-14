#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main(){
    DynamicArray a1(5);
    cout<<a1<<endl; // 0 0 0 0 0 
    cout<<a1.size()<<endl; //5

    int d[]={1,2,3};
    DynamicArray a2(3,d);
    cout<<a2<<endl; // 1 2 3

    DynamicArray a3(a2);
    cout<<a3<<endl; // 1 2 3

    a1[2]=8;
    cout<<a1[2]<<endl; // 8
    //cout<<a1[22]<<endl; //error: out_of_range, exit (0)
    
    a3=a1;
    cout<<a3<<endl; // 0 0 8 0 0 

    cout<<(a1==a3)<<endl; // 1
    cout<<(a1==a2)<<endl; // 0


    const int SIZE =5;
    DynamicArray array(SIZE);
    cout<<"Enter "<<SIZE<<" Elements: ";
    cin>>array;
    cout<<array;
    return 0;
}

DynamicArray::DynamicArray(){
    dim = 0;
    arr = nullptr;
}

DynamicArray::DynamicArray(int n, int *v){
    dim = n;
    if (dim>0){
        arr = NULL;
        arr = new int[dim];
        for(int i = 0; i<dim;i++){
            if(i>dim)
                arr[i]=0;
            else
                arr[i] = v[i];
        }
    }
    else
        cout<<"Array Dimension couldn't be less or equal to zero"<<endl;
}

DynamicArray::DynamicArray(int n){
    dim = n;
    if (dim>0){
        arr= NULL;
        arr= new int[dim];
        for (int i = 0; i<dim; i++)
            arr[i]=0;
    }
}

DynamicArray::DynamicArray(const DynamicArray& v){
    dim = v.dim;
    arr = new int[dim];
    for (int i = 0; i<dim;i++)
        arr[i]= v.arr[i];
}

int& DynamicArray::operator[](int index){
    if (index>= dim){
        cout<<"error: out_of_range";
        exit(0);
    }
    else
        return arr[index];
}

DynamicArray& DynamicArray::operator= (const DynamicArray& v){
    if(this != &v){
        if (this ->dim != v.dim){
            delete [] this->arr;
            this->dim = v.dim;
            this->arr= new int[this->dim];
        }
        for(int i = 0; i<this->dim;i++){
            this->arr[i]=v.arr[i];
        }
    }
    return *this;
}

bool DynamicArray::operator==(const DynamicArray& v) const{
    if (dim != v.dim)
        return false;
    for (int i =0; i<dim;i++){
        if(arr[i]!=v.arr[i])
            return false;
    }
    return true;
}

bool DynamicArray::operator!=(const DynamicArray& v) const{
    return !(*this==v);
}

ostream & operator<< (ostream &out, const DynamicArray &v) {
   for (int i = 0; i < v.dim; i++) {
      out << v.arr[i] << ' ';
   }
   return out;
}

istream & operator >> (istream &in, DynamicArray &v){
    int arr[5];
    for (int i = 0; i < v.dim; i++)
    {
        in>>v.arr[i];
    }

    // cin>>temp[1];
    // cout<<*temp;

    return in;
}

void DynamicArray::print() const{
    for (int i=0; i<dim;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int DynamicArray::size(){
    return dim;
}