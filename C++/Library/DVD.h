#include "Library.h"
#include <iostream>
using namespace std;

class DVD : public Library{
    protected: 
        string director;
        int duration;
    public:

        DVD(string title, int id, string director, int duration) : Library("DVD", title, id, director, duration){
            this->title = title;
            this->id = id;
            this->director = director;
            this->duration = duration;
        }
        void display();
        void setDirector(string d);
        void getDirector();
        void setDuration(int d);
        void getDuration();
};

void DVD::display(){
    cout<<"Library ID: "<<id<<endl;
    cout<<"DVD - "<<title<<endl;
    cout<<"Director: "<<director<<endl;
    cout<<"Duration: "<<duration<<endl;
}

void DVD::setDirector(string d){
    this->director = d;
}

void DVD::getDirector(){
    cout<<"Director: "<<this->director<<endl;
}

void DVD::setDuration(int d){
    this->duration = d;
}

void DVD::getDuration(){
    cout<<"Duration: "<<this->duration<<endl;
}