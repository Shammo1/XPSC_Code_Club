#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        string s;
        cin >> n >> s;
        string T = "Timur";
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {

            bool flag = false;
            int i = 0;
            while (n--)
            {
                int x = -1;

                x = s.find(T[i]);
                //  cout<<x<<" ";
                if (x == -1)
                {
                    flag = true;
                    break;
                }
                else
                {
                    // cout<<T[i]<<endl;
                    i++;
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
    }
    return 0;
}