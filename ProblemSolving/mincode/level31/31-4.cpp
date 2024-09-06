#include <iostream>
#include <vector>
#include <string>
using namespace std;

string str[5];
string tgt = "MAPOM";

int main(){

    for(int i=0;i<5;i++){
        cin >> str[i];
    }
    string temp;
    for(int i=0;i<5;i++){
        if(i==0){
            temp = str[i][1];
            continue;
        }
        temp += str[i][1];
    }
    
    for(int i=0;i<5;i++){
        str[i][1] = str[i][3];
        str[i][3] = temp[i];
    }
    int flag = 0;
    for(int i=0;i<5;i++){
        if(str[i] == tgt){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}