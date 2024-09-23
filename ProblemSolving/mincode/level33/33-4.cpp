#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Node
{
    char a;
    char ch;
    char grade;
};
Node list[10];
int myBoss[10];
int used[10];

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
    if(t1 == t2) return;
    myBoss[t2] = t1;
}

int main(){

    int n,k;
    cin >> n >> k;

    for(int i=1;i<=n;i++){
        Node temp;
        cin >> temp.a >> temp.ch;
        if((temp.ch>='0' && temp.ch<='9') && (temp.ch<'A' && temp.ch>'Z')){
            int a = temp.ch - '0';
            list[a].a = temp.ch;
            list[a].ch = temp.a;
            list[a].grade = temp.a;
            used[a] = 1;
            // cout << a << " " << list[a].grade << endl;
        }
        else if((temp.ch>='A' && temp.ch<='Z') && (temp.a>='0' && temp.a<='9')){
            int a = temp.a - '0';
            list[a].a = temp.a;
            list[a].ch = temp.ch;
            list[a].grade = temp.ch;
            used[a] = 1;
            // cout << a << " " << list[a].grade << endl;
        }
        else if((temp.ch>='0' && temp.ch<='9') && (temp.a>='0' && temp.a<='9')){
            int a = temp.a - '0';
            int b = temp.ch - '0';
            setUnion(a,b);
        }
    }

    for(int i=1;i<=k;i++){
        for(int j = 1;j<=k;j++){
            if(i==j) continue;
            if(used[j] == 0) continue;
            if(find(i) == find(j)){
                list[i].grade = list[j].grade;
            }
        }
        
    }

    for(int i=1;i<=k;i++){
        cout << list[i].grade;
    }

    return 0;
}