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
        int a,b,c,p,q,r;
        cin >> p >> q >> r;
        cin >> a >> b >> c;
        if(all 3 equal)
            cout << 0;
        else if(any 2 equal)
            cout << 1;
        else if(any one equal)//assume a==p
        {
            if((r-c==q-b)||(float)c/r==(float)b/b))
                cout << 1;
            else
                cout << 2;
        }
        else
        {
            if((diff of all 3 same)||(quotient of all 3 same))
                cout << 1;
            else if((diff of 2)||(quotient of 2))
                    cout << 2;
            else
                cout << 3;
        }
        cout << endl;
    }
    return 0;
}
