#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;


int charge[100001];

int check(int n){
    int flag = 0;
    for(int i=1;i<=n;i++){
        if(charge[i] == 0){
            flag = 1;
        }
    }

    return flag;
}

int main(){

    int t;
    cin >> t;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int num = 0;
    int flag = 1;
    while(flag){
        int car = v[num];
        if(check(car) != 1) break;
        if(charge[car] == 0){
            charge[car] = 1;
            num++;
            continue;
        }
        else if(charge[car] == 1){
            for(int i= car;i>0;i--){
                if(charge[i] == 1) continue;
                if(charge[i] == 0){
                    charge[i] = 1;
                    num++;
                    break;
                }
            }
        }
    }
    // for(int i=0;i<10;i++){
    //     cout << charge[i] << " ";
    // }
    // cout << '\n';
    cout << num;

    return 0;
}