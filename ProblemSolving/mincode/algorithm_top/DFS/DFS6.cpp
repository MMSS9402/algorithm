#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string devil;
string angel;
string tgt;

int cnt;


// 악마의 돌다리
// 천사의 돌다리

void bfs(int now, int idx, string temp, int type){

    if(idx == tgt.size()){
        cnt++;
        return;
    }
    for(int i=now;i<devil.length();i++){


        if(devil[i] == tgt[idx]){
            // if(dused[i] == 1) continue
            if(type != 0 )  bfs(i+1,idx+1,temp+devil[i],0);
        }

        if(angel[i] == tgt[idx]){
            // if(aused[i] == 1) continue;
            if (type != 1)  bfs(i+1,idx+1,temp+angel[i],1);
        }

    }

}

int main(){

    cin >> tgt;
    cin >> devil;
    cin >> angel;

    string temp = "";
    
    bfs(0,0,temp,-1);

    cout << cnt;


    return 0;
}