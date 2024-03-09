#include <iostream>
using namespace std;

int levelTable[4][2] = {
    10, 20,
    30, 60,
    100, 150,
    200, 300};

int main()
{

    int fff[6];
    int cnt[4] = {0};

    for (int i = 0; i < 6; i++)
    {
        cin >> fff[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (levelTable[i][0] <= fff[j] && fff[j] <= levelTable[i][1])
            {
                cnt[i]++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "lev" << i << ":" << cnt[i] << endl;
    }

    return 0;
}