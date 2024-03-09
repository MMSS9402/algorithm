#include <iostream>
using namespace std;

int win[2][3] = {
    3,5,1,
    4,2,6
    };

int main(){

    int people[4];
    for(int i=0;i<4;i++){
        cin >> people[i];
    }

    int direct[100] = {0};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            direct[win[i][j]]++;
        }
    }

    for(int i=0;i<4;i++){
        if(direct[people[i]] != 0){
            cout << people[i] << "번 합격" << endl;
        }
        else cout << people[i] << "번 불합격" << endl;
    }




    return 0;
}