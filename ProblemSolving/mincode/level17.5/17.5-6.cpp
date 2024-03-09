#include <iostream>
using namespace std;
int password[4] = {3,7,4,9};

int isSame(int arr[]){
    for(int i=0;i<4;i++){
        if(arr[i]!=password[i]) return 0;
    }
    return 1;
}

int main(){

    int input[4];

    for(int i=0;i<4;i++){
        cin >> input[i];
    }

    if(isSame(input)) cout << "pass";
    else cout << "fail";

    return 0;
}