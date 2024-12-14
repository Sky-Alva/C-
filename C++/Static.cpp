#include <iostream>
using namespace std;

class A{
    private:
        static int count; //shared memory of a variable
    public:
        A() {A::count++; }
        ~A() {A::count--;}
        A(const A& inputA){ //To Copy a constructor 
            A::count++;
        }
        static int getCount()
        {
            return A::count;
        }
};

int A::count=0;

int main(){
    A a1,a2,a3,a4,a5,a7,a6;
    A a8=a7;
    cout<<"Count = "<<a1.getCount()<<endl;
}