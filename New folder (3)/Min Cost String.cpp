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
    int n,k;
    cin >> n >> k;
    string s;
    s.resize(k);
    for(int i=0;i<k;++i)
    {
        s[i] = 'a' + i;
    }
    int counts =n;
    bool broken = false,repeat = false;
    if(k==1)
    {
        for(int i=0;i<n;++i)
            cout << 'a';
        return 0;
    }
    while(counts>0)
    {
        broken = false;
        for(int i=0;i<k;++i)
        {

            for(int j=i;j<k;++j)
            {
                if(j!=i&&!repeat)
                {
                    cout << s[i];
                    counts--;
                    if(counts==0)
                    {
                        broken = true;
                        break;

                    }
                }

                cout << s[j];
                counts--;
                if(counts==0)
                {
                    broken = true;
                    break;

                }
            }
            if(i==k-1)
            {
                cout << s[0];
                counts--;
                if(counts==0)
                    broken=true;

            }

            if(broken)
            {
                counts=0;
                break;
            }

        }
        repeat = true;
    }
    return 0;
}
