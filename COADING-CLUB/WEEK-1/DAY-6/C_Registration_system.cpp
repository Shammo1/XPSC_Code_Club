#include <bits/stdc++.h>
using namespace std;
//problem-7
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> mp;
    int Q;
    cin >> Q;

    while (Q--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {

            mp[s] = 0;
            cout << "OK\n";
        }
        else
        {

            int i = ++mp[s];
            string s2 = s + to_string(i);
            while (mp.find(s2) != mp.end())
            {
                i = ++mp[s];
                s2 = s + to_string(i);
            }
            mp[s2] = 0;
            cout << s2 << "\n";
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<string> v2;
//     vector<string> v;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         v.push_back(s);
//     }
//     v2 = v;
//     for (int i = 0; i < n; i++)
//     {
//         int ans = 0;
//         for (int j = i + 1; j < n; j++)
//         {

//             if (v[i] == v[j])
//             {
//                 char k = ('1' + ans);
//                 v[j] += k;
//                 ans++;
//             }
//         }
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v2[i] == v[i])
//         {
//             cout << "OK" << endl;
//         }
//         else
//         {
//             cout << v[i] << endl;
//         }
//     }

//     return 0;
// }
