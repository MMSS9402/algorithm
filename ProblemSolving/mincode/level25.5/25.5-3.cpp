#include <iostream>
#include <string>
using namespace std;

int validCheck(string str){
    //bad,no,puck이라는 단어가 없어야 함
    int ret = str.find("bad");
    if(ret!=-1) return 0;
    ret = str.find("no");
    if(ret!=-1) return 0;
    ret = str.find("puck");
    if(ret!=-1) return 0;
    //연속적인 언더바가 총 5개 이하여야 함
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        ret = str.find("_",i);
        if(ret==-1) break;
        if(str[i]!='_'||i==str.length()-1){
            if(cnt>5) return 0;
            cnt = 0;
        }
        if(str[i] == '_') cnt++;
    }
    if(cnt>5) return 0;
    //각 알파벳들 사용횟수가 5회 이하
    int dat[200] = {0};
    for(int i=0;i<str.length();i++){
        dat[str[i]]++;
    }
    for(int i=0;i<200;i++){
        if(i == int('_')) continue;
        if(dat[i] ==0) continue;
        if(dat[i]>5){
            return 0;
            break;
        }
    }

    //숫자가 없어야 함
    for(int i=0;i<10;i++){
        char c = '0' +i;
        int ret = str.find(c);
        if(ret !=-1) {
            return 0;
        }
    }


    return 1;
}


int main(){

    string str;
    cin >> str;
    // int x = str.find('1');
    // cout << x;

    int flag = validCheck(str);
    if(flag) cout << "pass";
    else cout << "fail";

    return 0;
}