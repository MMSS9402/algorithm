#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<long long> v;
long long mini = 10e8;

void bs(long long start, long long end, long long tgt){
    while(start<=end){
        long long mid = (start+end)/2;
        long long temp = 0;
        for(int i=0;i<v.size();i++){
            temp += mid/v[i];
            if(temp>=tgt) break;
        }
        if(temp>=tgt){
            end = mid-1;
            mini = mid;
        }
        if(temp<tgt){
            start = mid+1;
        }
    }
}

int main(){
    // 상근이와 친구들 M 명, 공항 심사대 N개
    int n;
    long long m;
    cin >> n >> m;



    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long end = v[v.size()-1]*m;
    bs(0,end,m);

    cout << mini;

    return 0;   
}