#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n;
char arr[10][10];
char path[10];

void run(string str, int lev)
{
    if (lev == n)
    {
    }
}

int main()
{
    cin >> n;

    char arr[10][10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.length(); i++)
    {
        run(arr[i], 0);
    }

    return 0;
}