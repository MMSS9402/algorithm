#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int x,y,z;
    int sum;

};

int map[101][101][101];
int result[101][101][101];
int mini = 0;
int direct[6][3] = {
    0,0,1,
    0,0,-1,
    0,1,0,
    0,-1,0,
    1,0,0,
    -1,0,0
};

void init(int n,int m, int h){
    for(int k=0;k<h;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result[i][j][k] = -1;
            }
        }
    }
}

void bfs(int x, int y, int z,int n, int m, int h){
    queue<Node> q;
    q.push({x,y,z,0});
    result[x][y][z] = 0;

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        if(mini<now.sum){
            mini = now.sum;
        }

        for(int t=0;t<6;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            int dz = now.z + direct[t][2];
            if(dx<0||dy<0||dz<0||dx>=n||dy>=m||dz>=h) continue;
            if(map[dx][dy][dz] == -1) continue;
            // if(used[dx][dy][dz] == 1) continue;
            if(result[dx][dy][dz] != -1) continue;
            // used[dx][dy][dz] = 1;
            result[dx][dy][dz] = now.sum + 1;
            q.push({dx,dy,dz,now.sum+1});
        }
    }
}


int main(){
  
    int m,n,h;
    cin >> m >> n >> h;
    for(int k=0;k<h;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> map[i][j][k];
            }
        }
    }

    init(n,m,h);

    for(int k=0;k<h;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(map[i][j][k] == -1 || map[i][j][k] == 0) continue;
                if(result[i][j][k] != -1) continue;
                bfs(i,j,k,n,m,h);
            }
        }
    }

    int flag = 1;

    for(int k=0;k<h;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(result[i][j][k] == -1){
                    flag = 0 ;
                    break;
                }
                
            }
        }
    }

    if(flag) cout << mini;
    else cout << -1;

    

    return 0;
}