#include <iostream>
#include <algorithm>
using namespace std;

int arr[6] = {1,5,4,2,6,9};

void run(int start, int end){
    int mid = (start+end)/2;
    if(start == end) return;

    run(start,mid);
    run(mid+1,end);
    int a = start;
    int b = mid +1;
    int aEnd = mid + 1;
    int bEnd = end + 1;

    int result[10] = {0};
    int t = 0;
    while(1){
        if(a==aEnd && b==bEnd) break;
        if(a == aEnd) result[t++] = arr[b++];
        else if(b == bEnd) result[t++] = arr[a++];
        else if(arr[a]<arr[b]) result[t++] = arr[a++];
        else if (arr[a]> arr[b]) result[t++] = arr[b++];
    }

    for(int i = 0;i<t;i++){
        arr[start+i] = result[i];
    }
    //.....
    
}

int main(){

    run(0,5);

    for(int i=0;i<6;i++){   
        cout << arr[i] << " ";

    }

    return 0;
}