#include <iostream>
#include <string>
using namespace std;

string str1,str2;

int isCount(string s,string t){
    int cnt =0;
    for(int i=0;i<s.length();i++){
        int ret = s.find(t,i);
        if(ret != -1){
            cnt++;
            i=ret;
        }
    }
    return cnt;
}

int main(){


    cin >> str1 >> str2;
    
    if(str1.length()>str2.length()){
        cout << isCount(str1,str2);
    }
    else{
        cout << isCount(str2,str1);
    }
    return 0;
}