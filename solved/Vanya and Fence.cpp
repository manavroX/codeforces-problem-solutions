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
    int n,h,ans;
    cin >> n >> h;
    int a[n];
    ans = n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>h)
            ans++;
    }
    cout << ans;
    return 0;
}
