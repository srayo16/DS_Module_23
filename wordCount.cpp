#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while (ss >> word)
    {
        // cout << word <<endl;
        mp[word]++;
    }

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}