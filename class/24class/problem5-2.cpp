#include <iostream>
#include <string>
using namespace std;
string arr[5] = {
    {"SABC"},
    {"BT"},
    {"ABC"},
    {"BTS"},
    {"KFC"},
};
int cnt;
void run(int level, string sum)
{
    if (level == 2)
    {
        if (sum == "BTSABC")
            cnt++;
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        run(level + 1, sum + arr[i]);
    }
}

int main()
{
    run(0, "");
    cout << "cnt = " << cnt << endl;
    return 0;
}