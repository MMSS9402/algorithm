#include <iostream>
#include <vector>
#include <string>
using namespace std;

string swap(string str)
{
    char temp = str[0];
    str[0] = str[str.length() - 1];
    str[str.length() - 1] = temp;

    return str;
}

int main()
{
    vector<string> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        // iostream 안에 swap이라는 c++ 함수가 있음!
        // 바꿀 애들의 변수명만 적어주면 swap됨!
        swap(v[i][0], v[i][v[i].length() - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}