#include <iostream>
using namespace std;

int arr[8] = {5,9,4,6,1,5,8,9};

int main(){

    int a,b;
    cin >> a >> b;

    int tgtidx = 0;

    for(int i=a;i<8;i++){
        if(arr[i] == b){
            tgtidx = i;
        }
    }

    int offset = tgtidx - a;

    cout << offset;

    return 0;
}