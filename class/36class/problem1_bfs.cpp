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

// priority_queue<Node> q;
queue<Node> q;

int main(){
    int a,b;
    cin >> a >> b;

    result[a] = 0;

    alist[0] = {{1,1},{2,1},{3,1}};
    alist[1] = {{2,1}};
    alist[2] = {{3,1}};
    alist[4] = {{3,1},{5,1}};
    alist[0] = {{0,1}};
    q.push({0,0});
   int used[6] = {0};
   used[a] = 1;

   while(1){
    Node now = q.front();
    q.pop();

    for(int i =0;i<alist[now.n].size();i++){
        Node next = alist[now.n][i];
        if(used[next.n] == 1) continue;
        used[next.n]= 1;
        q.push(next);
    }
   }

    return 0;
}