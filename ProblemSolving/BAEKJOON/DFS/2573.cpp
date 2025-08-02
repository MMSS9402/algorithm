#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n,m;
int map[301][301];
int sum_cnt;
int used[301][301];

int direct[4][2] = {
    0,1,
    1,0,
    0,-1,
    -1,0
};

void dfs(int x,int y){
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=n||dy>=m) continue;
        if(map[dx][dy] == 0) continue;
        if(used[dx][dy] == 1) continue;
        used[dx][dy] = 1;
        dfs(dx,dy);
    }
}

int check(){
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(map[i][j] != 0 ){
                    return 1;
                }
            }
        }
        return 0;
}

int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
        }
    }
    int year = 0;
    while(1){
        int sum_cnt = 0;
        int temp[301][301] = {0};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int bing = 0;
                if(map[i][j] == 0) continue;
                for(int t=0;t<4;t++){
                    int dx = i + direct[t][0];
                    int dy = j + direct[t][1];
                    if(dx<0||dy<0||dx>=n||dy>=m) continue;
                    if(map[dx][dy] != 0) continue;
                    bing++;
                }
                if(map[i][j] - bing <= 0) temp[i][j] = 0;
                else temp[i][j] = map[i][j] - bing;
            }
        }
        year++;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                map[i][j] = temp[i][j];
                used[i][j] = 0;
            }
        }
        int lolo = check();
        if(lolo == 0) {
            cout << 0;
            return 0;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(map[i][j] == 0) continue;
                if(used[i][j] == 1) continue;
                used[i][j] = 1;
                dfs(i,j);
                sum_cnt++;
            }
        }
        if(sum_cnt>=2) break;

    }

    cout << year;
    

    return 0;
}