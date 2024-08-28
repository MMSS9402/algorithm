#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> s = {1, 5, 4, 2, -5, -7};

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 6; i++)
    {
        int maxIdx = -1;
        int max = -1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] > max)
            {
                max = s[j];
                maxIdx = j;
            }
        }
        s.erase(s.begin() + maxIdx);

        if (i == n)
        {
            cout << max;
            break;
        }
    }
    return 0;
}
