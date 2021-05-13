#include <bits/stdc++.h>
using namespace std;
int mod(int a, int b)
{
    if(a>b)
        return (a-b);
    else
        return (b-a);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a=0,b=0;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            if(i<=(n/2)-1)
                a+=pow(2,i);
            else if(i==n)
                a+=pow(2,i);
            else
                b+=pow(2,i);
        }
        cout << mod(a,b) << endl;
    }
    return 0;
}
