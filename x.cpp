#include <iostream>
using namespace std;

char arr[11] = {'#','#','#','#','#','#','#','_','_','_'};

int bs(int start,int end){
    int maxIdx = 0;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == '#'){
            if(maxIdx<mid) maxIdx = mid;
            start = mid+1;
        }
        if(arr[mid] == '_'){
            end = mid-1;
        }

        }
        return maxIdx;
}

int main(){

    int ret = bs(0,10);
    cout << ret+1;


    return 0;
}