#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
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
    int n;string s;bool ok = false;
    cin >> n >> s;
    for(int i=0;i<n-1;i++)
    {
        if((s[i]>s[i+1])&&(!ok))
        {
            ok = true;
            continue;
        }
        else
            cout << s[i];
    }
    if(ok)
        cout << s[n-1];
    return 0;
}
