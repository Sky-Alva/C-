#include<iostream>
using namespace std;

class Book{
    public:
        string title,author;
        Book(string title, string author, int ISBN){
            this->title=title;
            this->author=author;
            this->ISBN=ISBN;
        }
        void getTitle(){cout<<this->title<<endl;}
        void setTitle(string title){this->title=title;}
    private:
        int ISBN;
};

int main(){
    Book a1("Title","Author",1234);
    a1.getTitle();
    a1.setTitle("New Title");
    a1.getTitle();

    return 0;
}