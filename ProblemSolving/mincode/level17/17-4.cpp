#include <iostream>
using namespace std;

char arr[3][5] =
	{
		"ATKB",
		"CZFD",
		"HGEI"
	};

int main(){

    char a;
    int b,c;
    cin >> a >> b >> c;

    int x,y;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a == arr[i][j]){
                x = i;
                y = j;
            }
        }
    }

    cout << arr[x+b][y+c];


    

    return 0;
}