#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;
    if (str.find("X") == -1)
    {
        cout << 0 << endl;
        return 0;
    }

    int a = str.find(".", 0);
    int b = str.find(".", a + 1);

    string year = str.substr(0, a);
    string month = str.substr(a + 1, b - a - 1);
    string date = str.substr(b + 1, str.length() - b);

    int month_cnt = 1;
    int date_cnt = 1;

    // cout << year << endl;
    // cout << month << endl;
    // cout << date << endl;

    // cout << month.length();
    if (month.length() == 1 && month[0] == 'X')
    {
        month_cnt = 9;
    }
    // if(month.length() == 2 && month[0] == 'X' && month[1] != 'X' ){
    //     month_cnt = 2;
    // }
    if (month.length() == 2 && month[0] != 'X' && month[1] == 'X')
    {
        month_cnt = 3;
    }

    if (month.length() == 2 && month[0] == 'X' && month[1] == 'X')
    {
        month_cnt = 3;
    }

    if (date.length() == 1 && date[0] == 'X')
    {
        date_cnt = 9;
    }
    if (date.length() == 2 && date[0] == 'X' && (date[1] == '0' || date[1] == '1'))
    {
        date_cnt = 3;
    }
    if (date.length() == 2 && date[0] == 'X' && date[1] != '0' && date[1] != '1' && date[1] != 'X')
    {
        date_cnt = 2;
    }

    if (date.length() == 2 && date[0] != 'X' && date[0] != '3' && date[1] == 'X')
    {
        // cout << "여기";
        date_cnt = 10;
    }
    // if (date.length() == 2 && date[0] != '3' && date[1] == 'X')
    // {
    //     date_cnt = 2;
    // }

    if (date.length() == 2 && date[0] == 'X' && date[1] == 'X')
    {
        date_cnt = 22;
    }

    // cout << month_cnt << " " << date_cnt << endl;
    cout << month_cnt * date_cnt;

    return 0;
}