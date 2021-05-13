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
        int n,m,ans=0,x = 1,y=1;
        cin >> n;
        m = n;
        while(m%2==0)
        {
            m/=2;
            x++;
        }
        while(m%3==0)
        {
            m/=3;
            y++;
        }
        if(m==1&&(x<=y))
            ans = (2*y)-x-1;
        else if(n==1)
            ans = 0;
        else
            ans = -1;
        cout << ans << endl;
    }
    return 0;
}
