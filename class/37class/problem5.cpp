#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x,y;
    int lev;
};
int direct[4][2]={
    1,0,
    -1,0,
    0,1,
    0,-1
};

int map[3][6] = {
    0,0,0,0,1,0,
    1,1,1,0,1,0,
    0,0,0,0,0,0,
};
queue<Node> q;


int used[3][6];

int bfs(int startX,int startY, int endX, int endY){
    while(!q.empty()) q.pop(); // 큐 초기화
    // q = queue<Node> q;
    memset(used,0,3*6*sizeof(int)); // 한방에 used 배열 초기화

    used[startX][startY] = 1;
    q.push({startX,startY});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=3||dy>=6) continue;
            if(used[dx][dy] == 1 ) continue;
            if(map[dx][dy] == 1) continue;

            used[dx][dy]=1;
            q.push({dx,dy,now.lev+1});
            if(dx == endX && dy == endY) return now.lev+1;
        }
    }
    return 0;
}



int main(){
    int result = 0;
    result += bfs(0,0,2,0);
    result += bfs(2,0,0,5);
    cout << result;

    return 0;
}