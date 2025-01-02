// 4
// 0 10
// 5 25
// 15 35
// 20 30
//1. sort
//낮은 온도 기준으로 내림차순
//2. 순서대로 냉장고 온도 결정!
//3. 냉장고에 집어넣을 수 있는 것 다 넣기
//4. 남은 것끼리 다시 시작
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int used[10];
struct Node{
    int start;
    int end;
};

bool compare(Node t, Node v){
    return t.start>v.start;
}
int n;
int freCnt = 0;
vector<Node> cells;
int getFre(){
    int fre = -1;
    for(int i=0;i<n;i++){
            if(used[i] == 1) continue;
            fre = cells[i].start;
            used[i] = 1;
            freCnt++;
            break;
        }
    return fre;
}

int main(){


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        cells.push_back({a,b});
    }

    sort(cells.begin(),cells.end(),compare);

    int fre = 0;
    while(1){
        //1.used가 0인 것으로 냉장고 온도 결정
        int fre = getFre();
        if (fre == -1) break;
        //2.이 냉장고에 담을 수 있는 세포 모두 담기
        for(int i=0;i<n;i++){
            if(used[i]==1) continue;
            if(cells[i].start <= fre && fre<= cells[i].end){
                used[i] = 1;
            }
        }

    }
    cout << freCnt;


    return 0;
}