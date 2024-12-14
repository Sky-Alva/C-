#include "Node.h"
#include <iostream>
using namespace std;

class Linklist{
    private: 
        Node* head;

    public:
        Linklist(){
            this->head = nullptr;
        }
        
        ~Linklist(){
            Node* temp = this-> head;
            while(temp!= nullptr){
                Node* next = temp->next;
                delete temp;
                temp = next;
            }
        }
        void insert(int data){
            Node* newNode = new Node(data);

            if(this->head == nullptr){
                this->head = newNode;
            }
            else{
                Node* temp = this->head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }    
        }
        
        void remove(int offset){
            Node* temp = this->head;
            while(temp->next != nullptr){
                if(offset == 0){
                    this->head = temp->next;
                    break;
                }
                else if (offset == 1){
                    temp->next = temp->next->next;
                    break;
                }
                else{
                    offset--;
                    temp = temp->next;
                }
            }
        }
        void print(){
            Node* temp = this->head;
            while (temp != nullptr){
                cout<<temp->data<<' ';
                temp = temp->next;
            }
        }
};