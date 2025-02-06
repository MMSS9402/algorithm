#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> v(102);
int used[102];
int n,p;
int maxi = 0;
// vector<int> result;
void run(int now){
    // result.push_back(now);
    if(now>maxi) maxi = now;
    cout << now << " ";
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next] == 1) continue;
        used[next] = 1;
        run(next);
    }
}
void run2(int now){
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next] == 1) continue;
        used[next] = 1;
        run2(next);
    }
    cout << now << " ";

}
void init(){
    for(int i=1;i<=n;i++){
        used[i] = 0;
    }
}

int main(){

    cin >> n >> p;
    int s;
    cin >> s;
    for(int i=0;i<p;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end(),greater<int>());
    }

    used[s] = 1;
    run(s);

    init();

    cout << '\n';
    
    used[s] = 1;
    run2(s);
    

    return 0;
}