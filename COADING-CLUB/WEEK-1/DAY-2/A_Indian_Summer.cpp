#include <bits/stdc++.h>
using namespace std;
// INDIAN SUMMER PROBLEM-3
int main()
{
    int n;
    cin >> n;
    set<pair<string, string>> s;
    for (int i = 0; i < n; i++)
    {

        pair<string, string> k;
        cin >> k.first >> k.second;
        s.emplace(k);
    }
    cout << s.size();

    return 0;
}