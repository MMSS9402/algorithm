#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<string> v(5);
int map[5][5] ;
int main(){

    for(int i=0;i<5;i++){
        cin >> v[i];
    }
    
    int a,b;
    cin >> a >> b;

    sort(v[a].begin(),v[a].end());
    sort(v[b].begin(),v[b].end());

    for(int i=0;i<5;i++){
        cout << v[i][0] << " ";
    }

    return 0;
}