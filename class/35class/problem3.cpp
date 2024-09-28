#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

struct Node{
    int a;
    char ch;
};

priority_queue<Node> q;

bool operator<(Node v, Node t){
    if(t.a<v.a) return 1;
    if(t.a>v.a) return 0;

    return t.ch>v.ch;
}

int main(){
    q.push({9,'A'});
    q.push({8,'B'});
    q.push({9,'A'});
    q.push({10,'C'});
    q.push({15,'A'});

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        Node ret = q.top();
        q.pop();
        cout << ret.a << " " << ret.ch << endl;
        ret.a = ret.a*2%17;
        q.push(ret);
    }

    return 0;
}