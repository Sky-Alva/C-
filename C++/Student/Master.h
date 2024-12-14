// Inherit from Student class
// Minimum pass score: 70
// grade: "Master"
//

#ifndef _MASTER_H
#define _MASTER_H
#include "Student.h"
using namespace std;

class Master : public Student{
    public:
        Master(string name, int id, int age, int year) : Student (name, id, age, "Master", year, 70) {}
            
};


#endif