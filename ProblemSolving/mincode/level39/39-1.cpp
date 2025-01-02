#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int main(){
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    sort(arr,arr+4);
    int t = 3;
    int sum = 0;
    for(int i=0;i<4;i++){
        sum +=(arr[i]*t);
        t--;
    }
    cout << sum;


    return 0;
}