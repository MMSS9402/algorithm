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

int map[5][6] = {
    0,0,1,1,1,1,
    0,0,1,0,0,1,
    0,1,0,1,0,1,
    0,1,0,0,1,1,
    1,0,1,1,0,0,
};
queue<Node> q;


int used[5][6];

void bfs(int startX,int startY){
    while(!q.empty()) q.pop(); // 큐 초기화
    // memset(used,0,3*6*sizeof(int)); // 한방에 used 배열 초기화

    // used[startX][startY] = 1;
    q.push({startX,startY});
    map[startX][startY] = 0;
    while(!q.empty()){
        Node now = q.front();
        q.pop();

        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=5||dy>=6) continue;
            // if(used[dx][dy] == 1 ) continue;
            if(map[dx][dy] != 1) continue;

            used[dx][dy]=1;
            map[dx][dy] = 0;
            q.push({dx,dy});
        }
    }
}



int main(){
    int result = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(map[i][j] == 0) continue;
            if(map[i][j] == 1){
                result++;
                bfs(i,j);
            }
        }
    }
    cout << result << endl;

    return 0;
}