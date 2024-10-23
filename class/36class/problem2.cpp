#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
const int MAXI = 21e8;
struct Node {
    int x,y;
    int price;
};
bool operator<(Node v, Node t){
    return t.price<v.price;
}

int map[4][4] = {
    2,2,1,1,
    3,1,30,1,
    0,20,50,2,
    2,5,3,0
};

int direct[4][2] = {
    1,0,
    -1,0,
    0,1,
    0,-1
};

int result[4][4] = {MAXI};

priority_queue<Node> q;


int main(){
    int x1,y1;
    int x2,y2;

    x1 = 1;
    y1 = 1;
    x2 = 3;
    y2 = 1;
    result[x1][y1] = map[x1][y1];
    q.push({x1,y1,map[x1][y1]});
    
    while(1){
        Node now = q.top();
        q.pop();
        if(now.x == x2 && now.y == y2) break;
        if(result[now.x][now.y] < now.price) continue;

        for(int i=0;i<4;i++){
            int dx = x1 + direct[i][0];
            int dy = y1 + direct[i][1];
            if(dx>=0 && dx<4 && dy>=0 && dy<4){
                int total = now.price + map[dx][dy];
                if(result[dx][dy] > total){
                    result[dx][dy] = total;
                    q.push({dx,dy,total});
                }
            }

        }


    }


    cout << result[x2][y2] << endl;




    return 0;
}