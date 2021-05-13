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
        int n,i,j,numb = 1,ans = 0,x;
        cin >> n;
        int s[n];
        for(i=0;i<n;i++)
        {
            cin >> s[i];
        }
        for(i=2;i<=n;i++)
        {
            numb = 1;
            x = i;
            for(j=2*i;j<=n;j+=i)
            {
                if((j>x)&&(s[j-1]>s[x-1]))
                {
                    numb++;
                    x = j;
                }

            }
            if(numb>=ans)
            {
                ans = numb;
                cout << i << endl;
                if(s[0]<s[i-1])
                    ans++;
            }
        }
        if(ans==0)
            ans = 1;
        cout << ans << endl;
    }
    return 0;
}
