#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> v;

int lowerBs(int tgt){
    if(tgt<v[0]) return 0;
    int start = 0;
    int end = v.size()-1;
    int idx = 0;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]>=tgt){
            idx = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return idx;
}
int uppperBs(int tgt){
    if(tgt>v[v.size()-1]) return v.size()-1;
    int start = 0;
    int end = v.size()-1;
    int idx = v.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]>tgt){
            idx = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return idx-1;
}


int main(){

    int n,q;
    cin >> n >> q;  

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<q;i++){
        int s, e;
        cin >> s >> e;
        // cout << s << " " << e << uppperBs(e) << " " << lowerBs(s);

        cout << uppperBs(e)-lowerBs(s)+1 << endl;
    }



    return 0;  
}

// -1 1 2 2 2 2 3 3 4 4 