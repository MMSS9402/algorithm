#include <iostream>
#include <string>
using namespace std;
string arr[10];

int isValid(string str){
    //@가 2개 이상이면 불가
    int a,b;
    a = str.find('@');
    if(a==-1) return 0;
    b = str.find('@',a+1);
    if(b!=-1) return 0;

    return 1;
}

int main()
{

    string str = "|";
    string str2;
    cin >> str2;
    str += str2;
    str += "|";
    int a = -1;
    int b = 0;
    int k =0;

    while (1)
    {
        int c = -1;
        int d = 0;
        a = str.find('|',a+1);
        b = str.find('|',a+1);
        if(b == -1) break;
        string temp = str.substr(a+1,b-a-1);

        int flag = isValid(temp);
        if(flag){
            c = temp.find('@');
            d = temp.find('.',c+1);
            string ID = temp.substr(0,c);
            string domain = temp.substr(c+1,d-c-1);

            ID.insert(0,"[#");
            ID.insert(ID.length(),"]");

            cout << ID << " " << domain << endl;
            arr[k] = temp;
            k++;
        }
    }

    return 0;
}