#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long A,B;

struct Node {
    long long a;
    int p;
};

bool operator<(Node v, Node t){
    return t.a<v.a;
}

int bfs(int start,int sum){
    priority_queue<Node> q;
    q.push({start,sum});

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(now.a == B){
            return now.p;
        }
        if(now.a > B){
            break;
        }

        long long next1 = 2* now.a;
        long long next2 = now.a*10 + 1;
        q.push({next1,now.p+1});
        q.push({next2,now.p+1});
    }

    return -1;
}


int main(){

    cin >> A >> B;

    int result = bfs(A,0);
    if(result != -1)
        cout << result + 1 << endl;
    else cout << result;

    return 0;
}
