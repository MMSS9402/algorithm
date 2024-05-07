#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> map(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            map[i].push_back(x);
        }
    }
    cout << "boss:";
    for (int i = 0; i < n; i++)
    {
        if (map[i][0] == 1)
        {
            cout << i << endl;
            break;
        }
    }

    cout << "under:";
    for (int i = 0; i < n; i++)
    {
        if (map[0][i] == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}