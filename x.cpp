#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int n;
    int b1,b2,b3,b4,b5;
};
queue<Node> q;


void bfs(int tgt){
    int b1 = 0;
    b1 += tgt/60;
    tgt = tgt%60;
    // int b2 = 0;
    // b2 += tgt/10;
    // tgt = tgt&10;

    q.push({0,b1,0,0,0,0});
    
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        if(now.n==tgt){
            cout << now.b1 <<" " <<  now.b2 << " " << now.b3<< " " << now.b4 << " " << now.b5;
            break;
        }

        if(now.n<0){
            continue;
        }
        q.push({now.n+60,now.b1+1,now.b2,now.b3,now.b4,now.b5});
        q.push({now.n+10,now.b1,now.b2+1,now.b3,now.b4,now.b5});
        q.push({now.n-10,now.b1,now.b2,now.b3+1,now.b4,now.b5});
        q.push({now.n+1,now.b1,now.b2,now.b3,now.b4+1,now.b5});
        q.push({now.n-1,now.b1,now.b2,now.b3,now.b4,now.b5+1});

    }


}



int main(){
    int tgt;


    cin >> tgt;

    bfs(tgt);

    

    return 0;
}