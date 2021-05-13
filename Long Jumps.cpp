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
        int n,aiMax,score=0,nextNum,ans=0;
        cin >> n;
        int a[n+1],goTo[n+1];
        bool smallarr[n+1] = {false};
//        smallarr[0] = false;
//        smallarr[1] = false;
        vi small;
        a[0] = -1*INF;
        goTo[0] = INF;
        cin >> a[1];
        aiMax = a[1];
        goTo[1] = a[1] + 1;
        if(goTo[1]<=n)
            small.pb(1);
        for(int i=2;i<=n;++i)
        {
            cin >> a[i];
            goTo[i] = i+a[i];
            if(a[i]>aiMax)
                aiMax = a[i];
            if(goTo[i]<=n)
            {
                if(!smallarr[goTo[i]])
                {
                    small.pb(i);
                    smallarr[goTo[i]]=true;
                }

            }
        }
//        for(auto itr : goTo)
//            cout << itr << " ";
//        cout << endl;
//        for(auto itr : small)
//            cout << itr << " ";
//        cout << endl;
        ans = aiMax;
        for(auto itr : small)
        {
            score = a[itr];
            nextNum = goTo[itr];
            while(nextNum<=n)
            {
                score+=a[nextNum];
                nextNum = goTo[nextNum];
            }
            if(score>=ans)
                ans = score;
        }
        cout << ans << endl;
    }
    return 0;
}

