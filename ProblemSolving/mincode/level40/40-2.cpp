#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count = 0;

    for(int i=n;i>=0;i--){
        for(int j=0;j<=n/2;j++){
            if(i+2*j == n){
                cout << i << " " << j << endl;
                count++;
            }
        }
    }
    cout << count;

    return 0;
}

