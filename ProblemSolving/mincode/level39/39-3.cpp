#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node{
    int start;
    int end;
};

int used[10];

vector<Node> v;

bool compare(Node t,Node v){
    if(t.end<v.end) return 1;
    if(t.end>v.end) return 0;

    return t.start<v.start;
}


int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),compare);
    int now = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(v[i].start<now) continue;

        cnt++;
        now = v[i].end;
    }

    cout << cnt;




    return 0;
}