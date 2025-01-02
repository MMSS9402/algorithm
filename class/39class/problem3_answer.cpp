#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


struct Node{
    int start;
    int end;
};

vector<Node> times;

Node arr[10];

bool compare(Node t, Node v){
    if(t.end<v.end) return 1;
    if(t.end>v.end) return 0;
    return t.start<v.start;
}

int main(){


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){

        int a, b;
        cin >> a >>  b;
        times.push_back({a,b});
    }
    sort(times.begin(),times.end(),compare);
    int cnt =0;
    int last = 0;
    for(int i=0;i<n;i++){
        if(times[i].start<last) continue;

        cnt++;
        last = times[i].end;
    }

    cout << cnt ;

    return 0;
}
// 7
// 2 4
// 5 6
// 2 5
// 3 5
// 6 7
// 1 3
// 4 7