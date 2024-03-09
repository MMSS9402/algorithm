#include <iostream>
using namespace std;

int arr[11] = {3,4,1,1,2,6,8,7,8,9,10};

int getSum(int idx){
    int sum = 0;
    if(idx>6) return 0;

    for(int i=0;i<5;i++){
        sum += arr[idx+i];
    }
    return sum;
}

int main(){
    int idx;

    cin >> idx;

    cout << getSum(idx);

    return 0;

}