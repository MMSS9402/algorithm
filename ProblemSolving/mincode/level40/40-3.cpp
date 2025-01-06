#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int arr[100] = {0};

int dp[100];

void init(){
    for(int i=0;i<12;i++){
        cin >> arr[i];
    }
}


int main(){
    init();

    for(int i=2;i<100;i++){
        int sum1 = dp[i-2];
        int sum2 = -999;
        if(i>=3){
            sum2 = dp[i-3];
        }
        int sum3 = -999;
        if(i%2 == 0){
            sum3 = dp[i/2];
        }

        int maxi = max(sum1,max(sum2,sum3));
        dp[i] = maxi + arr[i];

    }

    int maxi = -999;
    for(int i=12;i<100;i++){
        maxi = max(maxi,dp[i]);
    }
    cout << maxi;

    


    return 0;
}