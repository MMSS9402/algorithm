// Flood Fill
#include <iostream>
#include <queue>
using namespace std;
int direct[4][2] ={
    0,1,
    0,-1,
    1,0,
    -1,0
};

struct Node{
    int x,y;
};

queue<Node> q;

int map[3][3] = {0};

int main(){
    map[1][2] = 1;
    q.push({1,2});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        //다음꺼등록하기
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];

            if(dx<0||dy<0||dx>=3||dy>=3) continue;
            if(map[dx][dy] !=0 ) continue;

            map[dx][dy] = map[now.x][now.y] + 1;
            q.push({dx,dy});
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}