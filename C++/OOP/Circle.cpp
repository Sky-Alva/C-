#include<iostream>
using namespace std;

class Circle{
    public:
        float r;
        Circle(float r){
            this->r=r;
        }
        void setRadius(float r){this->r = r;}
        void getRadius(){cout<<"Radius: "<<r<<endl;}
        void getArea(){cout<<"Circle Area: "<<3.14*r*r<<endl;}
};

int main(){
    Circle circle(1);
    circle.getRadius();
    circle.setRadius(5);
    circle.getArea();
    return 0;
}