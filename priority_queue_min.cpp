#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int v;
            cin >> v;
            pq.push(v); // O(logN)
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1);
        }
        else if (c == 3)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}