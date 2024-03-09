#include <iostream>
using namespace std;

int up[5]; //= {1,0,1,0,1};

int down[5]; //= {0,1,1,0,0};

int main(){

    for(int i=0;i<5;i++){
        cin >> up[i];
    }

    for(int i=0;i<5;i++){
        cin >> down[i];
    }
    int cnt = 0;
    for(int i=0;i<5;i++){
        if(up[i]==1 && down[i] == 1){
            cnt++;
        }
    }
    cout << cnt << "개";

    return 0;
}