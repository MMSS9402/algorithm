#include <iostream>
using namespace std;

char path[3];
char name[2] = {'O','X'};

int countOh(char arr[3]){
    int cnt = 0;
    for(int i=0;i<3;i++){
        
        if(path[i] == 'O'){
            cnt++;
        }
    }
    return cnt;
}

void run(int lev){
    if(lev==3){
        int a = countOh(path);
        int b = 3-a;
        if(a!=0) cout << a << "승";
        if(b!=0) cout << b << "패";
        cout << "(";
        for(int i=0;i<3;i++){
            if(path[i] == 'O') cout << "승";
            else cout << "패";
        }
        cout << ")" << endl;
        return;
    }

    for(int i=0;i<2;i++){
        path[lev] = name[i];
        run(lev+1);
        path[lev] = 0; 
    }
}

int main(){

    run(0);
    return 0;
}