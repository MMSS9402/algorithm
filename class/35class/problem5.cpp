#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Node{
    int n;
    int price;
};

vector<vector<Node>> alist(6);


int main(){
    alist[0] = {{1,15},{3,30}};
    alist[1] = {{2,5}};
    alist[2] = {{4,2},{3,10}};
    alist[3] = {{5,7}};
    alist[4] = {{5,1}};
    int now = 2;
    int sum = 0;
    for(int i=0;i<alist[now].size();i++){
        Node next = alist[now][i];
        sum +=next.price;
    }
    cout << sum;

    return 0;
}