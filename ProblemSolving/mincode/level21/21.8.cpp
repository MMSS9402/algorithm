#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char arr[10][10];

    int n;

    cin >> n;

    int x = 5;
    int y = 5;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (!strcmp(arr[i], "up"))
        {
            x -= 1;
        }
        else if (!strcmp(arr[i], "down"))
        {
            x += 1;
        }
        else if (!strcmp(arr[i], "left"))
        {
            y -= 1;
        }
        else if (!strcmp(arr[i], "right"))
        {
            y += 1;
        }
        else if (!strcmp(arr[i], "click"))
        {
            cout << x << "," << y << endl;
        }
    }

    return 0;
}