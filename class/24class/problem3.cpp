#include <iostream>
#include <string>
using namespace std;

int main()
{

    string bts;
    cin >> bts;
    int cnt = 0;
    int flag = 0;
    for (int i = 0; i < bts.length(); i++)
    {

        if (bts[i] == 'A')
        {
            cnt++;
        }
        if (bts[i] == 'B')
        {
            flag = 1;
        }
    }

    cout << "A의 개수는 : " << cnt << endl;
    if (flag)
    {
        cout << "B 존재" << endl;
    }
    else
    {
        cout << "B 없음" << endl;
    }
}