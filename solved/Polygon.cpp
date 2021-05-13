#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define endl "\n"
using namespace std;
void solve()
{
        int n,y;
        char x;
        cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cin >> x;
                a[i][j] = x-'0';
            }
        }
        bool ans = true;
        for(int i = 0;i<n-1;i++)
        {
            for(int j = 0;j<n-1;j++)
            {
                    if((a[i][j]==1)&&(a[i+1][j]==0)&&(a[i][j+1]==0))
                    {
                        ans = false;
                    }
            }
        }
        cout << (ans ? "Yes" : "NO") << endl;
}
int main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
