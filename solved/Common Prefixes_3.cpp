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
        int n;
        string x;
        char c = 'b';
        cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++)
            cin >> a[i];
        x.resize(50);
        for(int i=0;i<51;i++)
            x[i] = 'a';
        cout << x << endl;
        for(int i=1;i<=n;i++)
        {
            x[a[i]] = c;
            if(c!='z')
                c++;
            else
                c='b';

            cout << x << endl;
        }
    }
    return 0;
}
