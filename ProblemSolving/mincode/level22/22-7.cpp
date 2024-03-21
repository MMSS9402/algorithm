#include <iostream>
#include <cstring>
using namespace std;
char path[10];
char arr[10];
int cnt = 0;
char name[5] = {"ABCD"};

void run(int lev)
{
    if (lev == 3)
    {
        cnt++;
        if (!strcmp(arr, path))
        {
            cout << cnt << "번째";
        }
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> arr;
    run(0);

    return 0;
}