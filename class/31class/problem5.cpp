#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

string arr = "BAQRRGGVAQZAACT";

char isAlpha(int size)
{
}

int main()
{
    int dat[100] = {0};
    int max = 0;
    char maxch;
    for (int i = 0; i < 5; i++)
    {
        dat[arr[i]]++;
        if (dat[arr[i]] > max)
        {
            maxch = arr[i];
        }
    }

    for (int i = 0; i < arr.size() - 5; i++)
    {

        dat[arr[i]]--;
        dat[arr[i + 5]]++;
        if (dat[arr[i + 5]] > max)
        {
            max = dat[arr[i + 5]];
            maxch = arr[i + 5];
        }
    }
    cout << maxch << ":" << max << "개";

    return 0;
}