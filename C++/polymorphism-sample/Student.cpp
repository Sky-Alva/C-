#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, int id, string grade, int passScore) {
    this->name = name;
    this->id = id;
    this->age = 0;
    this->grade = grade;
    this->year = 1;
    this->passScore = passScore;
}
Student::~Student() {
    
}
string Student::getGrade() const {
    return this->grade;
}
void Student::setGrade(const string& g) {
    this->grade = g;
}
int Student::getPassScore() const {
    return this->passScore;
}

void Student::setPassScore(int ps) {
    this->passScore = ps;
}
void Student::display() const {
    cout << "Name: " << name << ", Grade: " << grade << ", Pass Score: " << passScore << endl;
}