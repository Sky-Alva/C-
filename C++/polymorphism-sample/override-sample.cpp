#include <iostream>
#include "Student.h"
#include "Bachelor.h"
#include "Master.h"
#include "Phd.h"
using namespace std;

int main() {
    // We CANNOT CREATE OBJECTS OF THE BASE CLASS
    // Because it is an abstract (prototype) class
    Student *ptr;
    Bachelor b("John", 1);
    // POINTER MUST BE LATE BINDING
    ptr = &b;
    ptr->display();

    return 0;
}