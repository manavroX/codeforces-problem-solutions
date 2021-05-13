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
    string a,b;
    int ans;
    cin >> a >> b;
    ans = max(a.length(),b.length());
    if (a==b)
        ans = -1;
    cout << ans;
    return 0;
}
