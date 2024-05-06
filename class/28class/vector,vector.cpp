#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<char>> m(3);

int main()
{

    m[0] = {'A', 'B', 'T'};
    m[2] = {'R', 'S'};

    for (int i = 0; i < m.size(); i++)
    {
        for (int j = m[i].size() - 1; j >= 0; j--)
        {
            cout << m[i][j];
        }
        cout << endl;
    }

    return 0;
}