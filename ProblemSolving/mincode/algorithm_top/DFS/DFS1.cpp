#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> v(102);
int used[102];
int n,p;
int cnt;
void run(int now){
    cout << now << " ";
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next] == 1) continue;
        used[next] = 1;
        cnt++;
        run(next);
    }   
}

int main(){

    cin >> n;
    cin >> p;
    for(int i=0;i<p;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    used[1] = 1;
    run(1);
    
    cout << cnt;


    return 0;
}