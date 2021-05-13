#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,fa,x,y;
        cin >> n >> k;
        int ans[n][n];
        if(k%n==0)
            fa = 0;
        else
            fa = 2;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans[i][j] = 0;
        if(k>n)
        {
            x = k/n;
            y = k%n;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(((j<i+x)&&(j>=i))||(i>n-x)&&(j<i-n+x))
                        ans[i][j]++;
                }
            }
            for(int i=0;i<y;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==n-x)
                        {ans[i][0]++;
                        break;}
                    else if(i==n-x-1)
                        {ans[i][n-1]++;
                        break;}
                    else if((ans[i][j]==1)&&(ans[i][j+1]==0))
                        {ans[i][j+1]++;
                        break;}
                }
            }
        }
        else
        {
            for(int i=0;i<k;i++)
                ans[i][i]++;

        }
        cout << fa << endl;
        for(int i=0;i<n;i++)
            {for(int j=0;j<n;j++)
                {cout << ans[i][j];}
            cout << endl;
            }
    }
    return 0;
}
