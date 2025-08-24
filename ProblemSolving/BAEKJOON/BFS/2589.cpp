#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Node{
    int x,y;
    int sum;
};
// bool operator<(Node v, Node t){
//     return t.sum<v.sum;
// }

int mini = -21e8;
string map[51];
int direct[4][2]={
    1,0,
    0,1,
    -1,0,
    0,-1
};
int used[51][51];

void init(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            used[i][j] = 0;
        }
    }
}

void bfs(int x, int y,int n, int m){
    queue<Node> q;
    q.push({x,y,0});
    init(n,m);
    used[x][y] = 1;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        if(now.sum>mini){
            mini = now.sum;
        }
        
        for(int t=0;t<4;t++){
            int dx = now.x +direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=m) continue;
            if(map[dx][dy] == 'W') continue;
            if(used[dx][dy] == 1) continue;
            used[dx][dy] = 1;
            q.push({dx,dy,now.sum+1});
        }
    }
}




int main(){

    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> map[i];
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << map[i][j] << " ";
    //     }
    //     cout <<endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j] == 'W') continue;
            bfs(i,j,n,m);
        }
    }



    cout << mini;





    return 0;
}