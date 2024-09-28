#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> q;
//기본 우선 순위는 큰 것 우선으로 되어있음!
int main(){

    q.push(2);
    q.push(3);
    q.push(1);
    q.push(7);
    q.push(8);
    q.push(5);

    while(!q.empty()){ //힙소트
        cout << q.top(); //O(logN)
        q.pop();
    }


    //힙소트는 O(NlogN)
    return 0;
}