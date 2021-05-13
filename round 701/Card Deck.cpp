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
#define SORT sort(ALL(a))
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
int maxIndex(vi a, int x)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==x)
            return i;
    }
    //cout << "hu2if" << endl;
    return 0;
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
        vi p, a;
        for(int i=0;i<n;++i)
        {
            int x;
            cin >> x;
            p.pb(x);

        }
//        for(int i=0;i<n;i++)
//            cout << p[i];
//        cout << endl;
//        cout << maxIndex(p);
        int last = n;
        while(p.size()!=0)
        {
//            cout << "last = " << last << endl;
//            int x = maxIndex(p,last);
            int x = max_element(p.begin(),p.end()) - p.begin();
//            cout << "x = " << x << endl;
            for(int i=x;i<p.size();i++)
            {
                cout << p[i] << " ";
                a.pb(p[i]);
                //p.erase(p.begin()+x);
            }
            p.erase(p.begin()+x, p.end());
//            cout << "p= ";
//            for(int i=0;i<p.size();i++)
//                cout << p[i];
//            cout << endl;
//            cout << endl;
            SORT;
            bool broken = 0;
            for(int i=a.size()-1;i>=1;i--)
            {
                if(a[i]!=a[i-1]+1)
                {
                    last = a[i]-1;
                    broken=1;
                    break;
                }
            }
            if(!broken)
                last = a[0]-1;
            //a.clear();
//            cout << endl;

        }
        cout << endl;
    }
    return 0;
}
