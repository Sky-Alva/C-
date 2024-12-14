#include <iostream>
#include "definition.h"
using namespace std;

int main(){
    int array[5];
    cout<<"Array length = "<< sizeof(array)/sizeof(array[0])<<endl;
    cout<<"Adress of array[0] = "<<&array[1]<<endl;
    cout<<"Adress of array[1] = "<<array + 2<<endl;

    cout<<"2+3 = "<<add(2,3)<<endl;
    int x=0;
    int* array1 = new int[x];//Dynamic array length
    cout<<fibonacci(8);
}

int add(int a, int b){
    return returnback(a)+b;
}
int returnback(int a){
    return a;
}
int fibonacci(int a){
    static int count;
    count++;
    cout<<"Call Count = "<<count<<endl;
    if (a<=2) return 1;
    return fibonacci(a-1)+fibonacci(a-2);
}