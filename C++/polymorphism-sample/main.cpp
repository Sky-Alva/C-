#include <iostream>
#include "Student.h"
#include "Bachelor.h"
#include "Master.h"
#include "Phd.h"
using namespace std;

#define MAX_STUDENTS 2

int main() {
    // Array of pointers, initialized with nullptr
    Student *students[MAX_STUDENTS] = {nullptr};
    for (int i=0; i < MAX_STUDENTS; i++) {
        string grade;
        int id;
        string name;

        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student id: ";
        cin >> id;
        cout << "Enter student grade: ";
        cin >> grade;
        cin.ignore(); // to skip new line
        if (grade == "bachelor") {
            students[i] = new Bachelor(name, id);
        }
    }
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        // If it is not null pointer, then display
        if (students[i] != nullptr)
            students[i]->display();
    }
    // Free memory of pointers
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        if (students[i] != nullptr)
            delete students[i];
    }

    return 0;
}