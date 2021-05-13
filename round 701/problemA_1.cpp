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
#define lb lower_bound //lower_bound(first_iterator, last_iterator, x) � returns an iterator pointing to the first element in the range [first,last) which has a value not less than �x�.
#define ub upper_bound //upper_bound(first_iterator, last_iterator, x) � returns an iterator pointing to the first element in the range [first,last) which has a value greater than �x�.
int ceiling(float a, float b)
{
    if(fmod(a,b)==0)
        return (int)(a/b);
    else
        return (int)((a/b)+1);
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
    int test;
    cin >> test;
    while(test--)
    {
        int a,b;
        cin >> a >> b;
        if(a<b)
        {
            cout << 1 << endl;
            continue;
        }
        else if(a==b)
        {
            cout << 2 << endl;
            continue;
        }
        int x;
        int z = 0;
        if(b==1)
        {
            b=2;
            z=1;
        }
        if(fmod(log(a),log(b))==0)
            x = ceiling(log(a),log(b))+1;
        else
            x = ceiling(log(a),log(b));
        int y = x+z;
        for(int i=b;i<=b+x+z;i++)
        {
            int ans;
            if(fmod(log(a),log(b))==0)
                ans = ceiling(log(a),log(i))+1;
            else
                ans = ceiling(log(a),log(i));
            cout << "l=" << ans;
            ans+=i-b+z;
            if(ans<x)
                y = ans;
            cout << " i=" << i << " ans=" << ans << endl;
        }
        cout << y << endl;
    }
    return 0;
}
