#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ll long long
#define mp make_pair
#define INF 1000000007 // 10^9+7
#define EPS 0.000000001 //10^-9
//#define int long long
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
    int n,x,y;int sq=0,rect=0;bool sign = true,ans = false;//true = +, false = -;
    char c;
    cin >> n;
    int a[n];
    map<int,int> b;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[a[i]]++;
        y = a[i];
        if(b[y]%4==0)
        {
            sq++;
            rect--;
        }
        else if(b[y]%2==0)
        {
            rect++;
        }
    }
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> c;
        if(c=='-')
            sign = false;
        else
            sign = true;
        //cout << sign;
        cin >> y;
        //cout << y << endl;
        if(sign)
        {
            b[y]++;
            if(b[y]%4==0)
            {
                sq++;
                rect--;
            }
            else if(b[y]%2==0)
            {
                rect++;
            }
        }
        else
        {
            b[y]--;
            if(b[y]%4==3)
            {
                sq--;
                rect++;
            }
            else if(b[y]%2==1)
            {
                rect--;
            }
        }
        if((sq>=1&&rect>=2)||sq>=2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
