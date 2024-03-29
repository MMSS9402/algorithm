#include <iostream>
#include <string>
using namespace std;

int getCnt(string gin, string jal){
    int cnt = 0;
    int a = -1;
    while(1){
        a = gin.find(jal,a+1);
        if(a==-1) break;

        cnt++;
    }
    return cnt;
}

int main(){

    string str1 = "ABCDAAABC";
    string str2 = "BC";
    int cnt = 0;
    if(str1.length() > str2.length()){
        cnt = getCnt(str1,str2);
    }
    else{
        cnt = getCnt(str2,str1);
    }

    return 0;
}