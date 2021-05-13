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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[1]==a[2])
            cout <<"YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
