#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int n, m;                 // n=세로(행, N), m=가로(열, M)

vector<string> v;

struct Node{
    int x, y;             // x=row(행), y=col(열)
    int price;
};

bool operator<(Node v, Node t){
    return t.price < v.price;
}

int result[101][101];
const int MAXI = 21e8;
int direct[4][2] = {
    0,1,
    1,0,
    0,-1,
    -1,0
};

void init(int rows, int cols){              // ★ 인자 사용
    for(int i=0;i<rows;i++){                // ★ rows = n
        for(int j=0;j<cols;j++){            // ★ cols = m
            result[i][j] = MAXI;
        }
    }
}

void dijkstra(int sx, int sy){
    priority_queue<Node> q;

    q.push({sx, sy, 0});
    result[sx][sy] = 0;

    while(!q.empty()){
        Node now = q.top();
        q.pop();

        if(result[now.x][now.y] < now.price) continue;

        for(int t=0; t<4; t++){
            int dx = now.x + direct[t][0];
            int dy = now.y + direct[t][1];
            if(dx<0 || dy<0 || dx>=n || dy>=m) continue;     // ★ 경계: 행은 n, 열은 m
            if(v[dx][dy] == '1' && result[dx][dy] > now.price+1) {
                result[dx][dy] = now.price+1;
                q.push({dx,dy,now.price+1});
            }
            else if(v[dx][dy] == '0' && result[dx][dy] > now.price){
                result[dx][dy] = now.price;
                q.push({dx,dy,now.price});
            }
        }
    }
}

int main(){
    cin >> m >> n;                           // ★ 입력 순서: M(열), N(행)

    v.reserve(n);
    for(int i=0;i<n;i++){                    // ★ N줄(행) 읽기
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    init(n, m);                              // ★ rows=n, cols=m
    dijkstra(0, 0);

    cout << result[n-1][m-1];                // ★ 도착지: (N-1, M-1)
    return 0;
}
