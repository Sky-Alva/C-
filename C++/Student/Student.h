#include <fstream>
using namespace std;

#ifndef _STUDENT_H_
#define _STUDENT_H_

// protected:
//      name : string
//      id : integer
//      age : integer
//      grade : string => bachelor, master, phd
//      year : integer
//      passScore : integer
class Student {
    protected:
        string name;
        int id;
        int age;
        string grade;
        int year;
        int passScore;
    public:
        Student(string name, int id, int age, string grade, int year, int passScore) {
            this->name = name;
            this->id = id;
            this->age = age;
            this->grade = grade;
            this->year = year;
            this->passScore = passScore;
        }
        string getGrade() {
            return this->grade;
        }
        int getPassScore() {
            return this->passScore;
        }
        void setValueToFile(){
            ofstream outputFile("student.txt", ios::app);
            outputFile<<this->name<<' '<<this->id<<' '<<this->age<<' '<<this->grade[0]<<' '<<this->passScore<<' '<<this->year<<' '<<endl;
        }
};

#endif