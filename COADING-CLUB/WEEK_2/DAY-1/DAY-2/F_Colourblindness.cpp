#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s, k;
        cin >> s >> k;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != k[i])
            {

                if (s[i] == 'G' && k[i] == 'B' || s[i] == 'B' && k[i] == 'G')
                {
                  //  cout << s[i] << " " << k[i] << endl;
                }
                else
                {
                    flag = true;
                }
            }
        }
        if (flag == false)
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