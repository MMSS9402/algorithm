#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//priority_queue<int> q; //max heap
priority_queue<int, vector<int>, greater<int>> q; //min heap

int main(){
    q.push(23);
    q.push(1);
    q.push(3);

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}