// Inherit from Student class
// Minimum pass score: 60
// grade: "Bachelor"
//
#ifndef _BACHELOR_H_
#define _BACHELOR_H_

#include "Student.h"
using namespace std;

class Bachelor : public Student{
    public:
        Bachelor(string name, int id, int age, int year) : Student (name, id, age, "Bachelor", year, 60) {}
            
};


#endif