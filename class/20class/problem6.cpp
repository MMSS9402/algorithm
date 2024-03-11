#include <iostream>
#include <cstring>
using namespace std;

char arr[100];
int len;

void run(int lev)
{
    if (lev == len)
    {
        cout << endl;
        return;
    }
    cout << arr[lev];
    run(lev + 1);
    cout << arr[lev];
}

int main()
{

    cin >> arr;
    len = strlen(arr);

    run(0);
}