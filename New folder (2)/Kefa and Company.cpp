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
#define ALL(a) a.begin(), a.end()
#define SORT(a) sort(ALL(a))
#define ss second
#define ff first
#define gcd __gcd
#define bs binary_search
#define lb lower_bound //lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
#define ub upper_bound //upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.
int ceiling(int a, int b)
{
    if(a%b==0)
        return (a/b);
    else
        return (a/b)+1;
}
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int32_t main()
{
    ios;
    int n,d;
    cin >> n >> d;
    vii a;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin >> x>> y;
        a.pb(mp(x,y));
    }
    SORT(a);
    int score=a[0].ss;
    int maxscore = score;
    int first = a[0].ff;
    for(int i=0;i<n-1;i++)
    {
        cout << a[i].ff << " " << a[i].ss << endl;
        if(a[i+1].ff<first+d)
        {
            //cout << i+1 << endl;
            score+=a[i+1].ss;
        }
        else
        {
            score = a[i+1].ss;
            first = a[i+1].ff;
        }
        cout << "first = " << first << " score = " << score << " maxscore = " << maxscore << endl;
        maxscore = max(score,maxscore);
    }
    cout <<a[n-1].ff << " " << a[n-1].ss << endl;
    cout << maxscore;
    return 0;
}
