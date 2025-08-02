#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct Node{
    int n;
    int price;
};
int result = 1e9;

int a,b;
int used[100001];

void bfs(int start){
    queue<Node> q;
    q.push({start,0});

    while(!q.empty()){
        Node now = q.front();
        q.pop();
        // cout << now.n << " " << now.price <<  endl;
        if(now.n == b){
            if(result>now.price){
                result = now.price;
                return;
            }
        }
        int next1 = now.n+1;
        int next2 = now.n-1;
        int next3 = 2*now.n;
        if(next1<=100000 && next1>=0 && used[next1] == 0 ){
            used[next1] = 1;
            q.push({next1,now.price+1});
        }
        if(next2<=100000 && next2>=0 && used[next2] == 0 ){
            used[next2] = 1;
            q.push({next2,now.price+1});
        }
        if(next3<=100000 && next3>=0 && used[next3] == 0 ){
            used[next3] = 1;
            q.push({next3,now.price+1});
        }

    }

}

int main(){
    cin >> a >> b;

    bfs(a);

    cout << result;


    return 0;
}