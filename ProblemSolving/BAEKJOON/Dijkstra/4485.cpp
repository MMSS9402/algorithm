#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

struct Node{
    int x,y;
    int price;
};
bool operator<(Node v, Node t){
    return t.price<v.price;
}

const int MAXI = 21e8;
int map[126][126];
int result[126][126];
int direct[4][2]={
    0,1,
    0,-1,
    1,0,
    -1,0
};

void dijkstra(int x, int y, int n){
    priority_queue<Node> q;
    q.push({x,y,map[x][y]});

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.x][now.y] < now.price) continue;
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dy<0||dx>=n||dy>=n) continue;
            int total = map[dx][dy] + now.price;
            if(result[dx][dy]>total){
                result[dx][dy] = total;
                q.push({dx,dy,total});
            }
        }
    }

}

void init(int node){
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            map[i][j] = 0;
            result[i][j] = MAXI;
        }
    }
}

int main(){
    int num = 0;
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        
        init(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> map[i][j];
            }
        }

        dijkstra(0,0,n);
        num++;
        cout << "Problem " << num << ": " << result[n-1][n-1] << '\n';
    }

    return 0;
}