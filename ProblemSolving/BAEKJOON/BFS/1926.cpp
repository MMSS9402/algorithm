#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
int map[501][501];
int used[501][501];
int direct[4][2] = {
    1,0,
    0,1,
    -1,0,
    0,-1
};
int maxi = -999;

// int cnt = 0;
int tgt_cnt = 0;
int cnt = 0 ;
int dfs(int x,int y){
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=n||dy>=m) continue;
        if(used[dx][dy] == 1) continue;
        if(map[dx][dy] == 0) continue;
        used[dx][dy] = 1;
        cnt++;
        dfs(dx,dy);
    }

    return cnt;

}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(used[i][j] == 1) continue;
            if(map[i][j] == 0) continue;
            used[i][j] = 1;
            cnt = 1;
            int  t = dfs(i,j);
            tgt_cnt++;
            if( t>maxi) maxi = t;
        }
        // if(cnt>maxi) maxi = cnt;
    }

    cout << tgt_cnt << endl;
    if(maxi>0)
        cout << maxi;
    else
        cout << 0;


    return 0;
}