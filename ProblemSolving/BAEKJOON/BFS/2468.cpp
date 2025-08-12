#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node{
    int x,y;

};

int n;
int m;

int map[101][101];
int result[101][101];
int used[101][101];

int maxi = -99;

int direct[4][2] = {
    0,1,
    1,0,
    -1,0,
    0,-1
};

void bfs(int x, int y, int tgt){
    queue<Node> q;
    q.push({x,y});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=n) continue;
            if(map[dx][dy] <=tgt) continue;
            if(used[dx][dy] == 1) continue;
            used[dx][dy] = 1;
            q.push({dx,dy});

        }

    }
}

void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[i][j] = map[i][j];
            used[i][j] = 0;
        }
    }
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
            if(map[i][j]>m){
                m = map[i][j];
            }
        }
    }

    for(int k=0;k<m;k++){
        init();
        int cnt = 0;
        for(int i=0;i<n;i++ ){
            for(int j=0;j<n;j++){
                if(map[i][j] > k && used[i][j] != 1){
                    bfs(i,j,k);
                    cnt++;
                }
            }
        }
        if(cnt>maxi){
            maxi = cnt;
        }
    }

    cout << maxi;







    return 0;   
}