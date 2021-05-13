#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
#define begin bn
#define end ed
#define second ss
#define first ff
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,x=-1;
        string ans;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(x==-1)
            {
                if(a[i]!=1)
                {
                    if(i%2==0)
                    {
                        ans = "First";
                    }
                    else
                        ans = "Second";
                    x=0;
                }
            }
        }
        if(x==-1)
        {
            if(n%2==0)
                ans = "Second";
            else
                ans = "First";
        }
        cout << ans << endl;
    }
    return 0;
}
