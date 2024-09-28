#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    string str;
    int n;
};

priority_queue<Node> q;

bool operator<(Node v, Node t){
    if(t.n<v.n) return 1;
    if(t.n>v.n) return 0;
    return t.str<v.str;
}

int main(){
    q.push({"Tom",2});
    q.push({"Jason",1});
    q.push({"KFC",3});
    q.push({"BBQ",1});
    q.push({"moms",2});
    q.push({"mc",4});

    while(1){
        if(q.size()==1){
            cout << q.top().n << " " << q.top().str;
            break;
        }
        Node ret = q.top();
        q.pop();
        Node temp = q.top();
        q.pop();
        ret.n = ret.n+temp.n;
        if(ret.str<temp.str){
            ret.str = ret.str;
        }
        else{
            ret.str = temp.str;
        }
        q.push(ret);
    }


    return 0;
}