#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int MyBoss[10];

int find(int now){
    if(MyBoss[now] == 0){
        return now;
    }
    int ret = MyBoss[now];
    MyBoss[now] = find(ret);
    return ret;

}

void setBoss(int t1, int t2){
    int a = find(t1);
    int b = find(t2);
    if(a == b) return;
    MyBoss[b] = a;


}

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        setBoss(a,b);
    }

    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        if(find(x) == find(y)){
            cout << "같은그룹" << endl;
        }
        else cout << "다른그룹" << endl;
    }

    return 0;
}

