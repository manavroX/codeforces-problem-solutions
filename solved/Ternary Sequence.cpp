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
    int test;
    cin >> test;
    while(test--)
    {
        int a1,a2,a3,b1,b2,b3,ans=0;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        ans+=2*(min(a3,b2));
        if(a3>=b2)
        {
            if((b3-a3+b2-a1>0)&&(a2-b1>0))
                ans-=2*(a2-b1);
        }
        else
            if((a2-b1-b2+a3>0)&&(b3-a1>0))
            ans-=2*(b3-a1);
        cout << ans << endl;
    }
    return 0;
}
