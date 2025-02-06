#include <iostream>
#include <vector>
#include <string>
using namespace std;

string str = "BAQRRGGVAQZAACT";

int main(){

    string temp = str.substr(0,5);
    int dat[200] = {0};
    int max = -99;
    char maxIdx;
    for(int i=0;i<5;i++){
        dat[temp[i]]++;
        if(dat[temp[i]]>max){
            maxIdx = temp[i];
            max = dat[i];
        }
    }

    for(int i=0;i<=str.length()-5;i++){
        dat[str[i]]--;
        dat[str[i+5]]++;
        if(dat[str[i+5]]>max){
            maxIdx = str[i+5];
            max = dat[str[i+5]];
        }
    }
    cout << maxIdx << " :" << max;

    return 0;
}