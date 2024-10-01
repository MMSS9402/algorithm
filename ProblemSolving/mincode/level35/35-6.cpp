#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> v;

int compare(int t, int v){
    // if(t<v) return 1;
    // if(t>v) return 0;
    return t<v;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int tgt = 500;
    int start = 0;
    int end = 0;
    v.push_back(tgt);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(a);
        v.push_back(b);
        end = v.size();
        sort(v.begin(),v.end(),compare);
        int mid = (start+end)/2;
        cout << v[mid] << endl;
    }

    return 0;
}