#include <iostream>
#include <string>
using namespace std;

int n;
string arr[10];

int isValid(string str)
{
    // 괄호 + 5개의 숫자로 구성되야 한다는 조건 넣기
    int ret = str.find('[');
    if (ret == -1)
        return 0;
    ret = str.find(']');
    if (ret == -1)
        return 0;

    int len = str.length();
    if (len != 7)
        return 0;

    return 1;
}

int main()
{
    cin >> n;
    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int start = -1;
        while (1)
        {
            start = str[i].find('[', start + 1);
            if (start == -1)
                break;
            int end = str[i].find(']', start + 1);
            string temp = str[i].substr(start, end - start + 1);
            // cout << i << ":" << temp << endl;
            if (isValid(temp))
            {
                arr[k] = temp;
                k++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == "")
            break;
        cout << arr[i] << endl;
    }

    return 0;
}