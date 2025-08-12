#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> v;

int result = 0;

void bs(long long start, long long end, long long tgt){
    while(start<=end){
        int mid = (start+end)/2;

        int cnt = 1;
        long long previous_house = v[0];
        for(int i=0;i<v.size();i++){
            if(v[i] - previous_house >= mid){
                cnt++;
                previous_house = v[i];
            }
        }

        if(cnt>=tgt){
            result = max(result,mid);
            start = mid+1;

        }
        if(cnt<tgt){
            end = mid-1;
        }

    }
}

int main(){
    long long n,c;
    cin >> n >> c;

    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    bs(1,v[v.size()-1]-v[0],c);
    cout << result;

    return 0;
}