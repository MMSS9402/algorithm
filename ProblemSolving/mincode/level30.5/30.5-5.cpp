#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

char arr[10];
string str;
int n;

void run(int lev)
{

    if (lev == n)
    {
        cout << arr << endl;
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        arr[lev] = str[i];
        run(lev + 1);
        arr[lev] = 0;
    }
}

int main()
{

    cin >> str;

    cin >> n;

    run(0);

    return 0;
}