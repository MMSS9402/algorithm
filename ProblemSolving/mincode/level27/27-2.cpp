#include <iostream>
#include <vector>
#include <string>
using namespace std;
char name[4] = {'A','B','C','D'};
int main(){

    int map[4][4] ={0};
    int max = -9999;
    int maxIdx = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<4;i++){
        int cnt = 0;
        for(int j=0;j<4;j++){
            cnt += map[j][i];
        }
        if(cnt>max){
            max = cnt;
            //cout << cnt << " " << i << endl;
            maxIdx = i;
        }
    }
    //cout << maxIdx;
    cout << name[maxIdx];

    return 0;
}