#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;

int map[10][10];
int used[10][10];
int flag = 0;
int direct[2][2]={
    0,1,
    1,0
};

void dfs(int x, int y){
    if(map[x][y] == -1){
        // cout << "moon";
        flag = 1;
        // return 1;
    }


    for(int t=0;t<2;t++){
        int dx = x + direct[t][0]*map[x][y];
        int dy = y + direct[t][1]*map[x][y];
        if(dx<0||dy<0||dx>=n||dy>=n) continue;
        if(used[dx][dy] == 1) continue;
        used[dx][dy] = 1;
        dfs(dx,dy);
    }

    // return 0;
}

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    

    dfs(0,0);
    if(flag) cout << "HaruHaru";
    else cout << "Hing";

    

    return 0;
}