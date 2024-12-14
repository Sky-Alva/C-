#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "大家好";
    cout<<s[0]<<endl;
    char c[100]="噢耶";
    //c+2 = adress of c[2]
    cout<<c+2<<endl;
    for (int i = 0; i<s.length();i+=3)
    {
        string chinese;
        chinese[0]= s[i];
        chinese[1]= s[i+1];
        chinese[2]= s[i+2];
        cout<<chinese<<endl;
    }

    return 0;
}