#include <iostream>

using namespace std;

int arr[5] = {4, 2, 5, 5, 15};

int isExist(int a)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == a)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int n;

    cin >> n;

    int ret = isExist(n);

    if (ret)
    {
        cout << "O";
    }
    else
    {
        cout << "x";
    }

    return 0;
}