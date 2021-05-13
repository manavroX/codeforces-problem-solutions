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
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int m,f,cnts,cntw,s,w,ans=0;
        cin >> m >> f;
        cin >> cnts >> cntw;
        cin >> s >> w;
        if(s>w)
        {
            int y = w;
            w = s;
            s = y;
            y = cntw;
            cntw = cnts;
            cnts = y;
            //cout << s << w;
        }
        if(f>m)
        {
            int y = f;
            f = m;
            m = y;
        }
        int diff = w-s;
        int nsm=min(m/s,cnts),nsf=min(f/s,cnts),nwm=min(m/w,cntw),nwf=min(f/w,cntw);
        if(w!=s)
        {
            int x = m%s;
            ans+=(nsm);
            cnts-=nsm-(x/diff);
            cntw-=(x/diff);
            m-=(nsm-(x/diff))*s;
            m-=(x/diff)*w;
            //cout <<"m=" <<m << " " << "su="<<(nsm-(x/diff))<<" wu="<<(x/diff)<< endl;
            nsf=min(f/s,cnts);
            nwf=min(f/w,cntw);
            x = f%s;
            if(f<=(cnts*s))
            {
                ans+=nsf;
                cnts-=nsf-(x/diff);
                cntw-=(x/diff);
                f-=(nsf-(x/diff))*s;
                f-=(x/diff)*w;
                //cout <<"f="<<f<<endl;
            }
            else
            {
                ans+=cnts;
                f-=cnts*s;
                nwf=min(f/w,cntw);
                ans+=nwf;

            }
        }
        else
        {
            ans+=nsm;
            m-=nsm*s;
            cnts-=nsm;
            nsm=min(m/s,cnts),nsf=min(f/s,cnts),nwm=min(m/w,cntw),nwf=min(f/w,cntw);
            if(m>=s)
            {
                ans+=nwm;
                m-=nwm*w;
                cntw-=nwm;
            }
            nsm=min(m/s,cnts),nsf=min(f/s,cnts),nwm=min(m/w,cntw),nwf=min(f/w,cntw);
            ans+=nwf;
            f-=nwf*w;
            cntw-=nwf;
            nsm=min(m/s,cnts),nsf=min(f/s,cnts),nwm=min(m/w,cntw),nwf=min(f/w,cntw);
            if(f>=s)
            {
                ans+=nsf;
                f-=nsf*s;
                cntw-=nsf;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
