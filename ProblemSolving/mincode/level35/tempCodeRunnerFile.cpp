#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
struct Node{
    char start;
    char end;
    int price;
};

priority_queue<Node> q;

bool operator<(Node v, Node t){
    if(t.price<v.price) return 1;
    if(t.price>v.price) return 0;
    return t.start<v.start;
}

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Node temp;
            cin >> temp.price;
            if(temp.price == 0) continue;
            temp.start = 'A' + i;
            temp.end = 'A' + i;
            
            q.push(temp);
        }
    }
    int k;
    for(int i=0;i<=10;i++){
        Node temp = q.top();
        q.pop();
        if(i==10) k = 2*temp.price;
        
        temp.price = 2*temp.price;
        q.push(temp);
    }
    cout << k << "만원";

    return 0;
}