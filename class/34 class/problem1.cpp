#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int arr[8] = {-6,1,2,5,6,7,9,15};
int tar;

int bs(int start,int end){
    while(start<=end){
        int mid =(start+end) / 2;
        if(arr[mid]==tar) return 1;
        if(arr[mid]<tar) start = mid+1;
        else end = mid-1;
    }
    return 0;

}

int main(){
    //실제 문제 풀 때, Binary Serach는 함수로 빼주는 경우가 많음!
    // int n;
    // cin >> n;
    tar = 6;
    int ret = bs(0,7);
    if(ret) cout << "O";
    else cout << "X";
    
    return 0;
}