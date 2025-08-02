#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int arr[100001];

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sidx = -1;
    int eidx = -1;
    int max = -999;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<=arr[i]) continue;
        int temp = arr[i+1] - arr[i];
        if(temp>max) {
            max = temp;
            sidx = i;
            eidx = i+1; 
            }
    }
    if(sidx == -1){
        cout << 0;
        return 0;
    }
    cout << sidx+1 << " " << eidx+1;




    return 0;
}