#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set search, sort r duplicate delete korar jnno use kora hoy. eti bst er jnno use hoy mainly.
    set<int> s;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}