#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int target = 31;

int main(){

    int start = 1;
    int end = 50;

    while(start <= end){
        int mid = (start+end) / 2;
        if(mid == target){
            cout << "짝짝 한잔";
            break;
        }
        if(mid>target){
            end = mid-1;
        }
        else{
            start  = mid +1;
        }
        
    }

    cout << mid;

    return 0;
}