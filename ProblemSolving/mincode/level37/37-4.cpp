#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x,y;
};
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};
int used[4][4] = {0};

queue<Node> q;
int map[4][4] = {0};

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> map[i][j];
        }
    }
    q.push({0,0});
    int cnt = 0;
    while(!q.empty()){
        
        Node now = q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            
            if(dx<0||dy<0||dx>=4||dy>=4) continue;
            if(map[dx][dy] == 1){
                
                if(used[dx][dy] == 1) continue;
                
                used[dx][dy] = 1;
                q.push({dx,dy});
                cnt++;
            }
        }
    }
    cout << cnt;




    return 0;
}