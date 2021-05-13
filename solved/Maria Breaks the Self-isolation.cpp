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
        int n,no=1;//no = no of grannies
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        for(int i = n-1;i>=0;i--)
        {
            if(a[i]<=i+1)
                {no+=i;
                no++;
                break;
                }
        }
        cout << no << endl;
    }
    return 0;
}
