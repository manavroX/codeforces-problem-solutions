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
    string x = "abacaba";
    int ans = 0;
    for(int i=0;i<s.size()-6;i++)
    {
        string a = s.substr(i,7);
        if(a==x)
            ans++;
    }
    return ans;
}
void solve()
{
    int n;string s;
    cin >> n >> s;
    if(check(s)==1)
    {
        cout << "Yes" << endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
                s[i] = 'z';
        }
        cout << s << endl;
        return;
    }
    else if(check(s)>1)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        string x = "abacaba";
        for(int i=0;i<n-6;i++)
        {
            bool y = true;
            string t = s;
            for(int j=0;j<7;j++)
            {
                if(t[i+j]!=x[j]&&t[i+j]!='?')
                    y = false;
            }
            if(y)
            {
                for(int j=0;j<7;j++)
                {
                    t[i+j] = x[j];
                }
                if(check(t)==1)
                {
                    cout << "Yes" << endl;
                    for(int i=0;i<n;i++)
                        if(t[i]=='?')
                            t[i] = 'z';
                    cout << t << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
    return;
}
int32_t main()
{
    ios;
    int test;
    cin >> test;
    for(int i=1;i<=test;i++)
    {
        //cout << test << " " << i;
        solve();
    }
    return 0;
}
