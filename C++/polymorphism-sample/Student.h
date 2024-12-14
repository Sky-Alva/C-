#include <iostream>
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
        Student(string name, int id, string grade, int passScore);
        ~Student();
        string getGrade() const;
        void setGrade(const string& g);
        int getPassScore() const;
        void setPassScore(int score);
        virtual void display() const;
};

#endif