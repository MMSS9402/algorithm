#include <iostream>
#include <cstring>
using namespace std;

char history[10];
char password[10];
int cnt;

int exitFlag;

void run(int level)
{
    if (exitFlag == 1)
        return;

    if (level == 4)
    {
        cnt++;
        if (strcmp(password, history) == 0)
        {
            exitFlag = 1;
            return;
        }
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        history[level] = 'A' + i;
        run(level + 1);
        history[level] = 0;
    }
}

void init()
{
    cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        history[i] = 0;
    }
    exitFlag = 0;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        init();

        cin >> password;
        run(0);
        cout << cnt << "\n";
    }

    return 0;
}