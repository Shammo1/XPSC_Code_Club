
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define No cout << "NO" << '\n';
#define Yes cout << "YES" << '\n';
#define no cout << "No" << '\n';
#define yes cout << "Yes" << '\n';
#define in(vec, n)              \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
#define out(vec, n)             \
    for (int i = 0; i < n; i++) \
        cout << vec[i] << " ";
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    vector<int> v, v2;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    // for(pair<int,int>p :mp)
    // {
    //     int x=p.first;
    //     int y=p.second;
    //     cout<<x<<" "<<y<<endl;
    // }

    //  cout<<mp[];
    //
    int a = -1;
    int num = 0;
    while (1)
    {
        int cnt = mp[num];
        if (cnt >= 2)
        {
            num++;
            continue;
        }

        else if (cnt == 0)
        {
            if (a == -1)
            {
                cout << num + num << endl;
                return;
            }
            else
            {
                cout << a + num << endl;
                return;
            }
        }
        else
        {
            if (a == -1)
            {
                a = num;
            }
        }
        num++;
    }
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (v[i] != i)
    //     {
    //         cout << i + v2[0] << endl;
    //         return;
    //     }

    //     // cout<<v[i]<<endl;
    // }

    // cout << v2[0] + v.back() + 1 << endl;
}
int main()
{
    fastio int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}