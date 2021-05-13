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
        int n,ans;
        cin >> n;
        if(n%2==0)
            ans = n/2;
        else
            ans = (n/2)+1;
        cout << ans << endl;
    }
    return 0;
}
