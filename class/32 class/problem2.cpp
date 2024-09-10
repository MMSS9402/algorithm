#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin); // SDL 꺼야 실행
    // freopen_s(new FILE*,"input.txt", "r", stdin);// SDL 안 꺼도 실행
    int n;
    cin >> n;

    double result[4] = {0};

    for (int i = 0; i < n; i++)
    {
        int witch = i;
        if (i >= 3)
            witch = 3;

        cin >> result[witch];

        for (int x = witch; x > 0; x--)
        {
            if (result[x - 1] < result[x])
            {
                swap(result[x - 1], result[x]);
            }
            else
                break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%lf", result[i]);
        cout << result[i] << endl;
    }
}