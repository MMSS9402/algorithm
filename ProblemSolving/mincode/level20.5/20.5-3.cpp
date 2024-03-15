#include <iostream>
#include <cstring>
using namespace std;

char arr[10];
int len;

int isSame(int x){
    if(len%2 !=0) return 0;

    for(int i=0;i<x;i++){

        //cout << arr[i] << arr[i+x] << endl;
        if(arr[i]!=arr[i+x]) return 0;

    }
    return 1;
}

int main(){
    cin >> arr;

    len = strlen(arr);
    int half = len/2;
    if(isSame(half)){
        cout << "동일한문장";
    }
    else cout << "다른문장"; 

    return 0;
}