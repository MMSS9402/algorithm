#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
int n,m;
int map[1001][1001];
int used[1001][1001];
char check[1001][1001];
int total = 0;
int before_total = 0;

int direct[4][2] = {
    1,0,
    0,1,
    -1,0,
    0,-1
};

void dfs(int x, int y){
    used[x][y] = 1;
    for(int t=0;t<4;t++){
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if(dx<0||dy<0||dx>=n||dy>=m) continue;
        if(map[dx][dy] == 0){
            check[x][y] = 'c';
        }
        if(used[dx][dy] == 1) continue;
        if(map[dx][dy] == 0) continue;
        dfs(dx,dy);
    }
    

}

void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            used[i][j] = 0;
            check[i][j] = ' ';
        }
    }
}

int main(){
    
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
            if(map[i][j] == 1) total++;
        }
    }
    while(total > 0){
        init();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(used[i][j] == 1) continue;
                if(map[i][j] == 0) continue;
                dfs(i,j);
            }
        }
        cout << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout <<check[i][j];
            }   
            cout << endl;
        }
        before_total = total;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check[i][j] == 'c') {
                    map[i][j] = 0;
                    total--;
            }   
        }
        
        cout << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout <<map[i][j];
            }   
            cout << endl;
        }
    }
    }
    cout << total;





    return 0;
}