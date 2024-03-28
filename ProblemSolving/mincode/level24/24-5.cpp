#include <iostream>
#include <string>
using namespace std;

int main()
{

    string input[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
    }
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < input[i].length(); j++)
        {
            int ret = input[i].find("MCD", j);
            if (ret != -1)
            {
                cnt++;
                j = ret;
            }
        }
    }

    cout << cnt;

    return 0;
}