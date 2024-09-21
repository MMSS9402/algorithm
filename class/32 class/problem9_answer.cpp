#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
vector<int> result;
int dieCnt;

void push(int t){
    if(result.size()==0){
        result.push_back(t);
        return;
    }

    int old = result[result.size()-1];
    if(old == t){
        result.pop_back();
        dieCnt+=2;
        return;
    }

    result.push_back(t);
    return;

}
int solution(vector<vector<int>> board,vector<int> moves){
    int n = board.size();
    vector<vector<int>> map(n);
    //1. map 만들기
    for(int x=0;x<n;x++){
        for(int y=n-1;y>=0;y--){
            int tar = board[y][x];
            if(tar == 0) continue;
            map[x].push_back(tar);
        }
    }

    //2. result 넣기
    for(int i=0;i<moves.size();i++){
        int tar = moves[i] - 1;
        if(map[tar].size() == 0 ) continue;
        //빼기
        int ret = map[tar][map[tar].size()-1];
        map[tar].pop_back();

        push(ret);
    }
    

    return dieCnt;
}

int main(){

    vector<vector<int>> board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
    vector<int> moves = {1,5,3,5,1,2,1,4};

    int ret = solution(board,moves);
    if(ret == 4) cout << "합격" << endl;
    else cout << "오답" << endl;

    cout << ret ;

    return 0;
}