#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

char bs(int start,int end, int tgt){
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid]==tgt) return 'O';
        if(arr[mid]<tgt){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 'X';
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin >> k;

    for(int i=0;i<k;i++){
        int tgt;
        cin >> tgt;
        char ret = bs(0,n-1,tgt);

        cout << ret;
    }

    return 0;
}