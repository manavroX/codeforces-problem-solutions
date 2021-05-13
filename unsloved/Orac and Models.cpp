#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,num=0,i=0,j=1,ans=-1;
        cin >> n;
        int s[n];
        for(i=0;i<n;i++)
        {
            cin >> s[i];
        }
        for(j=1;j<n;j++)
        {
            for(i=0;i<n;i+=j)
            {
                num = 0;
                if((j+1>i+1)&&(j+1%i+1==0)&&(s[j]>s[i]))
                {
                    num++;
                }
                if(num>=ans)
                {
                    ans = num;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
