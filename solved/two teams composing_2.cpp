#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,mxdiff=1,mxsame=1,c=1;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                c++;
                if(c>=mxsame)
                    mxsame = c;
            }
            else
            {
                mxdiff++;
                c = 1;
            }
        }
        if(mxdiff==mxsame)
            cout << mxdiff-1;
        else
        {
            if(mxsame<=mxdiff)
                cout << mxsame;
            else
                cout << mxdiff;
        }
        cout << endl;
    }
    return 0;
}
