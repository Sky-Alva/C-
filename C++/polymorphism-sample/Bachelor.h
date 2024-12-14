#include <iostream>
#include "Student.h"
using namespace std;

// Inherit from Student class
// Minimum pass score: 60
// grade: "Bachelor"
//
class Bachelor : public Student {
public:
    Bachelor(string name, int id);
    void display() const;
};