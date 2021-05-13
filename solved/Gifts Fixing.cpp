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
        int n,minc=INF,mino=INF,ans=0;
        cin >> n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            minc = min(minc,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            mino = min(mino,b[i]);
        }
        for(int i=0;i<n;i++)
        {
            a[i]-=minc;
            b[i]-=mino;
        }
        for(int i=0;i<n;i++)
        {
            ans+=max(a[i],b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
