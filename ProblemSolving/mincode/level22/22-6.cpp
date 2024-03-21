#include <iostream>
#include <cstring>
using namespace std;

char arr[4][10];

int main()
{

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int maxlen = 0;
    int maxlen_idx = 0;
    int minlen = 100;
    int minlen_idx = 0;
    for (int i = 0; i < 4; i++)
    {
        if (strlen(arr[i]) > maxlen)
        {
            maxlen = strlen(arr[i]);
            maxlen_idx = i;
        }
        if (strlen(arr[i]) < minlen)
        {
            minlen = strlen(arr[i]);
            minlen_idx = i;
        }
    }
    cout << "긴문장:" << maxlen_idx << endl;
    cout << "짧은문장:" << minlen_idx;

    return 0;
}