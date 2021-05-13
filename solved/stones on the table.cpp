#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin >> n;
    char a[n];
    for(int i=0;i<n;i++)
    {
         cin >> a[i];
         if(i==0){continue;}
         else
         {
             if(a[i]==a[i-1])
                ans++;
         }
    }
    cout << ans;
    return 0;
}
