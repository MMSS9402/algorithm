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
int map[500][500];
priority_queue<Node> q;

bool operator<(Node v, Node t){
    if(t.price<v.price) return 1;
    if(t.price>v.price) return 0;
    if(t.start<v.start) return 1;
    if(t.start>v.start) return 0;
    return t.end<v.end;
}

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            Node temp;
            if(map[i][j]==0 || map[i][j] == -1) continue;
            temp.price = map[i][j];
            if(temp.price == 0) continue;
            temp.start = 'A' + i;
            temp.end = 'A' + j;
            
            q.push(temp);
        }
    }
    int k;
    for(int i=0;i<10;i++){
        Node temp = q.top();
        q.pop();
        // cout << temp.start << temp.end << " " << temp.price << endl;
        if(i==9) k = 2*temp.price;
        
        temp.price = 2*temp.price;
        q.push(temp);
    }
    cout << k << "만원";

    return 0;
}