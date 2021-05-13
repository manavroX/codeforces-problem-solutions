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
    int n,x;
    cin >> n;
    vi a,b;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    //cout << a.back();
    if(n%2==1)
        cout << n/2 << endl;
    else
        cout << (n/2)-1 << endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            cout <<a.at(i/2) << " ";
            //a.erase(a.end());
        }
        else
        {
            cout <<a.at(n-(i/2)-1) << " ";
            //a.erase(a.begin());
        }
    }

    return 0;
}
