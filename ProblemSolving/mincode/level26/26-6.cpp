#include <iostream>
using namespace std;

int map[5][5] = {0};

int main(){

    int x,y;
    int flag = 1;

    for(int i=0;i<6;i++){
        cin >> x >> y;
        map[x][y]++;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(map[i][j]>1){
                flag = 0;
                break;
            }
        }
    }

    if(flag){
        cout << "중복없음";
    }
    else{
        cout << "중복된좌표발견";
    }

    return 0;
}