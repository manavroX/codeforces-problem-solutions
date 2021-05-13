#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,ans;
        bool b = true;
        cin >> n >> x;
        ans = n;
        int a[n],sum=0,i,j,k;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum+=a[i];
            if(a[i]%x!=0)
                b = false;
        }
        j = sum;
        k = ans;
        if(b)
        {
            cout << -1 << endl;
            continue;
        }
        while(sum%x==0)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]%x!=0)
                {
                    sum-=a[i];
                    ans-=(i+1);
                    break;
                }
            }
        }
        while(j%x==0)
        {
            for(i=n-1;i>=0;i--)
            {
                if(a[i]%x!=0)
                {
                    j-=a[i];
                    k-=(n-i);
                    break;
                }
            }
        }
        ans = max(ans,k);
        cout << ans << endl;
    }
    return 0;
}
