#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define endl "\n"
using namespace std;
int check(int a[],int b[], int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            ans++;
    }
    return ans;
}
void rot(int a[], int n)
{
    int x = a[n-1];
    for(int i=n-1;i>=1;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = x;

}
int main()
{
    ios;

        int n,ans = 0;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];


        ans = check(a,b,n);
        for(int i=0;i<n;i++)
        {
            rot(a,n);
            /*for(int i=0;i<n;i++)
                cout << a[i] << " ";*/
            ans = max(ans,check(a,b,n));
            if(ans == n)
                break;
        }
        cout << ans << endl;

    return 0;
}

