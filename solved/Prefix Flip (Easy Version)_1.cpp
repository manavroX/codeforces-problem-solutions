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
        int n;
        cin >> n;
        string a,b;
        cin >> a;
        cin >> b;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                ans.pb(i+1);
                ans.pb(1);
                ans.pb(i+1);
            }
        }
        cout << ans.size() << " ";
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
