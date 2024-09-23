#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Node{
    char ch;
    int a;
};
Node list[10];
int myBoss[10];
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
    myBoss[t2] = 'A' + t1;
    list[t1].a += list[t2].a;
    list[t2].a = 0;
}

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        Node temp;
        char a = 'A' + i;
        temp.ch = a;
        cin >> temp.a;
        list[i] = temp;
    }

    int k;
    cin >> k;

    for(int i=0;i<k;i++){
        string temp;
        char a,b;
        cin >> temp >> a >> b;
        int t1 = a - 'A';
        int t2 = b - 'A';
        if(temp == "alliance"){
            setUnion(t1,t2);
    //         for(int i=0;i<n;i++){
    //             cout << char('A'+ i ) << " : " << (myBoss[i]) << "명수:" << list[i].a << endl;
    // }
        }
        else if (temp == "war"){
            if(find(t1) == find(t2)) continue;
            if(list[find(t1)].a>list[find(t2)].a){
                for(int i=0;i<n;i++){
                    if(find(t2) == find(i)){
                        myBoss[i] = -1;
                    }
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(myBoss[i] == -1) cnt++;
    }
    cout << n-cnt;



    return 0;
}