#include <iostream>
#include <queue>
using namespace std;

int map[4][9] = {0};
struct Node {
    int x,y;
    int n;
};
int used[4][9]= {0};
int direct[4][2] = {
    0,1,
    0,-1,
    1,0,
    -1,0
};
queue<Node> q;

void init(){
    for(int i=0;i<4;i++){
        for(int j=0;j<9;j++){
            cin >> map[i][j];
        }
    }
}

int bfs(int tgt,int x, int y){
    int cnt = 0;
    q.push({x,y,tgt});
    used[x][y] = 1;
    cnt++;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=4||dy>=9) continue;
            if(used[dx][dy] == 1) continue;
            if(map[dx][dy] != tgt) continue;
            used[dx][dy] = 1;
            q.push({dx,dy,tgt});
            cnt++;
        }
    }
    return cnt;
}



int main(){

    init();
    
    int max = -999;
    int maxidx = 0;
    

    for(int i=0;i<4;i++){
        for(int j=0;j<9;j++){

            if(used[i][j] == 1) continue;
            int ret = bfs(map[i][j],i,j);
            if(ret>max){
                max = ret;
                maxidx = map[i][j];
                // cout << maxidx << ' ' << ret << endl;
            }
            
        }
    }

    cout << max*maxidx;


    return 0;
}