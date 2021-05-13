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
        cin >> n;
        vi in,ro,re,bo,be;
        string a;
        cin >> a;
        if(n==1)
        {
            if(a[0]%2==0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            x = a.at(i-1)-'0';
            if(i%2==0)
            {
                if(x%2==0)
                    re.pb(x);
                else
                    ro.pb(x);
            }
            else
            {
                if(x%2==0)
                    be.pb(x);
                else
                    bo.pb(x);
            }
        }
        for(int i=1;i<=n-1;i++)
        {
            if(i%2==1)
            {
                //raze plays
                if(re.size()>0)
                {
                    re.pop_back();
                }
                else
                {
                    ro.pop_back();
                }
            }
            else
            {
                //breach plays
                if(bo.size()>0)
                {
                    bo.pop_back();
                }
                else
                {
                    be.pop_back();
                }
            }
        }
        for(int i=0;i<re.size();i++)
            cout << re[i] << " ";
        if(n%2==0)
        {
            if(be.size()!=0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else
        {
            if(re.size()!=0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}
