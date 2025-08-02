#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int arr[100001];
vector<int> v;

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long max = -99;
    long long price = 0;
    for(int i=0;i<v.size();i++){
        long long c = v.size()-i;
        long long sum = c*v[i];
        if(max>sum) continue;
        if(sum>max){
            max = sum;
            price = v[i];
        }
        else if(sum == max){
            if(price>v[i]){
                price =v[i];
            }
        }
    }
    
    cout << max << " " << price;





    return 0;
}