#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int arr[10] = {4,4,5,7,8,10,20,22,23,24};
int tgt;
char bs(int s, int e){
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == tgt) return 'O';

        if(arr[mid]<tgt) s = mid+1;
        else e = mid-1;
    }
    return 'X';
}

int main(){
    cin >> tgt;

    cout << bs(0,9);


    return 0;
}