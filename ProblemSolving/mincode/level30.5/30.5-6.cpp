#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int n;
char path[5];
char temp[5];
int arr[3];
int cnt = 0;

void run(int lev, int idx)
{
    if (strcmp(temp, path) == 0)
    {
        arr[idx] = cnt + 1;
        return;
    }
    if (lev == 4)
    {
        cnt++;
        return;
    }
    for (int i = 'A'; i <= 'Z'; i++)
    {
        path[lev] = char(i);
        run(lev + 1, idx);
        path[lev] = 0;
    }
}

int main()
{
    cin >> n;
    // cout << int('A') << " " << int('Z');
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        cin >> temp;
        run(0, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}