#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

char map[21][21];
int DAB[200];
int direct[4][2]={
    1,0,
    0,1,
    -1,0,
    0,-1
};
int r,c;
int used[21][21];

int maxi = 0;

void dfs(int x, int y, int sum){
    
    if(sum>maxi){
        maxi = sum;
    }

    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=r||dy>=c) continue;
        if(used[dx][dy] == 1) continue;
        if(DAB[map[dx][dy]]>0) continue;
        used[dx][dy] = 1;
        DAB[map[dx][dy]]++;
        dfs(dx,dy,sum+1);
        DAB[map[dx][dy]]--;
        used[dx][dy] = 0;
    }
}

int main(){

    
    cin >> r >> c;
    for(int i=0;i<r;i++){
        string temp;
        cin >> temp;
        for(int j=0;j<c;j++){
            map[i][j] = temp[j];
        }
    }

    DAB[map[0][0]]++;
    used[0][0] = 1;
    dfs(0,0,1);

    cout << maxi;

    return 0;
}