#include "Bachelor.h"

Bachelor::Bachelor(string name, int id): Student(name, id, "bachelor", 60) {
}

void Bachelor::display() const {
    std::cout << "Bachelor Student - " << endl;
    // Student::display();
}
