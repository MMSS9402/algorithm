#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> v;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int len = v.size();
    for(int i=0;i<v.size()-2;i++){
        if(v[i] == v[i+1] && v[i+1] == v[i+2]){
            v.erase(v.begin() + i, v.begin() + i + 3);
            i-=1;
            if(i<0) i = -1;
        }
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }



    return 0;
}