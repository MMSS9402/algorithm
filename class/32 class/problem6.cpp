#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Node{
    int n;
    char ch;
};

Node buf[] = {{3,'A'},{4,'C'},{9,'D'},{9,'H'},{9,'A'}};

int compare(Node t, Node s){
    if(t.n>s.n) return 1;
    if(t.n<s.n) return 1;

    return t.ch<s.ch;
}

int main(){
    

    sort(buf,buf+5,compare);

    for(int i=0;i<5;i++){
        cout << buf[i].n << " " << buf[i].ch << endl;
    }

    return 0;
}