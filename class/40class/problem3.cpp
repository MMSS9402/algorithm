#include <iostream>
#include <algorithm>
using namespace std;

const int M = -99999;
int vect[50] = {0,0,5,10,-30,5,4,-20,-30,-50,40,1,5,4,20,0};
int dp[50];

int main(){
    dp[0] = M;
    for(int i=2;i<=30;i++){
        int a = dp[i-1];
        int b = dp[i-2];
        int c = M;
        if (i%2 ==0) c = dp[i/2];
        int maxi = max(a,max(b,c));
        dp[i] = maxi + vect[i];

    }

    int maxi = 0;
    for(int i= 15;i<=30;i++){
        maxi = max(maxi,dp[i]);

    }
    cout << maxi;

    return 0;
}