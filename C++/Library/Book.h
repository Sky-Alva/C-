#include "Library.h"
#include <iostream>
using namespace std;

class Book: public Library{
    protected:
        string author;
        int numPages;
    public:
        Book(string title, int id, string author, int numPages) : Library("Book", title, id, author, numPages){
            this->title = title;
            this->id = id;
            this->author = author;
            this->numPages = numPages;
        }

        void display();
        void setAuthor(string a);
        void getAuthor();
        void setNumPages(int n);
        void getNumPages();
};

void Book::display(){
    cout<<"Library ID: "<<id<<endl;
    cout<<"Book - "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Duration: "<<numPages<<endl;
}

void Book::setAuthor(string a){
    this->author = a;
}

void Book::getAuthor(){
    cout<<"Author: "<<this->author<<endl;
}

void Book::setNumPages(int i){
    this->numPages = i;
}

void Book::getNumPages(){
    cout<<"Number of Page: "<<this->numPages<<endl;
}