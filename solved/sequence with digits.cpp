#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int ans(int a)
{
    int mini=10,maxi=-1,x;
    while(a>0)
    {
        x = a%10;
        a/=10;
        mini = min(mini,x);
        maxi = max(maxi,x);
    }
    return mini*maxi;
}
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int a,k;
        cin >> a >> k;
        k--;
        while(k--)
        {
            a+=ans(a);
            if(ans(a)==0)
                break;
        }
        cout << a << endl;
    }
    return 0;
}
