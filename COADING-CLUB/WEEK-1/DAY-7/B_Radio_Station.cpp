

#include <bits/stdc++.h>
using namespace std;
//problem-8
int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> un;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        un[ip] = name;
    }

    for (int i = 0; i < m; ++i)
    {
        string s, newip;
        cin >> s >> newip;

        string ip = newip.substr(0, newip.size() - 1); // removing ';'
        v.push_back(s + " " + newip + " #" + un[ip]);
    }

    for (string &cmd : v)
    {
        cout << cmd << endl;
    }

    return 0;
}
