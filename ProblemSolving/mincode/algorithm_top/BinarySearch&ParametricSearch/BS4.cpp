#include <iostream>
using namespace std;
int n;

long long bs(int start,int end){
    long long max = -1;
    while(start<=end){
        long long mid = (start+end)/2;
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid>n){
            end = mid-1;
        }
        if(mid*mid<n){
            start = mid+1;
            if(mid>max){
                max = mid;
            }
        }
    }
    return max;
}

int main(){
    cin >> n;
    
    long long ret = bs(1,n);
    cout << ret;

    return 0;
}