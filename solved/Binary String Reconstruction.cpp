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
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n,x;
        string s;
        cin >> s;
        n = s.size();
        cin >> x;
        int w[n];
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            w[i] = -1;
            //cout << w[i];
        }
        //cout << endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i>=x)
                    w[i-x] = 0;
                if(i<=n-1-x)
                    w[i+x] = 0;
                if(i>n-1-x&&i<x)
                {
                    w[i] = 0;
                }
            }
            if(s[i]=='1')
            {
                if(i>n-1-x&&i<x)
                {
                    ans = false;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(i<x)
                {
                    if(w[i+x]==0)
                    {
                        ans = false;
                        break;
                    }
                }
                else if(i>n-1-x)
                {
                    if(w[i-x]==0)
                    {
                        ans = false;
                        break;
                    }
                }
                else
                {
                    if(w[i-x]==0&&w[i+x]==0)
                    {
                        ans = false;
                        break;
                    }
                }
            }
        }
        if(ans)
        {
            for(int i=0;i<n;i++)
            {
                if(w[i]==-1)
                    cout << 1;
                else
                    cout << w[i];
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
