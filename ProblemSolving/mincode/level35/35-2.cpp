#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(4);

struct Node{
    char a,b;
    int price;
};

priority_queue<Node> q;

bool operator<(Node v, Node t){
    if(t.price>v.price) return 1;
    if(t.price<v.price) return 0;
}


int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            if(x==0) continue;
            char a = 'A' + i;
            char b = 'A' + j;
            q.push({a,b,x});
        }
    }

    for(int i=0;i<3;i++){
        Node temp = q.top();
        q.pop();
        cout << temp.a << '-' << temp.b << " " << temp.price << endl;
    }



    return 0;
}