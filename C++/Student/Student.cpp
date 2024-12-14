#include <iostream>
#include <string>
#include <fstream>

#include "Student.h"
#include "Bachelor.h"
#include "Master.h"
#include "Phd.h"
using namespace std;

int main(){
    ifstream inputFile("student.txt");
    string line;
    //name, id, age, grade, year, passScore
    string line1,line2,line3,line4;
    string name, grade;
    int id, age, year, passScore;
    while(getline(inputFile,line)){
        line1 = line.substr(0, line.find(' '));
        name = line1;
        line2 = line.substr(name.size()+1, name.find(' '));
        id = stoi(line2);
        line3 = (line.substr(name.size() + to_string(id).size() +2, line2.find(' ')));
        age = stoi(line3);
        line4 = line.substr(name.size()+to_string(id).size() + to_string(age).size()+3,1);
        grade = line4;
        passScore = stoi(line.substr(name.size()+to_string(id).size() + to_string(age).size()+grade.size()+4,2));
        year = stoi(line.substr(name.size()+to_string(id).size() + to_string(age).size()+grade.size()+6));

        cout<<name<<' '<<id<<' '<<age<<' '<<grade<<' '<<passScore<<' '<<year<<' '<<endl;
    }
    inputFile.close();

    while(grade!= "X"){
        cout<<"Grade Name Age: ";
        cin>>grade>>name>>age;
        if(grade == "B"){
            Bachelor testsubject(name, id+1, age , 2024);
            testsubject.setValueToFile();
            id+=1;}
        else if(grade == "M"){
            Master testsubject(name, id+1, age , 2024);
            testsubject.setValueToFile();
            id+=1;}
        else if(grade == "P"){
            Phd testsubject(name, id+1, age , 2024);
            testsubject.setValueToFile();
            id+=1;}
        else
            break;
    }
    
    return 0;
}
