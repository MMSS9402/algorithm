#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x,y;
};
int direct[4][2]={
    1,0,
    -1,0,
    0,1,
    0,-1
};

int map[5][5] = {
    0,0,1,1,1,
    1,0,0,0,1,
    1,1,1,0,1,
    0,0,0,0,1,
    1,0,1,0,0
};
int used[5][5];
queue<Node> q;

int main(){

    int o,p;
    cin >> o >> p;
    q.push({o,p});
    used[o][p] = 1;
    map[o][p] = 0;

    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=5||dy>=5) continue;
            if(map[dx][dy] != 0) continue;
            if(used[dx][dy] == 1) continue;
            used[dx][dy] = 1;
            map[dx][dy] = map[now.x][now.y] + 1;
            q.push({dx,dy});
        }
    }
    int e,r;
    cin >> e >> r;
    cout << map[e][r] << endl;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << map[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}