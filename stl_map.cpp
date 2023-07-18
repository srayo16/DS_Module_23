#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp.insert({"Srayo", 100});
    mp.insert({"Maram", 80});
    mp.insert({"Shimu", 70});
    mp.insert({"Mari", 60});
    // mp.insert({"Sultan", 0});

    mp["Suleiman"] = 700;
    mp["Murad"] = 50;
    mp.insert({"Masud", 40});

    cout << mp["Srayo"] << endl;
    if (mp.count("Sultan"))
    {

        cout << mp["Sultan"] << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }

    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     cout << i->first << " " << i->second << endl;
    // }

    return 0;
}