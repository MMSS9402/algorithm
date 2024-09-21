#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int myBoss[200];
struct Node
{
    char a;
    char b;
    int price;
};
Node list[100];


int find(int n){
    if(myBoss[n] == 0 ) return n;
    return myBoss[n] = find(myBoss[n]);
}
void SetUnion(int a, int b){
    int t1 = find(a);
    int t2 = find(b);
    if(t1==t2) return;
    myBoss[t2] = t1;
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        Node temp;
        cin >> temp.a >> temp.b >> temp.price;
        list[i] = temp;
    }

    //1번 sort
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i].price > list[j].price){
                swap(list[i],list[j]);
            }
        }
    }
    int sum = 0;
    int cnt = 0;
    //2.고르기
    for(int i=0;i<n;i++){
        int a = list[i].a;
        int b = list[i].b;
        int price = list[i].price;

        if(find(a) == find(b)) continue;
        SetUnion(a,b);
        cnt++;
        sum += price;
        if(cnt == 4) break;
    }
    cout << sum << endl;

    return 0;
}

// 8
// A B 3
// A C 5
// B C 2
// B D 1
// A D 15
// C D 2
// E D 3
// E C 6