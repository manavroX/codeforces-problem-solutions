#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,nz=0,no=0;
        cin >> n;
        bool sorted = false;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            {cin >> a[i];
            c[i] = a[i];}
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            if(b[i]==0)
                {nz++;

                }
            else
                {no++;

                }
        }
        sort(c,c+n);
        for(int i=0;i<n;i++)
        {
            if(c[i]!=a[i])
            {sorted = true;
            break;
            }
        }
        if(!sorted)
            {cout << "Yes" << endl;
            continue;
            }
        if(no!=n&&nz!=n)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}


