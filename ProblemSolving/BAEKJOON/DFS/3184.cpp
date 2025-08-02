#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int r,s;

char map[251][251];
int used[251][251];

int ycnt;
int ncnt;

int area_yang, area_neak;

int direct[4][2]={
    1,0,
    0,1,
    -1,0,
    0,-1
};

void dfs(int x,int y){
    used[x][y] = 1;
    if(map[x][y] == 'o') area_yang++;
    if(map[x][y] == 'v') area_neak++;

    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=r||dy>=s) continue;
        if(used[dx][dy] == 1) continue;
        if(map[dx][dy] == '#') continue;
        used[dx][dy] = 1;
        dfs(dx,dy);
    }

}

int main(){
    
    cin >> r >> s;

    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            cin >> map[i][j];
        }
    }
    int temp = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            if(map[i][j] == '#' || map[i][j] == '.') continue;
            if(used[i][j] == 1) continue;
            used[i][j] = 1;
            area_neak = 0;
            area_yang = 0;
            dfs(i,j);
            if(area_yang > area_neak) ycnt += area_yang;
            else ncnt += area_neak;
        }
        
    }
    cout << ycnt << " " << ncnt;

    return 0;
}