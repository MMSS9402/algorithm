#include <iostream>
#include <cstring>
using namespace std;

char arr[2][2][4] = {
    {"ATB",
     "CCB"},
    {"AAA",
     "BBC"}};

int main()
{
    char a;
    cin >> a;
    int flag = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][j][k] == a)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag)
        cout << "발견";
    else
        cout << "미발견";

    return 0;
}