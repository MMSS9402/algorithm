#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[11];

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int sum=0;
    int t = 0;
    int cnt = 0;
    while(1){
        if(sum+arr[t]>100) break;
        sum += arr[t];
        t++;
        cnt++;
    }

    cout << cnt;
    return 0;
}