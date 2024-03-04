#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char ID[5];
    char PASS[5];

    cin >> ID >> PASS;

    if(strcmp(ID,"BBQ")==0 && strcmp(PASS,"1234")==0){
        cout << "LOGIN PASS";
    }
    else{
        cout << "LOGIN FAIL";
    }


    return 0;
}