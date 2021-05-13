#include <bits/stdc++.h>
using namespace std;
bool sign(int a, int b)
{
    if(a*b>0)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0,maxi,j;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        j = a[0];
        maxi = a[0];
        for(int i=0;i<n;i++)
        {
            if(sign(j,a[i]))
            {
                maxi = max(maxi,a[i]);
            }
            else
                sum+=maxi,maxi = a[i];

            j = a[i];
        }
        sum+=maxi;
        cout << sum << endl;
    }
}


