#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream myfile;
    myfile.open("myfile.txt");
    myfile << "Hello World\n"<<"HELLOO\n"<<"HIII\n ";
    myfile.close();
    return 0;
}