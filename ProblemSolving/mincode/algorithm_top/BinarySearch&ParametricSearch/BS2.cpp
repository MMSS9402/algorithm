#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int bs_min(int start,int end, int tgt){
    int min = 999;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]<=tgt){
            start = mid-1;

        }

    }
}
int main(){

    int N,Q;
    cin >> N >> Q;

    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<Q;i++){
        int x,y;
        cin >> x >> y;
        int start = bs_min(0,v.size()-1,x);
        int end = bs_max(0,v.size()-1,y;)

    }

    

    return 0;
}