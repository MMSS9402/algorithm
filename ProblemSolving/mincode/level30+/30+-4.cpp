#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;


int path[10];
int n;
int used[10];
int result = 999;
vector<int> v;
void run(int lev){
    if(lev == 3){
        int sum = 0;
        for(int i=0;i<3;i++){
            if(path[0] == 0) return;
            if(path[0]==0&&path[1]==0) return;
            if(path[0]==0&&path[1]==0&&path[2]==0) return; 
            sum = sum + path[i] * pow(10,2-i);
            
        }
        // cout << sum;
        if(sum<result){
            result = sum;
        }
        // cout << endl;
        return;
    }

    for(int i=0;i<v.size();i++){
        if(used[i] == 1) continue;
        used[i] = 1;
        path[lev] = v[i];
        run(lev+1);
        used[i] = 0;
        path[lev] = 0;
    }
}

int main(){

    cin >>n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for(int i=0;i<v.size();i++){
    //     cout << v[i];
    // }

    run(0);

    cout <<  result;

    return 0;
}