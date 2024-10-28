#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
int map[1000][1000];
int n;
int check(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j] != 0) return 1;
        }
    }
    return 0;
}


int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    int tgt = 0;
    int cnt = 0;

    while(1){
        tgt++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[i][j] == tgt){
                    map[i][j] = 0;
                    for(int t=0;t<4;t++){
                        int dx = i + direct[t][0];
                        int dy = j + direct[t][1];
                        if(dx>=0&&dx<n&&dy>=0&&dy<n)
                            map[dx][dy] = 0;
                    }
                    
                }
            }
        }
        if(check(n)!=1) break;

    }
    cout << tgt << "초";


    return 0;
}