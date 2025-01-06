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
                if(i==0||j==0) count++;
                else{
                    for(int a=i+j;a>0)
                }
            }
        }
    }
    cout << count;

    return 0;
}

