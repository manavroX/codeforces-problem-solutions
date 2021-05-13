#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
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
        int a,b,ans;
        cin >> a >> b;
        ans = max(max(a,b),2*min(a,b));
        cout << ans*ans << endl;
    }
    return 0;
}
