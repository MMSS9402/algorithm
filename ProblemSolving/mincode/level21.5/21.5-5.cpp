#include <iostream>
using namespace std;
int arr[8];
int main(){
    for(int i=0;i<8;i++){
        cin >> arr[i];
    }
    int bucket[10] = {0};

    for(int i=0;i<8;i++){
        bucket[arr[i]]++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<bucket[i];j++){
            cout << i << " ";
        }
    }
}