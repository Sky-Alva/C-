// Inherit from Student class
// Minimum pass score: 75
// grade: "Phd"
//

#ifndef _PHD_H
#define _PHD_H

#include "Student.h"
using namespace std;

class Phd : public Student{
    public:
        Phd(string name, int id, int age, int year) : Student (name, id, age, "Phd", year, 75) {}
            
};


#endif