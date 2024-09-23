#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string str[6] ={
    "ABCD",
    "ABCE",
    "AGEH",
    "EIEI",
    "FEQE",
    "ABAD",
};
int used[4];

int main(){

    string temp;
    cin >> temp;

    for(int i=0;i<4;i++){
        if(temp[i] == '?') continue;
        used[i] = 1;
    }
    int cnt = 6;
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(used[j] == 0) continue;
            if(temp[j] != str[i][j]){
                cnt--;
                break;
            }
        }
    }

    cout << cnt;



    return 0;
}