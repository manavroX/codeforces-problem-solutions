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
        int n,x;
        bool ans= true;
        cin >> n;
        vi a;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            a.pb(x);
        }
        sort(a.bn(),a.end());
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]==a[i]+1)||(a[i+1]==a[i]))
            {
            }
            else
            {
                ans = false;
                break;
            }
        }
        if(ans)
            cout <<"YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
