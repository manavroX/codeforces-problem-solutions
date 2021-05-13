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
int ceiling(float a, float b)
{
    if(fmod(a,b)==0)
        return (int)(a/b);
    else
        return (int)((a/b)+1);
}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
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
        int n;
        cin >> n;
        int a[n];
        vii c;
        c.pb(mp(0,0));
        c.pb(mp(1,0));
        c.pb(mp(2,0));
        for(int i=0;i<n;++i)
        {
            int x;
            cin >> x;
            a[i] = x%3;
            c[a[i]].ss+=1;;
        }
//        for(int i=0;i<3;i++)
//            cout << c[i].ff << " " << c[i].ss << endl;
        sort(c.begin(), c.end(), sortbysec);
//        for(int i=0;i<3;i++)
//            cout << c[i].ff << " " << c[i].ss << endl;
        int x = n/3;
        int ans=0;
        int one,two,zero;
        for(int i=0;i<3;i++)
        {
            if(c[i].ff==1)
                one=i;
            else if(c[i].ff==2)
                two = i;
            else
                zero=i;
        }
        //cout << "zero=" << zero << " one=" << one << " two=" << two << endl;
        if(c[1].ss<=x)
        {
            if(c[2].ff==2)
            {
                ans+=x-(c[zero].ss);
                ans+=((x-(c[one].ss))*2);

    //            ans+=((x-(c[1].ss))*2);
            }
            else if(c[2].ff==1)
            {
                ans+=x-(c[two].ss);
                ans+=((x-(c[zero].ss))*2);
            }
            else
            {
                ans+=x-(c[one].ss);
                ans+=((x-(c[two].ss))*2);
            }
        }
        else
        {
            if(c[0].ff==2)
            {
                ans+=(((c[zero].ss)-x)*2);
                ans+=(c[one].ss)-x;
            }
            else if(c[0].ff==1)
            {
                ans+=(((c[two].ss)-x)*2);
                ans+=(c[zero].ss)-x;
            }
            else
            {
                ans+=(((c[one].ss)-x)*2);
                ans+=(c[two].ss)-x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
