#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int map[10][10];
int bit[10][10];
int direct[10];
vector<int> v;

int compare(int t,int v){
    if(direct[t]>direct[v]) return 1;
    if(direct[t]<direct[v]) return 0;

    return t<v;
}

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> bit[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bit[i][j] == 1){
                v.push_back(map[i][j]);
                direct[map[i][j]]++;
            }
        }
    }

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    



    return 0;
}