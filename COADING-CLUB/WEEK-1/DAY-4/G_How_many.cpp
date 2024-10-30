#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m ;
    cin>>n>>m;
   int ans=0;
    for (int  i = 0; i <100; i++)
    {
        for (int j = 0; j <100; j++)
        {
            for (int s= 0; s <100; s++)
            {
             //

              if (i+j+s<=n && i*j*s<=m)
              {
                ans++; //cout<<i<<j<<s<<endl;
              }
              
            }
            
        }
        
    }
 
   cout<<ans;
    
       return 0;
}