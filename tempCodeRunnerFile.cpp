#include <iostream>
using namespace std;

int path[3];

void run(int lev,int sum){
    // if(lev>0 && path[1] == 2) return; 
    if(lev == 3){
        for(int i=0;i<3;i++){
            cout << path[i];
        }
        cout << " = " << sum;
        cout << endl;
        return;
    }

    for(int i=1;i<=6;i++){
        if(lev==1 && i ==2) continue;;
        path[lev] = i;
        run(lev+1,sum+path[lev]);
        path[lev]= 0;

    }
}


int main(){

    run(0,0);

    return 0;
}