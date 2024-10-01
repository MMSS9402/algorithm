#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int arr[3] = {2,3,5};
priority_queue<int,vector<int>,greater<int>> q;
priority_queue<int,vector<int>,greater<int>> q2;
int used[30000];

vector<int> result;

void run(int now, int tgt, int k){
    if(tgt>= k){
        return;
    }

    for(int i=0;i<3;i++){
        int next = arr[i]*tgt;
        // cout << arr[i] << "next : " << next << endl;
        if(used[next] != 1){
            used[next] = 1;
            run(now+1,next,k);
            q.push(next);
        }
        
    }

}

int main(){

    int tgt = 1;
    q.push(tgt);
    int n;
    cin >> n;
    run(1,1,1500);

    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        q2.push(k);
    }

    while(!q.empty()){
        int k = q.top();
        q.pop();
        result.push_back(k);
    }

    while(!q2.empty()){
        int k = q2.top();
        q2.pop();
        cout << result[k-1] << " ";
    }

    return 0;
}

