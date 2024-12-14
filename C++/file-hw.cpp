// Read from file
// The file has several instructions with following command
// INIT X Y => Initialize X and Y coordinate
// For example: INIT 0 0 

// Move X Y => Move to specific X and Y coordinate
// MAKE UP DOWN LEFT RIGHTT 

//Output: last coordinateifs


#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ifstream inputFile("file-hw.txt");
    string line;
    string word_1;
    int line_length;
    string num_1, num_2;
    int x,y;
    while(getline(inputFile, line)){
        word_1=line.substr(0,line.find(' '));
        num_1= (line.substr((word_1.size()), word_1.find(' ')));
        
        if(word_1=="INIT" or word_1 == "MOVE"){
            num_2 = line.substr(to_string(stoi(num_1)).size()+5);
            x=stoi(num_1);
            y=stoi(num_2);
        }
        else if(word_1 == "UP"){
            y=y+stoi(num_1);
        }
        else if(word_1 == "DOWN"){
            y=y-stoi(num_1);
        }
        else if(word_1 == "LEFT"){
            x=x-stoi(num_1);
        }
        else if(word_1 == "RIGHT"){
            x=x+stoi(num_1);
        }
        else{
            continue;
        }
    }

    cout<<"LAST X POS : "<<x<<endl;
    cout<<"LAST Y POS : "<<y<<endl;
    
    inputFile.close();
    return 0;
}