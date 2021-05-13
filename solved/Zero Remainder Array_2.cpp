#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
#define ff first
#define ss second
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,ans=0,mx = 0,v,m,x;
        cin >> n >> k;
        map <int , int> arr;
        for(int i=0;i<n;i++)
        {
            cin >> v;
            if(v%k==0)
            {
                m = 0;
                arr[m]++;
                continue;
            }
            else
                m = k - v%k;
            arr[m]++;
            if(arr[m]>mx)
            {
                mx = arr[m];
                x = m;
            }
            else if(arr[m]==mx)
            {
                mx = arr[m];
                x = max(x,m);
            }
            //mx = max(mx, arr[m]);
        }
        /*for (auto it : arr) {
			if (it.ss == mx) {
				x = it.ff;
			}
		}*/
		ans = k*(mx-1)+x+1;
        if(arr[0]==n)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}
