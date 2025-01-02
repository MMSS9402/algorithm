#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int start;
    int end;
};

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
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> arr[i].start >> arr[i].end;
    }
    sort(arr, arr+n,compare);
    // for(int i=0;i<n;i++){
    //     cout << arr[i].end;
    // }

    int time = 0;
    int cnt = 0;
    int now = 0;
    while(1){
        if(time>n){
            break;
        }
        if(arr[time].start<now){
            time++;
            continue;
        }
        now = arr[time].end;
        cnt++;
        time++;
        
    }   
    cout << cnt;




    return 0;
}