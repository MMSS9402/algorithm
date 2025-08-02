#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int flag = 0;
int n,m;
int map[301][301];
int used[301][301];

int direct[2][2]={
    0,1,
    1,0
};

void dfs(int x,int y){
    if(x == m-1 && y ==n-1){
        flag = 1;
    }
    for(int t=0;t<2;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=m||dy>=n) continue;
        if(used[dx][dy] == 1)continue;
        if(map[dx][dy]==0) continue;
        used[dx][dy] = 1;
        dfs(dx,dy);
    }
}


int main(){

    cin >> n >> m;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    used[0][0] = 1;
    dfs(0,0);


    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}