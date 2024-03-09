#include <iostream>
using namespace std;

int main(){

    int arr[6];

    for(int i=0;i<6;i++){
        cin >> arr[i];
    }
    int direct[200] = {0};

    for(int i=0;i<6;i++){
        direct[arr[i]]++;
    }
    int flag = 0;
    for(int i=0;i<200;i++){
        if(direct[i] == 2){
            flag = 1;
            break;
        }
    }
    if(flag) cout << "도플갱어 발견";
    else cout << "미발견";

    return 0;
}