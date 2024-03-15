#include <iostream>
using namespace std;
int n;
void abc(int lev){
    if(lev == n+6) {
        cout << lev << " ";
        return;
    }

    abc(lev+2);
    cout << lev << " ";
}


int main(){
    cin >> n;

    abc(n);

    return 0;
}