#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char a = 'a';
        char b = 'b';
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < s.size() - 1 && s[i] == s[i + 1])
            {

                if (a != s[i])
                {
                    s.insert(i + 1, 1, a);
                }
                else
                {
                    s.insert(i + 1, 1, b);
                }
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            if (s[s.size() - 1] != a)
            {

                s.push_back(a);
            }
            else
            {
                s.push_back(b);
            }
            cout << s << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }
    return 0;
}