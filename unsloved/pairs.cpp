#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define endl "\n"
#define begin bn
#define end ed
#define second ss
#define first ff
using namespace std;
int32_t main()
{
    ios;
    vector<pair<int,int>> a;
    int n,m,x1,y1,x2,y2,x,y;
    bool ans = true;
    cin >> n >> m;
    cin >> x1 >> y1;

    cin >> x2 >> y2;
    if(x1==x2||x1==y2||y1==x2||y1==y2)
    {
        if(x1==x2||x1==y2)
            x = x1;
        else if(y1==x2||y1==y2)
            x = y1;
    }
    m-=2;
    while(m!=0)
    {
        cin >> x2 >> y2;
        if(x2==x||y2==x)
        {
            m--;
        }
        else
        {
            break;
        }
    }
    if(m==0)
    {
        cout << "Yes";
        return 0;
    }
    cin >> x1 >> y1;
    if(x1==x2||x1==y2||y1==x2||y1==y2)
    {
        if(x1==x2||x1==y2)
            y = x1;
        else if(y1==x2||y1==y2)
            y = y1;
    }
    m-=2;
    while(m!=0)
    {
        cin >> x1 >> y1;
        if(x1==x||x1==y||y1==x||y1==y)
            m--;
        else
        {
            ans = false;
            break;
        }
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}
