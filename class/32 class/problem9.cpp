#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board,vector<int> moves){
    int result = 0;
    vector <int> v;
    for(int i=0;i<moves.size();i++){
        for(int j=0;j<5;j++){
            if(board[j][moves[i]] == 0) continue;
            v.push_back(board[j][moves[i]]);
            if(v.size()>=2 && v[v.size()-1] == v[v.size()-2]){
                v.pop_back();
                v.pop_back();
                result++;
                break;
            }
        }
    }

    return result;
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