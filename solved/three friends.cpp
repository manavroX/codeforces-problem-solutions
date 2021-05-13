#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int ans[q];
    for(int i=0;i<q;i++)
    {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        sort(x,x+3);
        int a = x[0], b = x[1], c = x[2];
        if(a==b && b==c)
        {
            ans[i] = 0;
        }
        else if(a==b && b!=c)
        {
            if((c-b)!=1)
            {
                ans[i] = 2*(c-2-b);
            }
            else
            {
                ans[i] = 0;
            }
        }
        else if(c==b && c!=a)
        {
             if((c-a)!=1)
            {
                ans[i] = 2*(c-a-2);
            }
            else
            {
                ans[i] = 0;
            }
        }
        else
        {
            ans[i] = (c-1-b) + (c-2-a) + (b-a-1);
        }
    }
    for(int i=0; i<q; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
