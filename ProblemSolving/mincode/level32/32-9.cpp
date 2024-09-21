#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    string str;
    int n;
    cin >> str >> n;

    sort(str.begin(),str.end());

    int len = str.length();
    int direct[200] ={0};
    for(int i=len-n;i<len;i++){
        direct[str[i]]++;
    }

    int max = 0;
    int maxIdx = 0;

    for(int i=0;i<200;i++){
        if(direct[i] == 0) continue;
        if(direct[i]>max){
            max = direct[i];
            maxIdx = i;
        }
    }

    cout << char(maxIdx);



    return 0;
}