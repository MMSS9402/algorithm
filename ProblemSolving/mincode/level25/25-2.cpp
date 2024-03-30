#include <iostream>
#include <string>
using namespace std;

int n;

int main()
{
    cin >> n;
    string str[n];
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    while (1)
    {
        int start = -1;
        for (int i = 0; i < n; i++)
        {
            int start = str[i].find('[', start + 1);
            if (start == -1)
                break;
            int end = str[i].find(']', start);

            string temp = str[i].substr(start, end - start + 1);

            if (temp.length() == 5)
                arr[i] = temp;
        }
    }
    cout << arr[0];

    return 0;
}