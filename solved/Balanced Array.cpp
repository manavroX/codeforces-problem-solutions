#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if((n/2)%2==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for(int i=0;i<n/2;i++)
            {
                cout << 2*(i+1) << " ";
            }
            for(int i=0;i<(n/2)-1;i++)
            {
                cout << (2*(i+1)) -1 << " ";
            }
            cout << ((3*n)/2)-1 << endl;
        }
    }
}
