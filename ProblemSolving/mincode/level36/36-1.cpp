#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
struct Node{
    int x,y;
    int price;
};
const int MAXI = 21e8;
int result[20000] = {MAXI}; 

bool operator<(Node v, Node t){
    return t.price<v.price;
}

priority_queue<Node> q;

int main(){

    int n,t;
    cin >> n >> t;



    return 0;
}