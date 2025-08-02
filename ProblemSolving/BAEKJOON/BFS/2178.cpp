#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n,m;

string map[101];

struct Node{
    int x,y;
    int price;
};

int direct[4][2]={
    1,0,
    0,1,
    -1,0,
    0,-1
};

int used[101][101];

void bfs(int x, int y){
    queue<Node> q;
    q.push({x,y,1});

    while(!q.empty()){
        Node now = q.front();
        q.pop();

        if(now.x == n-1 && now.y == m-1) cout << now.price << endl;

        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=m) continue;
            if(map[dx][dy] == '0') continue;
            if(used[dx][dy] == 1) continue;
            used[dx][dy] = 1;
            q.push({dx,dy,now.price+1});
        }
    }

}


int main(){

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> map[i];
    }

    bfs(0,0);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(map[i][j] == '0') continue;
    //         if(used[i][j] == 1) continue;
    //         used[i][j] = 1;
    //         bfs(i,j);
    //     }
    // }

    




    return 0;
}