#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Node
{
    int n;
    string temp;
};
Node list[7];
int main()
{
    vector<int> v;

    list[0].n = 3;
    list[0].temp = "right";
    list[1].n = 2;
    list[1].temp = "right";
    list[2].n = 1;
    list[2].temp = "left";
    list[3].n = 3;
    list[3].temp = "right";
    list[4].n = 2;
    list[4].temp = "테러범";
    list[5].n = -1;
    list[5].temp = "right";
    list[6].n = 1;
    list[6].temp = "left";

    int index;
    cin >> index;

    while (1)
    {
        if (list[index].temp == "right")
        {
            v.push_back(index);
            index += list[index].n;
            // cout << index << endl;
        }
        else if (list[index].temp == "left")
        {
            v.push_back(index);
            index -= list[index].n;
            // cout << index << endl;
        }
        else if (list[index].temp == "테러범")
        {
            break;
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << "번" << endl;
    }

    return 0;
}