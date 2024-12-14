#include<iostream>
using namespace std;

class Invoice{
    public:
        int qty;
        float price;
        string name;
        Invoice(string name, int qty, float price){
            this->name=name;
            this->qty=qty;
            this->price=price; 
        }
        void toString(){
            cout<<"Product Name: "<<this->name<<endl;
            cout<<"Quantity: "<<this->qty<<endl;
            cout<<"Price Per Item: "<<this->price<<endl;
        }
        void setName(string name){this->name=name;}
        void setQuantity(int qty){this->qty=qty;}
        void setPrice(float price){this->price=price;}
        void getTotalAmount(){
            cout<<"Total Amount: "<<this->qty*this->price<<endl;
        }
};


int main(){

    Invoice invoice1("Mouse",10,10.0);
    invoice1.toString();
    invoice1.setName("hi");
    invoice1.setQuantity(90);
    invoice1.setPrice(90.0);
    invoice1.getTotalAmount();
    
    return 0;
}