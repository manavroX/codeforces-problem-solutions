#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
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
        int n,no=0,ne=0;
        bool ans = false;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
                ne++;
            else
                no++;
        }
        sort(arr,arr+n);
        if(no%2==0)
        {
            cout << "YES" << endl;
            continue;
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==1)
            {
                ans  = true;
            }
        }
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
