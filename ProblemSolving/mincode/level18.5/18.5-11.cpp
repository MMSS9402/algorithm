#include <iostream>
using namespace std;

char arr[10];
char arr2[] = "GHOST";

int isSame(int idx){
    for(int i=0;i<5;i++){
        if(arr[i+idx] != arr2[i]) return 0;
    }
    return 1;
}

int main(){

    cin >> arr;
    int len = 0;
    for(int i=0;i<10;i++){
        if(arr[i] == '\0') len = i;
    }
    int flag = 0;
    for(int i=0;i<len-5;i++){
        if(isSame(i)){
            flag = 1;
        }
    }
    if(flag) cout << "존재";
    else cout << "존재하지 않음";


    return 0;
}