#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x;
        cin >> n >> k;

        if(n%2==k%2)
            x = 1;
        else
            x = 2;
        if(n-(k-1)*x<=0||(n%2==1&&k%2==0))
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            for(int i=1;i<=k;i++)
            {
                if(i!=k)
                    cout << x << " ";
                else
                    cout << n-(k-1)*x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
