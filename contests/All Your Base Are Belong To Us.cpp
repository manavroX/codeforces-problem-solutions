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
    int n,k,sum=0,totsum=0;
    cin >> n >> k;
    int a[n];
    vii dif;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            else
            {
                sum+=max(a[j],a[i])-min(a[j],a[i]);
                totsum+= max(a[j],a[i])-min(a[j],a[i]);
            }
        }
        dif.pb(make_pair(sum,a[i]));
    }
    /*for(int i=0;i<n;i++)
        cout << dif[i].ff << " " << dif[i].ss << endl;*/
    sort(dif.begin(),dif.end());
    //cout << dif.back().ss;
    for(int i=0;i<n;i++)
        cout << dif[i].ff << " " << dif[i].ss << endl;
    for(int i=0;i<k;i++)
    {
        int difsize = dif.size();
        for(auto it:dif)
        {
            it.ff -= max(it.ss,dif.back().ss)-min(it.ss,dif.back().ss);
        }
        dif.pop_back();
        sort(dif.begin(),dif.end());
        for(int i=0;i<n;i++)
            cout << dif[i].ff << " " << dif[i].ss << endl;
    }
    return 0;
}
