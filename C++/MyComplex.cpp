#include <iostream>
using namespace std;

class MyComplex{
    public:
        float real,i;
        MyComplex(float real, float i){
            this->real=real;
            this->i=i;
        }
        void toString(){
            cout<<this->real<<" + "<<this->i<<"i"<<endl;
        }
        float getReal(){return this->real;}
        float getImaginary(){return this->i;}
        MyComplex add(MyComplex complex){
            MyComplex result(this->real+complex.getReal(),this->i+complex.getImaginary());
            return result;
        }
        MyComplex substract(MyComplex complex){
            MyComplex result(this->real-complex.getReal(),this->i-complex.getImaginary());
            return result;
        }
        MyComplex multiply(MyComplex complex){
            MyComplex result(this->real*complex.getReal()-this->i*complex.getImaginary(),this->real*complex.getImaginary()+this->i*complex.getReal());
            return result;
        }
        MyComplex divide(MyComplex complex){
            MyComplex result((float) ( this->real*complex.getReal()+this->i*complex.getImaginary())/(complex.getReal()*complex.getReal()+complex.getImaginary()*complex.getImaginary()),(float) (this->i*complex.getReal()-this->real*complex.getImaginary())/(complex.getReal()*complex.getReal()+complex.getImaginary()*complex.getImaginary()));
            return result;
        }
        
};



int main(){



    

    // MyComplex a1(10,2);
    // MyComplex a2(1,1);
    // MyComplex a3 = a1.add(a2);
    // MyComplex a4 = a1.multiply(a2);
    // MyComplex a5 = a1.divide(a2);
    // a1.toString();
    // a4.toString();
    // a5.toString();
    return 0;
}