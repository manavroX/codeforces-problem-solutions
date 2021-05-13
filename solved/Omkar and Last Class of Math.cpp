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
    int t;
    cin >> t;
    while(t--)
    {
        int n,a;
        bool x = true;
        cin >> n;
        if(n%2==0)
            cout << n/2 << " " << n/2 << endl;
        else
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    a = max(i,n/i);
                    cout << a << " " << n-a << endl;
                    x = false;
                    break;
                }
            }
            if(x)
                cout << 1 << " " << n-1 << endl;
        }
    }
    return 0;
}
