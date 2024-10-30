#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x,y;
};

int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
int map[100][100] = {0};
queue<Node> q;

int main(){
    int n;
    cin >> n;
    int o1,p1,o2,p2;
    cin >> o1 >> p1 >> o2 >> p2;
    map[o1][p1] = 1;
    q.push({o1,p1});
    map[o2][p2] = 1;
    q.push({o2,p2});

    while(!q.empty()){
        Node now = q.front();
        q.pop();
        // cout << now.x << now.y << endl;
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=n) continue;
            if(map[dx][dy] != 0) continue;
            map[dx][dy] = map[now.x][now.y] + 1;
            q.push({dx,dy});
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << map[i][j];
        }
        cout << endl;
    }



    return 0;  
}
