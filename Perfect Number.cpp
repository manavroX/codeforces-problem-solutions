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
#define lb lower_bound //lower_bound(first_iterator, last_iterator, x) ? returns an iterator pointing to the first element in the range [first,last) which has a value not less than ?x?.
#define ub upper_bound //upper_bound(first_iterator, last_iterator, x) ? returns an iterator pointing to the first element in the range [first,last) which has a value greater than ?x?.
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
int sum(int k)
{
    int ans=0;
    while(k/10>0)
    {
        ans+=k%10;
        k/=10;
    }
    ans+=k;
    return ans;
}
int32_t main()
{
    ios;
    int k;
    cin >> k;
    //cout << sum(k);
    int x=0;
    for(int i=1;i<=k;i++)
    {
        while(sum(x+i)>10)
        {
            if(sum(x+i)>10)
            {
                x++;
            }
        }
    }
    cout << k+x << 10-sum(k+x);
    return 0;
}
