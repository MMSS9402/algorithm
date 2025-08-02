#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int m,n;
int map[501][501];
int used[501][501];
int direct[4][2]={
    0,1,
    1,0,
    0,-1,
    -1,0,
};
int dp[501][501] = {-1};
int total = 0;

int dfs(int x, int y){
    if(x == m-1 && y == n-1){
        return 1;
    }
    if(dp[x][y] != -1) return dp[x][y];

    dp[x][y] = 0; 

    int now = map[x][y];

    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=m||dy>=n) continue;
        if(map[dx][dy]>=now) continue;
        if(used[dx][dy] == 1) continue;
        dp[x][y] += dfs(dx,dy);
    }

    return dp[x][y];
}


int main(){

    cin >> m >> n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
            dp[i][j] = -1;
        }
    }
    // used[0][0] = 1;
    // dfs(0,0);

    cout << dfs(0, 0) << '\n';


    return 0;
}