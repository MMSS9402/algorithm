#include <iostream>
using namespace std;

int main(){

    char arr[10];
    cin >> arr;

    int maxidx = 0;
    int minidx = 0;

    int max = 0;
    int min = 300;

    for(int i=0;i<10;i++){
        if(arr[i] =='\0') break;

        if(arr[i]>max){
            max = arr[i];
            maxidx = i;
        }

        if(arr[i]<min){
            min = arr[i];
            minidx = i;
        }
    }

    cout << maxidx << endl;
    cout << minidx << endl;

    // cout << int('B') << int('A');
    // 사전순으로 앞에 있는 녀석이 숫자가 더 작음


    return 0;
}