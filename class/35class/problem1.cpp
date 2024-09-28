#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//우선순위 조건
//1. 짝수 우선
//2. 작은수 우선

//연산자 오버로딩(암기)
//c++만의 특이한 문법
struct Node{
    int n;

};
// <가 less
bool operator<(Node v,Node t){
    if(t.n%2==0 && v.n%2==1) return 1;
    if(t.n%2==1 && v.n%2==0) return 0;
    return t.n<v.n;

}

priority_queue<Node> q;

int main(){

    q.push({3});
    q.push({6});
    q.push({1});
    q.push({5});
    q.push({2});
    q.push({4});
    q.push({4});

    while(!q.empty()){
        cout << q.top().n << " ";
        q.pop();
    }
    
    return 0;
}