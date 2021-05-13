#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int l,b;
    cin >> l >> b;
    for(int i=0;i<=10;i++)
    {
        if(((pow(2,i)*b)-(pow(3,i)*l))<0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
