//silver 4
#include <iostream> 
#include <algorithm>
#include <cmath>
using namespace std;
const long long money = 5*pow(10,6);
int arr[41];
int Calcu(){
    

}

int init(){
    int result = 0;
    for(int i=0;i<41;i++){
        arr[i] = 0;
    }

    for(int i=0;i<41;i++){
        cin >> arr[i];
        if(arr[i] == 0) break;
        result = i;
    }
    return result;
}

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int end = 0;
        long long sum = 0;
        long long now = 0;
        int times = 1;
        end = init();
        sort(arr,arr+end+1,greater<int>());
        for(int k=0;k<41;k++){
            now = 2*((long long)pow(arr[k],times));
            if(now == 0 ) break;
            sum+=now;
            times++;
        }
        if(sum<=money)  cout << sum << '\n';
        else cout << "Too expensive\n";
    }



    return 0;
}