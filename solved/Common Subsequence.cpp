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
        int n,m,ans1;
        bool ans = false;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin >> b[i];
            if(ans==false)
            {
                for(int j=0;j<n;j++)
                {
                    if(b[i]==a[j])
                    {
                        ans1=b[i];
                        ans = true;
                    }
                }
            }
        }
        if(ans)
        {
            cout << "YES" << endl << "1 " << ans1 << endl;
        }
        else
            cout << "NO" << endl;

    }
    return 0;
}
