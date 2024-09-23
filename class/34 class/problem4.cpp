#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int tar = 20;
int bs(int s, int e){
    int max = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid == tar) return mid;
        if(mid*mid>tar) e = mid-1;
        else{
            s = mid+1;
            if(mid>max) max = mid
        }
    }
    return max;
}

int main(){
    int ret = bs(1,tar);
    cout << ret;

    return 0;
}