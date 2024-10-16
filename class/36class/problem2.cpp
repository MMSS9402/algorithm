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

int main(){

    int startx,starty,endx,endy;

    cin >> startx >> starty;
    cin >> endx >> endy;
    result[startx][starty] = map[startx][starty];
    q.push({startx,starty,map[startx][starty]});

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(map[now.x][now.y] < now.price) continue;
        
        for(int t=0;t<4;t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0||dx>4||dy<0||dy>4) continue;
            int next = map[dx][dy];
            int total = now.price + next;
            if(result[dx][dy] > total){
                result[dx][dy] = total;
                q.push({dx,dy,total});
            }

        }

    }

    cout << result[endx][endy];


    return 0;
}