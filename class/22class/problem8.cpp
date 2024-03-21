#include <iostream>
using namespace std;

int arr[5] = {4, 5, 1, 9, -6};
int flag = 0;
char path[3];

void run(int lev, int sum)
{
    if (lev == 3)
    {
        if (sum == 12)
        {
            cout << path << " ";
            flag = 1;
        }
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        // path[lev] = '0' + arr[i];
        run(lev + 1, sum + arr[i]);
        if (flag)
            return;
        // path[lev] = 0;
    }
}

int main()
{

    run(0, 0);

    if (flag)
    {
        cout << "O" << endl;
    }
    else
    {
        cout << "X" << endl;
    }

    return 0;
}