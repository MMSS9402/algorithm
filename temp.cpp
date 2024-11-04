#include <iostream>
#include <queue>
using namespace std;

enum{
    UP = 1,
    DOWN,
    LEFT,
    RIGHT,
};

struct Node{
    int x,y;
    int bang;
    int lev;
};

int map[3][4]={
    0,0,1,0,
    1,0,1,0,
    0,0,0,0,
};

int targetX = 0;
int targetY = 3;
int targetBang = DOWN;

int used[3][4][5];
queue<Node> q;

void init(){
    q.push({0,0,RIGHT});
    used[0][0][RIGHT] = 1;
}
void push(int dx, int dy, int dbang, int lev){
    if(dx<0||dy<0||dx>=3||dy>=4) return;
    if(used[dx][dy][dbang] == 1) return;
    if(map[dx][dy] == 1) return;
    used[dx][dy][dbang] = 1;
    q.push({dx,dy,dbang,lev});
}

int bfs(){
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        if(now.x == targetX && now.y == targetY && now.bang == targetBang) return now.lev;

        if(now.bang == UP){
            push(now.x-1,now.y,UP,now.lev+1);
            push(now.x+1,now.y,UP,now.lev+1);
        }
        if(now.bang == DOWN){
            push(now.x+1,now.y,DOWN,now.lev+1);
            push(now.x-1,now.y,DOWN,now.lev+1);
        }
        if(now.bang == RIGHT){
            push(now.x,now.y+1,RIGHT,now.lev+1);
            push(now.x,now.y-1,RIGHT,now.lev+1);
        }
        if(now.bang == LEFT){
            push(now.x,now.y-1,LEFT,now.lev+1);
            push(now.x,now.y+1,LEFT,now.lev+1);
        }

        if(now.bang == UP || now.bang == DOWN){
            push(now.x,now.y,RIGHT,now.lev+1);
            push(now.x,now.y,LEFT,now.lev+1);
        }
        if(now.bang == RIGHT || now.bang == LEFT){
            push(now.x,now.y,UP,now.lev+1);
            push(now.x,now.y,DOWN,now.lev+1);
        }
    }

    return -1;
}

int main(){

    init();

    cout << bfs();

    return 0;
}