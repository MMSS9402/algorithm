#include <iostream>
using namespace std;

char abc[6];


void run(int lev){
    if(lev == 5){
        cout << endl;
        return;
    }
    cout<<abc[lev];
    run(lev+1);
    cout<<abc[lev];
}

int main(){

    cin >> abc;

    run(0);

    return 0;
}