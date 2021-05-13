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
    int n,x,ans=0;
    cin >> n;
    vi a,b;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    //cout << a.back();
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            //cout <<a.at(i/2) << " ";
            b.pb(a.at(i/2));
            //a.erase(a.end());
        }
        else
        {
            //cout <<a.at(n-(i/2)-1) << " ";
            b.pb(a.at(n-(i/2)-1));
            //a.erase(a.begin());
        }
    }
    for(int i=1;i<n-1;i++)
    {
        //cout << "enter loop";
        if(b[i-1]>b[i]&&b[i]<b[i+1])
        {
            ans++;
            //cout << "ans++" << i;
        }
    }
    //cout << endl;
    cout << ans << endl;
    for(int i=0;i<n;i++)
        cout << b[i] << " ";
    return 0;
}
