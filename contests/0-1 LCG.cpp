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
    int k;
    cin >> k;
    int n;
    double a = sqrt(1+(8*k));
    n = (a-1)/2;
    //cout << n;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            cout << 1;
        else
            cout << 0;
    }
    int b = (n*(n+1))/2;
    for(int i=0;i<(k-b);i++)
    {
        if(n%2==0)
            cout << 0;
        else
            cout << 1;
    }
    return 0;
}
