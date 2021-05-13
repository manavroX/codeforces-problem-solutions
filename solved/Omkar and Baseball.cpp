#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
#define begin bn
#define end ed
#define second ss
#define first ff
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,fr,bk;
        cin >> n;
        bool x = true, y = false;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]!=i+1)
                x = false;
        }
        if(x)
        {
            cout << 0 << endl;
            continue;
        }
        if(a[0]==1)
        {
            for(int i=0;i<n-1;i++)
            {
                if((a[i] == i+1)&&(a[i+1]!=i+2))
                {
                    fr = i+1;
                    break;
                }
            }
        }
        else
            fr = 0;
        if(a[n-1]==n)
        {
            for(int i=n-1;i>=fr;i--)
            {
                if((a[i]==i+1)&&(a[i-1]!=i))
                {
                    bk = i-1;
                    break;
                }
            }
        }
        else
            bk = n-1;
        y = false;
        for(int i = fr;i<=bk;i++)
        {
            if(a[i]==i+1)
            {
                y = true;
                break;
            }
        }
        //cout << fr << " " << bk << endl;
        if(y)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
