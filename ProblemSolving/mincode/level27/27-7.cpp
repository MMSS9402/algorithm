#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<int> Number;
    vector<char> Command;

    for (int i = 0; i < 6; i++)
    {
        int temp;
        cin >> temp;
        Number.push_back(temp);
    }
    for (int i = 0; i < 6; i++)
    {
        char temp;
        cin >> temp;
        Command.push_back(temp);
    }

    for (int i = 0; i < 6; i++)
    {
        int min = 100;
        int max_Idx = 0;
        int min_Idx = 0;
        int max = -999;
        if (Command[i] == 'x')
        {
            for (int j = 0; j < Number.size(); j++)
            {
                if (Number[j] > max)
                {
                    max = Number[j];
                    max_Idx = j;
                }
            }
            int temp = Number[Number.size() - 1];
            Number[Number.size() - 1] = Number[max_Idx];
            Number[max_Idx] = temp;
            Number.pop_back();
            cout << max;
        }
        if (Command[i] == 'm')
        {
            for (int j = 0; j < Number.size(); j++)
            {
                if (Number[j] < min)
                {
                    min = Number[j];
                    min_Idx = j;
                }
            }
            int temp = Number[Number.size() - 1];
            Number[Number.size() - 1] = Number[min_Idx];
            Number[min_Idx] = temp;
            Number.pop_back();
            cout << min;
        }
    }

    return 0;
}