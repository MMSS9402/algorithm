#include <iostream>
#include <string>
using namespace std;

int calculate(string str){
    int sum = 0;
    int a =0;
    int b;
    int c;
    while(1){
        
        b = str.find('+',a);
        c = str.find('-',a);
        if(a==0 && c!=0){
            int temp = stoi(str);
            cout << temp << endl;
            if(b>c) a = c+1;
            if(c>b) a = b+1;

        }
        if(b==-1 && c==-1) break;
        
        if(b>c || (c != -1 && b==-1)){
            string temp = str.substr(a-1,c-a);
            cout << temp << endl;
            a = c+1;
        }
        if(c>b || (b!=-1 && c==-1)){
            cout << "X";
            string temp = str.substr(a-1,b-a);
            cout << temp << endl;
            a = b+1;
        }

    }
    return sum;
}
// 7 10
int main(){

    string str = "100+100-50+30";
    int arr[1000];
    int sum = calculate(str);

    return 0;
}