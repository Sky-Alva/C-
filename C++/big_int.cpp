#include <iostream>
#include <cstring>
#include "big_int.h"
using namespace std;



int main(){
    char bigNumber1[]={'1','1','0','1','\0'};
    char bigNumber2[]={'1','8','0','9','\0'};
    BigInt int1(bigNumber1,4);
    BigInt int2(bigNumber2,4);
    int1.print();
    int2.print();
    BigInt result = int1.add(int1,int2);
    result.print();
    return 0;
}

BigInt::BigInt(int N){
    this-> digits = new char[N+1];
}

BigInt::BigInt(char * string, int N){
    this-> digits = new char[N+1];
    strcpy(this-> digits, string);

}

BigInt::~BigInt(){
    delete[] this-> digits;
}

BigInt BigInt::add(const BigInt& num1, const BigInt& num2){
    int overflow =0;
    BigInt integer(4);
    for (int i=3; i>=0;--i){
        int result = overflow + (num1.digits[i] - '0')+(num2.digits[i]- '0');
        if (result>=10){
            overflow = 1;
            result = result - 10;
        }
        else{
            overflow = 0;
        }
        integer.digits[i]= result + '0';
    }
    return integer;
}

void BigInt::print(){
    cout<<this->digits<<endl;
}