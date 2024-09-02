#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
string str[3];
int path[10];

void run(int lev){
    if(lev == 3){
        for(int i=0;i<3;i++){
            cout << str[path[i]] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=0;i<3;i++){
        path[lev] = i;
        run(lev+1);
        path[lev] = 0;

    }
}

int main(){

    for(int i=0;i<3;i++){
        cin >> str[i];
    }

    run(0);


    return 0;
}