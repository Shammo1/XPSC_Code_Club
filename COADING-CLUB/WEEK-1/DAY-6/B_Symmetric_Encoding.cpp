#include <bits/stdc++.h>
using namespace std;
//PROBLEM-12
void solve()
{
    int n;
    cin >> n;
    string b;
    cin >> b;

    set<char> unique_chars;
    for (char c : b)
    {
        unique_chars.insert(c);
    }

    string tmp(unique_chars.begin(), unique_chars.end());
    string a;
    for (char c : b)
    {
        a += tmp[tmp.size() - 1 - tmp.find(c)];
    }

    cout << a << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
