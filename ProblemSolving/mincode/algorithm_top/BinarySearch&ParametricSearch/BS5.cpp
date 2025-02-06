#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
long long K;

vector<long long> v;

int check(int x){
    int cnt = 0;
    int t = 0;
    for(int i=0;i<v.size();i++){
        cnt += v[i]/x;
    }
    return cnt;  

}

int bs(int start,int end){
    int max = -1;
    while(start<=end){
        int mid = (start+end)/2;
        int cnt = check(mid);
        if(cnt>= K){
            start = mid+1;
            if(max<mid){
                max = mid;
            }
        }
        else{
            end = mid-1;
        }

    }
    return max;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> K;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());

    int ret = bs(0,v[v.size()-1]);

    cout << ret;



    return 0;
}