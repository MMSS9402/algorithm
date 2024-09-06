#include <iostream>
#include <vector>
#include <string>
using namespace std;

int arr[9] = {1,2,3,3,5,1,0,1,3};

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }

    int limit = 9 - n;
    int min = sum;
    for(int i=0;i<=limit;i++){

        if(sum<min){
            min = sum;
        }
        if(i == limit) break;
        sum-=arr[i];
        sum+=arr[i+n];
    }
    cout<< min;

    return 0;
}