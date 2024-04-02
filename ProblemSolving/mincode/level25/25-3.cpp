#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int start = 0;
    int i = 1;
    while (1)
    {
        if (start == 0)
        {
            int end = str.find('_', start + 1);
            string temp = str.substr(0, end);
            cout << i << '#' << temp << endl;
            i++;
        }
        start = str.find('_', start + 1);
        if (start == -1)
            break;
        int end = str.find('_', start + 1);
        cout << end << endl;
        string temp = str.substr(start + 1, end - start - 1);
        if (temp == "")
            continue;
        cout << i << '#' << temp << endl;
        i++;
    }

    return 0;
}