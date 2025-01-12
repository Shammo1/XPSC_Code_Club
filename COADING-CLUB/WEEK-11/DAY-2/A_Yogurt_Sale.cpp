#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    if (a<b/2 || a==b/2)
    {
        ans=n*a;
    }
    else if (a>b/2 && n%2==0)
    {
        ans=(n/2)*b;
    }
    else if (a>b/2 && n%2!=0)
    {
        ans=((n-1)/2)*b+a;
    }
    
    cout<<ans<<endl;
    }
       return 0;
}