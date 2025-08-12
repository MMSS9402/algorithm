#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
    int n;
    long long w;
};
vector<vector<Node>> v(100001);

int S, E;

long long result = -99;



bool bfs(int start,int end, long long w){
    queue<int> q;
    q.push(start);
    // vector<char> used(100001,0);
    int used[100001] = {0};
    used[start] = 1;
    while(!q.empty()){
        int now = q.front();
        q.pop();

        if(now == end){
            return true;
        }

        for(int i=0;i<v[now].size();i++){
            Node next = v[now][i];
            if(used[next.n] == 1) continue;
            if(next.w<w) continue;
            used[next.n] = 1;
            q.push(next.n);
        }
    }
    return false;
}

void bs(long long start,long long end){
    while(start<=end){
        long long mid = (start+end)/2;
        if(bfs(S,E,mid)){
            if(result<mid){
                result = mid;
                start = mid +1;
            }
        }
        else{
            end = mid-1;
        }
    }
}



int main(){

    int n;
    long long m;
    cin >> n >> m;
    long long max_weight = 0;
    for(int i=0;i<m;i++){
        int a,b;
        long long c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
        if(c>max_weight){
            max_weight = c;
        }
    }
    
    cin >> S >> E;

    bs(1,max_weight);

    cout << result;

    







    return 0;
}