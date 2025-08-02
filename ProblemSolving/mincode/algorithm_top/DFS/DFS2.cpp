#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> v(101);
int used[101];
int used2[101];

vector<int> result;
vector<int> result2;

void run(int now){

    sort(v[now].rbegin(),v[now].rend());
    
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used[next] == 1) continue;
        used[next] = 1;
        
        run(next);
        
    }
    result.push_back(now);
}

void run2(int now){
    sort(v[now].rbegin(),v[now].rend());
    result2.push_back(now);
    for(int i=0;i<v[now].size();i++){
        int next = v[now][i];
        if(used2[next] == 1) continue;
        used2[next] = 1;
        
        run2(next);
        
    }
    
}

int main(){

    int n,k;
    cin >> n >> k;

    int s;
    cin >> s;

    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    used[s] = 1;
    // result.push_back(s);
    run(s); 


    


    used2[s] = 1;
    run2(s);

    for(int i=0;i<result2.size();i++){
        cout << result2[i] << " ";
    }
    cout << endl;

    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }

    return 0;
}