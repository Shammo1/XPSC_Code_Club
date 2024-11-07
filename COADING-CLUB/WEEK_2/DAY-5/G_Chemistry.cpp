#include <bits/stdc++.h>
using namespace std;
bool solve(string s, int k)
{
    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto &entry : freq)
    {
        if (entry.second % 2 != 0)
        {
            oddCount++;
        }
    }

    int length = s.length() - k;
    if (length < 0)
        return false;

    if (length % 2 == 0)
    {
        return oddCount <= k;
    }
    else
    {
        return oddCount <= k + 1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (solve(s, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
