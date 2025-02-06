#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long M;

vector<int> v;

int slide(int size){
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    for(int i=0;i<=v.size()-size;i++){
        if(sum == M){
            cnt++;
            // cout << size <<" " << cnt << endl;
        }
        if(i == v.size()-size) break;
        sum -= v[i];
        sum +=v[i+size];
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >>n >> M;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    
    int cnt = 0;
    for(int i=1;i<=v.size();i++){
        cnt += slide(i);
    }

    cout << cnt;



    return 0;
}