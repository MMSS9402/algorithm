#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bs(int s, int e, int tgt){
    int max = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid == tgt){
            return mid;
        }
        if(mid*mid>tgt){
            e = mid-1;
        }
        else{
            s = mid+1;
            if(mid>max) max = mid;
        }
    }
    return max;
}


int main(){

    int n;

    cin >> n;

    int ret = bs(0,n,n);

    cout << ret;


}