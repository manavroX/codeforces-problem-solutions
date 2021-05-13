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
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
void solve()
{
    int n,sum=0,ans=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    int part = sum/n,parsum=0,len=0;
    if(sum%n!=0)
    {
        cout << -1;
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            parsum+=a[i];
            len++;
            if(((parsum/len)!=part)||(parsum%len!=0))
            {
                ans++;
            }
            else
            {
                parsum=0;
                len=0;
            }
        }
        cout << ans;
    }
    return;
}
int32_t main()
{
    ios;
    solve();
    return 0;
}
