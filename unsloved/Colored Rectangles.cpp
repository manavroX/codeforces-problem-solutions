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
    int R,B,G,x,ans=0,red,green,blue;
    cin >> R >> G >> B;
    vi r,g,b;
    for(int i=0;i<R;i++)
    {
        cin >> x;
        r.pb(x);
    }
    for(int i=0;i<G;i++)
        {
        cin >> x;
        g.pb(x);
    }
    for(int i=0;i<B;i++)
        {
        cin >> x;
        b.pb(x);
    }
    sort(r.begin(),r.end());
    sort(g.begin(),g.end());
    sort(b.begin(),b.end());
    int y = 0;
    bool re=false,bl=false,gr=false;
    while(y<1)
    {
        R=r.size();
        G=g.size();
        B=b.size();
        red = r.back();
        green = g.back();
        blue = b.back();
        int mn = min(r.back(),min(g.back(),b.back()));
        if(mn==red&&red==green&&green==blue)
        {
            int x = min3(R,G,B);
            if(x==R)
                mn = red;
            else if(x==G)
                mn = green;
            else
                mn = blue;
        }
        else if(red==green&&mn==red)
        {
            int x = min(R,G);
            if(x==R)
                mn=red;
            else
                mn=green;
        }
        else if(red==blue&&mn==red)
        {
            int x = min(R,B);
            if(x==R)
                mn=red;
            else
                mn=blue;
        }
        else if(green==blue&&mn==green)
        {
            int x = min(G,B);
            if(x==G)
                mn=green;
            else
                mn=blue;
        }
        //cout <<" mn " << mn << endl;
        if(mn==red)
        {
            ans+=g.back()*b.back();
            g.pop_back();
            b.pop_back();
        }
        else if(mn==green)
        {
            ans+=r.back()*b.back();
            r.pop_back();
            b.pop_back();

        }
        else if(mn==blue)
        {
            ans+=g.back()*r.back();
            g.pop_back();
            r.pop_back();

        }
        if(r.size()==0&&!re)
        {
            y++;
            re=true;
        }
        if(g.size()==0&&!gr)
        {
            y++;
            gr=true;
        }
        if(b.size()==0&&!bl)
        {
            y++;
            bl=true;
        }
        //cout <<" ans " << ans << endl;
    }
    if(re)
    {
        while(y<2)
        {
            ans+=g.back()*b.back();
            g.pop_back();
            b.pop_back();
            if(g.size()==0&&!gr)
            {
                y++;
                gr=true;
            }
            if(b.size()==0&&!bl)
            {
                y++;
                bl=true;
            }
        }
    }
    else if(gr)
    {
        while(y<2)
        {
            ans+=r.back()*b.back();
            r.pop_back();
            b.pop_back();
            if(r.size()==0&&!re)
            {
                y++;
                re=true;
            }
            if(b.size()==0&&!bl)
            {
                y++;
                bl=true;
            }
        }
    }
    else
    {
        while(y<2)
        {
            ans+=g.back()*r.back();
            g.pop_back();
            r.pop_back();
            if(r.size()==0&&!re)
            {
                y++;
                re=true;
            }
            if(g.size()==0&&!gr)
            {
                y++;
                gr=true;
            }
        }
    }
    cout << ans;
    return 0;
}
