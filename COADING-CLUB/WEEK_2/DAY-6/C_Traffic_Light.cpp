#include <bits/stdc++.h>
using namespace std;
//problem-12
int solve(string &s, char c)
{
    int n = s.size();
    string doubled_s = s + s;
    int last_g = -1;
    int max_time = 0;
    for (int i = 2 * n - 1; i >= 0; --i)
    {
        if (doubled_s[i] == 'g')
        {
            last_g = i;
        }
        if (i < n && doubled_s[i] == c)
        {
            max_time = max(max_time, last_g - i);
        }
    }

    return max_time;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        int result = solve(s, c);
        cout << result << endl;
    }

    return 0;
}
