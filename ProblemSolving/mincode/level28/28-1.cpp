#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name[5] = {
    {"Chole"},
    {"Bob"},
    {"Amy"},
    {"Edger"},
    {"Diane"},
};
int map[5][5] = {
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
};

int main()
{
    int max = -1;
    int max_idx = 0;

    for (int i = 0; i < 5; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
        {
            if (map[j][i] == 1)
            {
                cnt++;
            }
        }
        if (cnt > max)
        {
            max = cnt;
            max_idx = i;
        }
    }
    cout << name[max_idx];

    return 0;
}