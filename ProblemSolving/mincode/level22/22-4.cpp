#include <iostream>
#include <cstring>
using namespace std;

char arr[5][10];

int main()
{
    int up_floor = 0;
    int down_floor = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (!strcmp(arr[i], "up"))
        {
            up_floor++;
        }

        if (!strcmp(arr[i], "down"))
        {
            down_floor++;
        }
    }

    if (up_floor > down_floor)
    {
        int floor = up_floor - down_floor + 1;
        cout << floor;
    }
    if (down_floor > up_floor)
    {
        int floor = down_floor - up_floor;
        cout << "B" << floor;
    }

    return 0;
}