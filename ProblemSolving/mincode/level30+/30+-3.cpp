#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[6][6];
char path[10];

void run(int now){
    
    for(int i=0;i<6;i++){
        if(map[now][i] == 0) continue;
        path[now+1] = 'A'+i;
        run(i);
        path[now+1] = 0;
    }
    int flag = 0;
    for(int i=0;i<6;i++){
        if(map[now][i] == 1){
            flag = 1;
        }
    }
    if(flag == 0)
        cout << path << endl;
}


int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin >> map[i][j];
        }
    }
    path[0] = 'A';
    run(0);

    return 0;
}
