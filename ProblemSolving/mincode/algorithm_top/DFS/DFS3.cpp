#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node{
    int left;
    int right;
};

vector<Node> v(1002);
int used[1002];
int n;

void init(){
    for(int i=1;i<=n;i++){
        used[i] = 0;
    }
}

void forward_run(int now){
    if (now == -1) return; // 노드가 없으면 리턴
    cout << now << " ";    // 현재 노드 출력
    forward_run(v[now].left);  // 왼쪽 자식
    forward_run(v[now].right); // 오른쪽 자식
}

// 중위 순회 (왼쪽 → 현재 → 오른쪽)
void mid_run(int now){
    if (now == -1) return; // 노드가 없으면 리턴
    mid_run(v[now].left);  // 왼쪽 자식
    cout << now << " ";    // 현재 노드 출력
    mid_run(v[now].right); // 오른쪽 자식
}

// 후위 순회 (왼쪽 → 오른쪽 → 현재)
void back_run(int now){
    if (now == -1) return; // 노드가 없으면 리턴
    back_run(v[now].left);  // 왼쪽 자식
    back_run(v[now].right); // 오른쪽 자식
    cout << now << " ";    // 현재 노드 출력
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        int p,x,y;
        cin >> p >> x >> y;
        v[p] = {x,y};
    }
    used[1] = 1;
    mid_run(1);
    cout << '\n';
    init();
    used[1] = 1;
    forward_run(1);
    cout << '\n';
    init();
    used[1] = 1;
    back_run(1);


    return 0;
}