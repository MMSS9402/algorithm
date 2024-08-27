#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> v(3);

int main(){

    v[0] = {12};
    v[1] = {9,3};
    v[2] = {6};
    int k;
    cin >> k;
    k = k/90;

    for(int i=0;i<k;i++){
        int temp1 = v[0][0];
        int temp2 = v[2][0];
        v[0][0] = v[1][0];
        v[2][0] = v[1][1];
        v[1][1] = temp1;
        v[1][0] = temp2;
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
    }



    return 0;
}