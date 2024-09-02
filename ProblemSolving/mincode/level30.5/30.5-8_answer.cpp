#include <iostream>
using namespace std;

char hero[4] = {'B', 'I', 'A', 'H'};
int used[4];

int findNext(int i)
{
    for (int x = 1; x <= 4; x++)
    {
        int select = (i + x) % 4;
        if (used[select] == 0)
            return select;
    }
    return 0;
}

int main()
{
    int countDown;
    int target;
    int now;

    cin >> countDown;

    target = -1;
    for (int i = 0; i < 4; i++)
    {

        // 타겟 선정
        for (int x = 0; x < countDown; x++)
        {
            target = findNext(target);
        }

        // 선택완료
        cout << hero[target] << " ";
        used[target] = 1;
    }
    return 0;
}