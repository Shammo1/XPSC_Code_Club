// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int t; // number of test cases
//     cin >> t;

//     while (t--)
//     {
//         int q; // number of elements in the array
//         cin >> q;

//         vector<int> a;
//         int cnt = 0;

//         for (int i = 0; i < q; i++)
//         {
//             int x;
//             cin >> x;

//             int nw_cnt = cnt + (a.size() > 0 && a.back() > x);

//             if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0]))
//             {
//                 a.push_back(x);
//                 cnt = nw_cnt;
//                 cout << "1";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
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
        vector<int> a(n), newV;
        string s = "";
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (newV.empty())
            {
                s.push_back('1');
                newV.push_back(a[i]);
            }
            else
            {
                if (flag)
                {
                    if (a[i] < newV.back())
                    {
                        s.push_back('0');
                    }
                    else
                    {
                        if (a[i] > newV[0])
                        {
                            s.push_back('0');
                        }
                        else
                        {
                            s.push_back('1');
                            newV.push_back(a[i]);
                        }
                    }
                }

                else
                {
                    if (a[i] >= newV.back())
                    {
                        s.push_back('1');
                        newV.push_back(a[i]);
                    }
                    else
                    {
                        if (a[i] > newV[0])
                        {
                            s.push_back('0');
                        }
                        else
                        {
                            flag = true;
                            s.push_back('1');
                            newV.push_back(a[i]);
                        }
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}