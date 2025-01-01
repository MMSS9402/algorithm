#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> lheap;                            // max heap
priority_queue<int, vector<int>, greater<int>> rheap; // min heap
int mid;

void push(int v)
{
    if (mid > v)
        lheap.push(v);
    else
        rheap.push(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    mid = 500;

    int n;
    int a, b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        push(a);
        push(b);

        if (lheap.size() > rheap.size())
        {
            rheap.push(mid);
            mid = lheap.top();
            lheap.pop();
        }
        else if (lheap.size() < rheap.size())
        {
            lheap.push(mid);
            mid = rheap.top();
            rheap.pop();
        }

        cout << mid << "\n";
    }

    return 0;
}