#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ll long long
#define mp make_pair
#define INF 1000000007 // 10^9+7
#define EPS 0.000000001 //10^-9
#define int long long
#define mINF -1000000007 //-1*10^9-7
#define endl "\n"
#define bn begin
#define rs resize
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define ss second
#define ff first
#define gcd __gcd
#define bs binary_search
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n,ans = 0,ans1=0,sum,x=-2;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        sum = a[n-1]+a[n-2];
        for(int i=a[0]+a[1];i<=sum;i++)
        {
            vector<bool> b(n,false);
            ans1 = 0;
            for(int j=0;j<n;j++)
            {
                if(b[j])
                    continue;
                //vector<bool> b(n,false);
                for(int k=0;k<n;k++)
                {
                    if(j==k)
                        continue;
                    if(!b[k])
                    {
                        if(a[k]+a[j]==i)
                        {
                            b[k] = true;
                            b[j] = true;
                            ans1++;
                            break;
                        }
                    }
                }
            }
            ans = max(ans,ans1);
        }
        cout << ans << endl;
    }
    return 0;
}
