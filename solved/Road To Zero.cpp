#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x,y,a,b;
        long long int ans = 0;
        cin >> x >> y >> a >> b;
        if(x>y)
        {
            ans+=a*(x-y);
            if(2*a*y>b*y)
                ans+= b*y;
            else
                ans += 2*a*y;

        }
        else if (y>x)
        {
            ans+=a*(y-x);
            if(2*a*x>b*x)
                ans+= b*x;
            else
                ans += 2*a*x;
        }
        else
        {
            if(2*a*x>b*y)
                ans = b*y;
            else
                ans = 2*a*x;
        }
        cout << ans << endl;
    }
    return 0;
}
