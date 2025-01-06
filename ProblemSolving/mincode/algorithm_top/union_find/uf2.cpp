#include <iostream>
using namespace std;
int n;
int map[1001][1001];

int myBoss[1001];

int find(int n){
    if(myBoss[n] == 0){
        return n;
    }

    int ret = find(myBoss[n]);
    myBoss[n] = ret;
    return ret;
}

void setUnion(int a,int b){
    int t1 = find(a);
    int t2 = find(b);
    if(t1 == t2 ) return;
    myBoss[t2] = t1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(map[i][j]==0) continue;
            int t1 = i + 'A';
            int t2 = j + 'A';
            if(find(t1) == find(t2)){
                cout << "WARNING";
                return 0;
            }
            setUnion(t1,t2);
        }
    }
    cout << "STABLE";

    return 0;
}