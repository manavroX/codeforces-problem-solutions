#include <bits/stdc++.h>
int gcd(int n1,int n2)
{

    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans[t];
    for(int i=0;i<t;i++)
    {
        ans[i].push_back(1);
        int n,z=11;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        for(int j=1;j<=z;j++)
        {
           for(int k=0;k<n;k++)
           {
               if(gcd(a[k],a[j])!=1)
               {
                   ans[i].push_back(j);
                   if(k<=11)
                   {
                       z++;
                   }
               }
           }
        }
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout << ans[i].at(j);
        }
    }
}
