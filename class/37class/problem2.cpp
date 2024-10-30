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

int map[4][4] = {
    1,0,1,1,
    0,0,0,1,
    0,3,0,2,
    3,2,0,0
};
queue<Node> q;

int main(){

    int o,p;
    cin >> o >> p;
    map[o][p] = -1;
    q.push({o,p});

    int cnt = 1;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=4||dy>=4) continue;
            if(map[dx][dy] != 0) continue;

            map[dx][dy] = -1;
            q.push({dx,dy});
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}