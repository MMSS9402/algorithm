#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int n;
    cin >> n;

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int ret = arr[i].find(str);
        if (ret == -1)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << "O" << endl;
        }
    }

    return 0;
}