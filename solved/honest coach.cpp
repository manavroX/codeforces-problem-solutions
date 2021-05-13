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
        int n,diff=INF;
        cin >> n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        sort(s,s+n);
        for(int i=1;i<n;i++)
        {
            diff = min(diff,s[i]-s[i-1]);
        }
        cout << diff << endl;
    }
    return 0;
}
