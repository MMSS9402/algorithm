#include <iostream>
using namespace std;

int main(){

    int arr[7] = {3,5,5,6,9,1,2};
    int a,b;
    cin >> a >> b;

    for(int i=0;i<7;i++){
        if(a+i == b-i || a+i>b-i) break;
        int temp = arr[a+i];
        arr[a+i] = arr[b-i];
        arr[b-i] = temp;
    }

    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }


    return 0;
}