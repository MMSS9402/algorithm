#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int n;
    int price;
};
const int MAXI = 21e8;
int result[5];

bool operator<(Node v, Node t){
    return t.price<v.price;
}

vector<vector<Node>> alist(5);

priority_queue<Node> q;

void init(){
    for(int i=0;i<5;i++){
        result[i] = MAXI;
    }
    alist[0] = {{1,8},{4,4}};
    alist[1] = {{2,1}};
    alist[2] = {{3,2}};
    alist[4] = {{2,3},{3,5}};
    q.push({0,0});
}


int main(){
    init();

    while(!q.empty()){
        Node now = q.top();
        q.pop();
        if(result[now.n] < now.price) continue;
        for(int i=0;i<alist[now.n].size();i++){
            Node next = alist[now.n][i];
            int bigNum = max(now.price,next.price); //내장함수 max...
            int total = now.price + next.price;
            if(result[next.n] > bigNum){
                result[next.n] = bigNum;
                q.push({next.n,bigNum});
            }
        }
    }
    cout << result[3];
    


    return 0;
}