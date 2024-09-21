#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int myBoss[200];

int find(int now){
    if(myBoss[now] == 0){
        return now;
    }
    int ret = myBoss[now];
    myBoss[now] = ret;
    return ret;;
}

void SetBoss(int t1, int t2){

    int a = find(t1);
    int b = find(t2);
    if(a == b) return;
    myBoss[b] = a;
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        char a,b;
        cin >> a >> b;

        if(find(a) == find(b)){
            cout << "CYCLE 발견" << endl;
            return 0;
        }
        SetBoss(a,b);

    }

    cout << n - makeGroupCnt << endl;
    


    return 0;
}

// 7
// 1 1
// 1 2
// 2 3
// 2 4
// 3 2
// 4 2
// 2 2