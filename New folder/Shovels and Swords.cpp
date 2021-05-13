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
#define lb lower_bound //lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
#define ub upper_bound //upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.

int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
int power(int x,int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,ans; cin >> a >> b;
        if(a==0||b==0)
            ans = 0;
        else if((a>=2*b)||(b>=2*a))
            ans = min(a,b);
        else if(a==b)
        {
            if(a%3==2)
                ans = (2*(a/3))+1;
            else
                ans = 2*(a/3);
        }
        else
        {
            int diff = max(a,b)-min(a,b);
            ans=diff;
            int low = min(a,b);
            low-=diff;
            if(low%3==2)
                ans+=(2*(low/3))+1;
            else
                ans+=2*(low/3);
        }
        cout << ans << endl;
    }
    return 0;
}
