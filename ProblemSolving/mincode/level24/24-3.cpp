#include <iostream>
#include <string>
using namespace std;
int n;
string arr[100];
string str = "CHRISTMAS";
int cnt;
char path[11];

void run(int lev, string tgt)
{
    if (str.find(tgt) == -1)
        return;

    if (lev == 4)
    {
        if (tgt == str)
        {
            // cout << tgt << endl;
            // cout << "path" << path << endl;
            cnt++;
            return;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        path[lev] = '0' + i;
        run(lev + 1, tgt + arr[i]);
        path[lev] = 0;
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    run(0, "");

    cout << cnt;
    return 0;
}