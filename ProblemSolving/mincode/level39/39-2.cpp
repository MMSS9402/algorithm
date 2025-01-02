#include <iostream>
#include <algorithm>
using namespace std;
int arr[4] = {500,100,50,10};

int main(){

    int tgt;
    cin >> tgt;
    int coinCnt = 0;

    for(int i=0;i<4;i++){
        coinCnt += tgt / arr[i];
        tgt = tgt%arr[i];
    }
    cout << coinCnt;



    return 0;  
}