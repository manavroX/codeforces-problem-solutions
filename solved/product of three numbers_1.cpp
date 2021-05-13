#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a=1,b=1,c=1;
        cin >> n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                a = i;
                break;
            }
        }
        for(int i=2;i<=sqrt(n/a);i++)
        {
            if((n/a)%i==0&&i!=a)
            {
                b = i;
                break;
            }
        }
        c = n/(a*b);
        if(c!=a&&c!=b&&c!=1&&a!=1&&b!=1)
        {
            cout << "YES" << endl << a << " " << b << " " << c << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
