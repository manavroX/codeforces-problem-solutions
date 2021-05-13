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
        int n,open=0,ans=0;;

        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s.at(i)=='(')
                open++;
            if(s.at(i)==')')
               open--;
            if(open<0)
                {
                    ans++;
                    open = 0;
                }
        }
        cout << ans << endl;
    }
    return 0;
}
