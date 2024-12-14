#include <iostream>
using namespace std;

class Library
{
protected:
    string title, type;
    int id;
public:
    Library(string type, string title, int id, string creator, int additional_info);
    ~Library();
    void setTitle(string t);
    void getTitle();
    void setId(int i);
    void getId();
    virtual void display();
};

Library::Library(string type, string title, int id, string creator, int additional_info){
    this->type = type;
    this->title = title;
    this->id = id;
};

void Library::setTitle(string t){
    this->title = title;
}

void Library::getTitle(){
    cout<<"Title: "<<this->title<<endl;
}

void Library::setId(int i){
    this->id = id;
}

void Library::getId(){
    cout<<"ID: "<<this->id<<endl;
}

