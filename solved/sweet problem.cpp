#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans[t];
    for(int i=0;i<t;i++)
    {
        int a[3],r,g,b,count=0;
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        r=a[2];
        g=a[1];
        b=a[0];
        if(r>g+b)
        {
            ans[i]=(g+b);
        }
        else
        {
            count+=(r-g);
            b-=(r-g);
            r-=(r-g);

            count+=(g-b);
            r-=(g-b);
            g-=(g-b);
            while(r>1)
            {
                r-=2;
                count+=3;
            }
            if(r==1)
            {
                count++;
            }
            ans[i] = count;
        }
    }
    for(int i=0;i<t;i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
