#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int check(string temp){
    for(int i=0;i<temp.length();i++){
        if(temp[i] !='_'){
            return 1;
        }
    }
    return 0;
}

int main(){

    string str;

    cin >> str;
    int cnt = 0;
    
    while(1){
        for(int i=0;i<str.length();i++){
            cout << str[i];
            if(str[i] == '_') continue;
            if(str[i]>='B' && str[i]<='Z'){
                str[i] = str[i]-1;
            }
            else if(str[i]<='A'){
                str[i] = '_';
            }
        }
            cout << endl;

        if(check(str) == 1) continue;
        else break;
    
    }
    for(int i=0;i<str.length();i++){
        cout << str[i];
    }
    
    return 0;
}