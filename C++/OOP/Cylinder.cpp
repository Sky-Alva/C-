#include<iostream>
using namespace std;

class Circle{
    public:
        Circle(float r){
            this->r=r;
        }
        float getRadius(){return r;}
        float getArea(float r){return 3.14*r*r;}
    private:
        float r;
};

class Cylinder: public Circle{
    public:
        Cylinder(float r, float h): Circle(r){
            this->h=h;
            this->r=r;
        }
        void setRadius(float r){this->r = r;}
        float getHeight(){return h;}
        void setHeight(float h){this->h=h;}
        float getCylinderArea(){
            return (2*getArea(this->r))+(2*3.14*this->r*this->h);
        }
        float getVolume(){
            return getArea(r)*this->h;
        }
    private:
        float r,h;
};

int main(){
    Cylinder cylinder1(3,10);
    cout<<cylinder1.getRadius()<<endl;
    cout<<cylinder1.getHeight()<<endl;
    cylinder1.setRadius(3);
    cylinder1.setHeight(10);
    cout<<cylinder1.getArea(3)<<endl;
    cout<<cylinder1.getCylinderArea()<<endl;
    cout<<cylinder1.getVolume()<<endl;
    return 0;
}