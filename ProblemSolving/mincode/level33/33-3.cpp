#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[10][10];
struct Node
{
    char a,b;
};
int myBoss[200];
Node list[10];

int find(int n){
    if(myBoss[n] == 0){
        return n;
    }
    int ret = find(myBoss[n]);
    myBoss[n] = ret;
    return ret;
}
void setUnion(int a, int b){
    int t1 = find(a);
    int t2 = find(b);
    if(t1==t2) return;
    myBoss[t2] = t1;
}

int main(){
    int n;
    cin >> n;
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j] == 1){
                map[j][i] = 0;
                char t1 = 'A' + i;
                char t2 = 'A' + j;
                if(find(t1) == find(t2)){
                    flag = 1;
                }
                setUnion(t1,t2);
            }
        }
    }
    if(flag){
        cout << "cycle 발견";
    }
    else{
        cout << "미발견";
    }


    return 0;
}