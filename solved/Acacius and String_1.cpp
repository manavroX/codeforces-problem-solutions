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
int check(string s)
{
    string get="abacaba";
    int cnt=0;
    for(int i=0;i+7<=s.size();i++)
    {
        string a=s.substr(i, 7);
        if(a==get)
            cnt++;
    }
    return cnt;
}

void solve()
{
    string get="abacaba";
    int n; cin>>n;
    string s; cin>>s;
    int cnt=check(s);
    if(cnt>=2)
    {
        cout<<"No\n";
    }
    else if(cnt==1)
    {
        cout<<"Yes\n";
        for(char ch:s)
        {
            if(ch=='?')
                cout<<'z';
            else
                cout<<ch;
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i+7<=n;i++)
        {
            bool ok=1;
            for(int j=0;j<7;j++)
            {
                if(s[i+j]==get[j])
                    ;
                else if(s[i+j]=='?')
                    ;
                else
                    ok=0;
            }
            if(ok)
            {
                string t=s;
                for(int j=0;j<7;j++)
                    t[i+j]=get[j];
                if(check(t)==1)
                {
                    cout<<"Yes\n";
                    for(int i=0;i<n;i++)
                        if(t[i]=='?')
                            t[i]='z';
                    cout<<t<<endl;
                    return;
                }
            }
        }
        cout<<"No\n";
    }
}

int32_t main()
{
    ios;
    int T; cin >> T;
    for(int tc = 1; tc <= T; tc++)
    {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;

}
