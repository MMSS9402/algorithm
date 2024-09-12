#include <iostream>
#include <algorithm>
using namespace std;
int arr[5] = {4,3,1,6,2};
//큰수가 우선순위가 더 높으니 내림차순!!
int compare(int t, int v){
    //짝수 우선
    //작은수 우선
    if(t%2==0 && v%2 == 1) return 1;
    if(t%2==1 && v%2 == 0) return 0;

    // if(t<v) return 1;
    return t<v;
}

int main(){

    // sort(&arr[0],&arr[5]);
    // 암기 1 오름차순
    sort(arr,arr+5); //less<int>()

    //2. 내림차순
    sort(arr,arr+5,greater<int>());

    //3. 다중조건
    sort(arr,arr+5,compare);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}