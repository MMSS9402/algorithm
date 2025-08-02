#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<long long> v;

long long getCount(int tgt){
    long long sum = 0;
    for(int i=0;i<v.size();i++){
        sum+=tgt/v[i];
    }
    return sum;
}


int main(){

    int N;
    long long M;
    cin >> N >> M;

    for(int i=0;i<N;i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    long long start = 0;
    long long end = v[v.size()-1] * M;
    long long result = 0;
    while(start<=end){
        long long mid = (start+end)/2;
        // cout << mid << " ";
        if(getCount(mid)>=M){
            end = mid-1;
            result = mid;
        }
        if(getCount(mid)<M){
            start = mid+1;
        }
    }
    cout << result;


    return 0;
}