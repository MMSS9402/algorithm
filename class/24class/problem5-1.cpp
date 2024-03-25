#include <iostream>
#include <string>
using namespace std;

int main()
{

    string arr[5] = {
        {"SABC"},
        {"BT"},
        {"ABC"},
        {"BTS"},
        {"KFC"},
    };
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                continue;
            string str1 = arr[i] + arr[j];
            // str1 += arr[j];
            if (str1 == "BTSABC")
            {
                cnt++;
            }
        }
    }
    cout << "cnt = " << cnt << endl;
    return 0;
}