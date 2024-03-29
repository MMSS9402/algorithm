#include <iostream>
#include <string>
using namespace std;


int main(){
    string str = "ABC:35,BTS:779,TK:56,ATS:155";
    string max_name;
    int max = 0;
    int a = -1;
    while(1){
        int temp = 0;
        
        int start = str.find(':',a+1);
        if(start == -1) break;
        string temp_name = str.substr(a+1,start-a-1);
        cout << "temp_name : " << temp_name << endl;
        a = str.find(',',start);
        if(start != -1 && a == -1){
            temp = stoi(str.substr(start+1,str.length()-start+1));
            a = str.length()-1;
        }
        else{
            temp = stoi(str.substr(start+1,a-start+1));
        }

        if(temp > max){
            max = temp;
            max_name = temp_name;
        }
    } 
    cout << max_name << " : " << max;
}