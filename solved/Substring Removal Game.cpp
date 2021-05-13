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
        string s;
        bool one = false;
        cin >> s;
        int n = s.size(),ans = 0;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(one==false)
                {
                    a.pb(1);
                    one = true;
                }
                else
                    a[a.size()-1]++;
            }
            else
                one = false;
        }
        sort(a.begin(),a.end(), greater <>());
        for(int i=0;i<a.size();i++)
        {
            //cout << a[i] << " ";
            if(i%2==0)
                ans+=a[i];
        }
        //cout << endl;
        cout << ans << endl;
    }
    return 0;
}
