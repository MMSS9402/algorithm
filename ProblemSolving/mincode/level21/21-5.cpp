#include <iostream>
#include <cstring>
using namespace std;

char arr[3][10];

int main()
{

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    char temp[10];

    int maxlen = 0;
    int maxlen_idx = 0;

    for (int i = 0; i < 3; i++)
    {
        if (strlen(arr[i]) > maxlen)
        {
            maxlen = strlen(arr[i]);
            maxlen_idx = i;
        }
    }
    strcpy(temp, arr[0]);

    strcpy(arr[0], arr[maxlen_idx]);
    strcpy(arr[maxlen_idx], temp);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}