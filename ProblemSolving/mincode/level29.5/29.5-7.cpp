#include <iostream>
#include <string>
#include <vector>
using namespace std;

int map[5];

void print(int map[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (map[i] == 0)
        {
            cout << '_';
        }
        else
        {
            cout << map[i];
        }
    }
    cout << endl;
}

int main()
{

    int idx, life;
    cin >> idx >> life;

    map[idx] = life;

    for (int i = 1; i <= 4; i++)
    {
        if (idx + i - 1 > 3)
        {
            map[idx + i - 1] = 0;
            print(map);
            break;
        }
        print(map);
        map[idx + i - 1] = 0;
        map[idx + i] = life - i;
    }
}