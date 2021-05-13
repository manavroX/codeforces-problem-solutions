#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n,m;
        cin >> x >> n >> m;
        if(x<=10*m)
        {
            cout << "YES" << endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            x = (x/2)+10;
        }
        for(int i=0;i<m;i++)
        {
            x-=10;
        }
        if(x<=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
