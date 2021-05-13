#include <bits/stdc++.h>
using namespace std;
int gre(int a, int b)
{
    if(a%b==0)
        return a/b;
    else
        return (a/b)+1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,k,ans,x;
        cin >> n >> k;
        ans = k;
        ans+=(k-1)/(n-1);
        cout << ans << endl;
    }
    return 0;
}
