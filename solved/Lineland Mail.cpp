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
    int m;
    cin >> m;
    int a[m],mini[m],maxi[m];
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    mini[0] = a[1]-a[0];
    maxi[0] = a[m-1] - a[0];
    mini[m-1] = a[m-1] - a[m-2];
    maxi[m-1] = a[m-1] - a[0];
    cout << mini[0] << " " << maxi[0] << endl;
    for(int i=1;i<m-1;i++)
    {
        mini[i] = min(a[i]-a[i-1],a[i+1]-a[i]);
        maxi[i] = max(a[m-1]-a[i],a[i]-a[0]);
        cout << mini[i] << " " << maxi[i] << endl;
    }
    cout << mini[m-1] << " " << maxi[m-1] << endl;
    return 0;
}
