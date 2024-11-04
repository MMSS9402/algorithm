#include <iostream>
#include <queue>
using namespace std;
int s,d;
int used[100001];
struct Node{
    int c;
    int lev;
};
queue<Node> q;

int bfs(){
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        if(now.c == d) return now.lev;
        if(used[now.c] == 1) continue;
        used[now.c] = 1;
        // q.push({now.c*2,now.lev+1});
        // q.push({now.c/2,now.lev+1});
        // q.push({now.c+1,now.lev+1});
        // q.push({now.c-1,now.lev+1});
        if(now.c*2<=100000&&now.c*2>=0){
            q.push({now.c*2,now.lev+1});
        }
        if(now.c/2<=100000&&now.c/2>=0){
            q.push({now.c/2,now.lev+1});
        }
        if(now.c+1<=100000&&now.c+1>=0){
            q.push({now.c+1,now.lev+1});
        }
        if(now.c-1<=100000&&now.c-1>=0){
            q.push({now.c-1,now.lev+1});
        }
        
    }
    return -1;
}


int main(){

    
    cin >> s >> d;

    q.push({s,0});
    cout << bfs();

    return 0;
}