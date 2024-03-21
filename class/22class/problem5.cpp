#include <iostream>
using namespace std;

char arr[10];
int n;
char path[10];

void run(int lev)
{
    if (lev == n)
    {
        cout << path << endl;
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        path[lev] = arr[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> n;
    cin >> arr;

    run(0);
}