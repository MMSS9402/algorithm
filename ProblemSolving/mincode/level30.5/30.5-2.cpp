#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n;
char path[5];
char name[3] = {'o','x'};
void run(int lev){

    if(lev == n){
        cout << path << endl;
        return;
    }
    for(int i=0;i<2;i++){
        path[lev] = name[i];
        run(lev+1);
        path[lev] = 0;
    }

}

int main(){


    
    cin >> n;

    run(0);


    return 0;
}