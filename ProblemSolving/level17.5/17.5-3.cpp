#include <iostream>
#include <cstring>
using namespace std;

int isSame(char name1[], char name2[]){
    if(!strcmp(name1,name2)){
        return 1;
    }
    else return 0;
}


int main(){

    char name1[10];
    char name2[10];

    cin >> name1;
    cin >> name2;

    if(isSame(name1,name2)){
        cout << "동명";
    }
    else cout << "남남";

    cout << strcmp(name1,name2);



    return 0;
}