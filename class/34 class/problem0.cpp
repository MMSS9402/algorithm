#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int target = 31;

int main(){

    int start = 1;
    int end = 50;

    while(1){
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

    return 0;
}