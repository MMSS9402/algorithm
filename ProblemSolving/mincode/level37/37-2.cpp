#include <iostream>
#include <queue>
using namespace std;
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};
struct Node{
    int x,y;
};
queue<Node> q;

int map[1000][1000] = {0};

int main(){
    int n,m;
    cin >> n >> m;
    // cout << n << m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
        }
    }
    int x1,y1;
    cin >> x1 >> y1;
    q.push({x1,y1});
    int cnt = 0;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=m) continue;
            if(map[dx][dy]!=0) continue;
            map[dx][dy] = map[now.x][now.y] + 1;
            if(map[dx][dy] > cnt){
                cnt = map[dx][dy];
            }
            q.push({dx,dy});
        }
    }
    cout << cnt;

    return 0;
}