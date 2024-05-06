#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name = "ABTQVX";
vector< vector<int> > alist(6);

void run(int now){
    cout << name[now];
    for(int i=0;i<alist[now].size();i++){
        cout << name[alist[now][i]];
        int next = alist[now][i];
        run(next);
    }
}

int main(){

    alist[0] = {1,2,3};
    alist[1] = {4,5};

    run(0);


    return 0;
}