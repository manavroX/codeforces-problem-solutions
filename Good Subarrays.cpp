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
typedef map<int,int> mii;
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
        int n,ans=0,x=0;
        cin >> n;
        char c;
        mii a;
        vi b;
        b.pb(-1);
        for(int i=1;i<=n;i++)
        {
            cin >> c;
            b.pb(c-'0');
        }
        /*for(auto it : b)
            cout << it << " ";
        cout << endl;*/
        for(int i=2;i<=n;i++)
        {
            b[i]+=b[i-1];
            //cout << b[i] << " ";
        }
        for(int i=1;i<=n;i++)
        {
            //cout << b[i] << " ";
            b[i]-=i;
            a[b[i]]++;
        }
        /*for(auto it : b)
            cout << it << " ";
        cout << endl;*/
        for(auto it: a){
			if(it.ff==0){
				ans+=it.ss;
				if(it.ss>1){
					ans+=((it.ss)*(it.ss-1))/2;
				}
			}
			else{
				if(it.ss>1){
					ans+=((it.ss)*(it.ss-1))/2;
				}
			}
		}
        cout << ans << endl;
    }
    return 0;
}
