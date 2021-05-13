#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,i;
        cin >> n >> k;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                n+=i;
                break;
            }
        }
        if(i>sqrt(n))
            n+=n;
        cout << n+((k-1)*2) << endl;
    }
    return 0;
}

