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
        int k,n,x,y;
        cin >> x >> y >> n;
        if(((x*(n/x))+y)<=n)
            k = ((x*(n/x))+y);
        else
            k = k = ((x*(n/x))+y - x);
        cout << k << endl;
    }
    return 0;
}
