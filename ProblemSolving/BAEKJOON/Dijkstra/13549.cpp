#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


struct Node{
    int n;
    int time;
};
bool operator<(Node v, Node t){
    return t.time<v.time;
}
int result[100001];

int mini = 21e8;
// int used[100001];

void init(){
    for(int i=0;i<=100000;i++){
        result[i] = mini;
    }
}

void bfs(int start, int end){
    

    priority_queue<Node> q;
    q.push({start,0});
    result[start] = 0;
    // used[start] = 1;

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n]<now.time) continue;

        int next1 = now.n+1;
        if(next1<=100000){
            // used[next1] = 1;
            if(result[next1]>now.time+1){
                result[next1] = now.time+1;
                q.push({next1,now.time+1});
            }
            
        }

        int next2 = now.n-1;
        if(next2>=0&&next2<=100000){
            if(result[next2]>now.time+1){
                result[next2] = now.time+1;
                q.push({next2,now.time+1});
            }
            
        }

        int next3 = 2*now.n;
        if(next3<=100000){
            if(result[next3]>now.time){
                result[next3] = now.time;
                q.push({next3,now.time});
            }
        }
    }


    
}

int main(){

    int n; // 수빈이의 위치
    int k; // 동생의 위치
    cin >> n >> k;
    // 걷기 or 순간이동
    // 걷기 -> x+1 or x-1;(1초걸림)
    // 순간이동 -> 2x(0초걸림)
    init();
    bfs(n,k);


    cout << result[k];

    return 0;
}