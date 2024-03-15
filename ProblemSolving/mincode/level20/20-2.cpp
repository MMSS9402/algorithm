#include <iostream>
using namespace std;


int n;

void run(int lev){
    if(lev == 0){
        cout << lev << " ";
        return;
    }
    cout << lev << " ";
    run(lev-1);
    cout << lev << " ";
}


int main(){
    cin >> n;
    run(n);

    return 0 ;
}