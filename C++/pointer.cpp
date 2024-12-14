#include<iostream>
using namespace std;

void printNumber(int n1, int n2){
    cout<<n1<<" "<<n2<<endl;}

void swap(int& x, int& y){
    int temp =x;
    x=y;
    y=temp;
}

int main(){
    int n1 = 10 ,n2 = 20;
    int *ptr = &n1;
    swap(n1,n2);
    printNumber(n1,n2);

    cout<<"Memory Adress of Number 1 "<<&n1<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"value inside the ptr "<<*ptr<<endl;
    return 0;
}