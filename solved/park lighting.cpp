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
        int n,m;
        cin >> n >> m;
        if(n%2==0)
            cout << m*(n/2);
        else if(m%2==0)
            cout << n*(m/2);
        else
            cout << (m*((n-1)/2)+((m/2)+1));

        cout << endl;
    }
    return 0;
}
