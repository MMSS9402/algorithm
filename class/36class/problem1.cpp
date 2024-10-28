#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
struct Node{
    int n;
    int price;
};
const int MAXI = 21e8;
int result[6] = {MAXI};
bool operator<(Node v, Node t){
    return t.price<v.price;
}
vector<vector<Node>> alist(6);

priority_queue<Node> q;

int main(){
    int a,b;
    cin >> a >> b;

    result[a] = 0;

    alist[0] = {{1,1},{2,1},{3,1}};
    alist[1] = {{2,1}};
    alist[2] = {{3,1}};
    alist[4] = {{3,1},{5,1}};
    alist[0] = {{0,1}};
    

    q.push({a,0});

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.n] < now.price) continue;

        for(int i = 0; i <alist[now.n].size();i++){
            Node next = alist[now.n][i];
            int total = now.price + next.price;

            if(result[next.n]>total){
                result[next.n] = total;
                q.push({next.n,total});
            }
        }
    }

    return 0;
}