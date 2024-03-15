#include <iostream>
using namespace std;

char arr[4][5];

void bomb(int x,int y){
    int direct[8][2]={
        1,0,
        -1,0,
        0,1,
        0,-1,
        1,1,
        1,-1,
        -1,1,
        -1,-1
    };

    for(int t=0;t<8;t++){
        int dx = x+direct[t][0];
        int dy = y+direct[t][1];
        if(dx>=0&&dx<4&&dy>=0&&dy<5){
            arr[dx][dy] = '#';
        }
    }
}

int main(){
    for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = '_';
		}
	}
    int x,y;
    int a,b;

    cin >> x >> y;
    cin >> a >> b;

    bomb(x,y);
    bomb(a,b);

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}