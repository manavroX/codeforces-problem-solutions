#include <iostream>
using namespace std;
int main()
{
    int t,n,a,b,c,r=0,p=0,s=0,win=0;
    cin >> t;
    bool x[t];
    char str[n];
    string ans[t];
    for(int i=0;i<t;i++)
    {
        cin >> n;
        cin >> a >> b >> c;

        for(int j=0;j<n;j++)
        {
            if(str[j]=='R')
            {
                r++;
                ans[i]+='P';

            }
            if(str[j]=='P')
            {
                p++;
                ans[i]+='S';
            }
            if(str[j]=='S')
            {
                s++;
                ans[i]+='R';
            }
        }
        if(a>=p)
        {
            win+=p;
        }
        else
        {
            win+=a;
        }
        if(b>=s)
        {
            win+=s;
        }
        else
        {
            win+=b;
        }
        if(c>=r)
        {
            win+=r;
        }
        else
        {
            win+=c;
        }
        if(win>=((n/2)+1))
            x[i] = true;
    }
    for(int i=0;i<t;i++)
    {
        if(x[i])
        {
            cout << "YES" << ans[i];
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
