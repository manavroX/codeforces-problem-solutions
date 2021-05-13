#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
void solve()
{
    int n,k,i;
    bool prime = true;
    cin >> n >> k;
    int ans=n;
    if(k>=n)
    {
        cout << 1;
        return;
    }
    if(k==1)
    {
        cout << n;
        return;
    }
    for(int i =2;i<=min(k,(int)sqrt(n));i++)
    {
        if(n%i==0)
        {
            prime = false;
            // if i divides n, then n/i also divides k
            //if k>=n/i then ans = i;
//            if(i>k)
//                break;
            if(k>=(n/i)){
                ans = min(ans,i);
//                cout << "a" << i << " ";
                break;
            }
            else{
                ans = min(ans,n/i);
//                cout << "b" << n/i<<+ " ";
//                if(i>=(n/k))
//                    break;
            }

        }
    }
    if(prime)
        cout << n;
    else
        cout << ans;
}
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
