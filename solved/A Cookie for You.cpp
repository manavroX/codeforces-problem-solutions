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
        bool ans;
        int a,b,n,m;
        cin >> a >> b >> n >> m;
        if(a+b<n+m)
            ans = false;
        else
        {
            int x = min(a,b), y = m;
            if(x>=y)
                ans = true;
            else
                ans = false;
        }
        if(ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
