#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    string str[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> str[i];
    }

    int maxIdx = -1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (str[j].length() > str[j + 1].length())
            {
                maxIdx = j;
            }
            if (str[j].length() < str[j + 1].length())
            {
                maxIdx = j + 1;
            }
            if (str[j].length() == str[j + 1].length())
            {
                for (int k = 0; k < str[j].length(); k++)
                {
                    if (str[j][k] > str[j + 1][k])
                    {
                        string temp = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = temp;
                        maxIdx = j + 1;

                        break;
                    }
                    if (str[j][k] < str[j + 1][k])
                    {
                        maxIdx = j + 1;
                        break;
                    }
                }
            }
        }
    }

    cout << str[maxIdx];

    return 0;
}