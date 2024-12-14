#include "Linklist.h"
using namespace std;

int main(){
    Linklist list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.remove(2);
    list.print();
}
