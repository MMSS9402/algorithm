#include <iostream>
#include <cstring>
using namespace std;

char arr[5][4] ={
    "___",
    "___",
    "ATK",
    "___",
    "___"
};
char order[7][10];
char a[7];

void x(char ch1,char ch2[10]){
    int x = 0;
    int y = 0;
    int dx = 0;
    int dy = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == ch1){
                x = i;
                y = j;
            }
        }
    }
    
    if(!strcmp(ch2,"UP")){
        if(dx>=0&&dy>=0&&dx<5&&dy<3){
            dx = x - 1;
            dy = y;
            arr[dx][dy] = ch1;
            arr[x][y] = '_';
        }
    }
    if(!strcmp(ch2,"DOWN")){
        if(dx>=0&&dy>=0&&dx<5&&dy<3){
            dx = x + 1;
            dy = y;
            arr[dx][dy] = ch1;
            arr[x][y] = '_';
        }
    }if(!strcmp(ch2,"RIGHT")){
        if(dx>=0&&dy>=0&&dx<5&&dy<3){
            dx = x;
            dy = y + 1;
            arr[dx][dy] = ch1;
            arr[x][y] = '_';
        }
    }if(!strcmp(ch2,"LEFT")){
        if(dx>=0&&dy>=0&&dx<5&&dy<3){
            dx = x;
            dy = y - 1;
            arr[dx][dy] = ch1;
            arr[x][y] = '_';
        }
    }

}

int main(){

    
    for(int i=0;i<7;i++){
        cin >> a[i] >> order[i];
    }
    for(int i=0;i<7;i++){
        x(a[i],order[i]);
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }




    return 0;
}