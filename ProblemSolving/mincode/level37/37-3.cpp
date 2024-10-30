#include <iostream>
#include <queue>
using namespace std;
int direct[8][2]={
    0,1,
    0,-1,
    1,0,
    -1,0,
    1,1,
    1,-1,
    -1,1,
    -1,-1
};
struct Node{
    int x,y;
};
queue<Node> q;

int map[4][5];
int check(){
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(map[i][j] != 1){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin >> map[i][j];
            if(map[i][j] == 1){
                q.push({i,j});
            }
        }
    }
    int cnt = 0;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<8;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=4||dy>=5) continue;
            if(map[dx][dy]!=0) continue;
            map[dx][dy] = map[now.x][now.y] + 1 ;
            if(map[dx][dy]>cnt){
                cnt = map[dx][dy]-1;
                // cout << cnt << endl;
            }
            q.push({dx,dy});
        }
        int ret = check();
        if(ret) break;
    }
    cout << cnt;

    return 0;
}