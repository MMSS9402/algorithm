#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

//우선순위
// 1.문자 작은것
// 2.수 큰 것

struct Node{
    int a;
    char ch;
};

priority_queue<Node> q;

int operator<(Node v, Node t){
    if(t.ch<v.ch) return 1;
    if(t.ch>v.ch) return 0;

    return t.a>v.a;
}

int main(){
    q.push({7,'A'});
    q.push({9,'C'});
    q.push({7,'C'});
    q.push({6,'D'});
    q.push({5,'A'});

    while(!q.empty()){
        cout << q.top().a << " " << q.top().ch << endl;
        q.pop();
    }


    return 0;
}