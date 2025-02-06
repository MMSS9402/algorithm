#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

priority_queue<int,vector<int>,greater<int>> mq;
priority_queue<int> q;

int main(){
 
    int mid = 500;

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(x>mid){
            mq.push(x);
        }
        else{
            q.push(x);
            // q_cnt++;
        }
        if(y>mid){
            mq.push(y);
            // mq_cnt++;

        }
        else{
            q.push(y);
            // q_cnt++;
        }

        if(mq.size()>q.size()){
            q.push(mid);
            mid = mq.top();
            mq.pop();
        }
        if(mq.size()<q.size()){
            mq.push(mid);
            mid = q.top();
            q.pop();
        }

        cout << mid << '\n';

        
    }


    return 0;
}