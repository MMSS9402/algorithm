#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Node{
    int x,y;
    int price;
};
const int MAXI = 21e8;

bool operator<(Node v, Node t){
    return t.price<v.price;
}

int result[4][4] = {MAXI};
int direct[4][2] = {
    0,1,
    1,0,
    0,-1,
    -1,0
};
int map[4][4] ={
    2,2,1,1,
    3,1,30,1,
    0,20,50,2,
    2,5,3,0
};
priority_queue<Node> q;

void init(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result[i][j] = 21e8;
        }
    }
    result[1][1] = 1;
    q.push({1,1,1});
}

int main(){
    init();

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.x][now.y] > now.price) continue;

        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dx>=4||dy<0||dy>=4) continue;
            int total = now.price + map[dx][dy];

            if(result[dx][dy]>total){
                result[dx][dy] = total;
                q.push({dx,dy,total});
            }

        }
    }
    cout << result[3][1];

    return 0;
}