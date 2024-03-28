#include <iostream>
#include <string>
using namespace std;

int direct[4][2] = {
    -1, 0,
    0, -1,
    1, 0,
    0, 1};

int main()
{

    string str[3][3] = {
        {{"BHC"}, {"BBQ"}, {"KFC"}},
        {{"MC"}, {"7AVE"}, {"PAPA"}},
        {{"DHC"}, {"OBS"}, {"MOMS"}}};

    int x, y;
    cin >> x >> y;

    string tgt;

    for (int t = 0; t < 4; t++)
    {
        int dx = x + direct[t][0];
        int dy = y + direct[t][1];
        if (dx >= 0 && dx < 3 && dy >= 0 && dy < 3)
        {
            tgt += str[dx][dy];
        }
    }
    cout << tgt;
}