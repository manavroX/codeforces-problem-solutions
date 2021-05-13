#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n], ans[n];
    for(int i=0;i<n;i++)
    {
        cin >> x[i] >> y[i];
        ans[i] = x[i] + y[i];
    }
    sort(ans,ans+n);
    cout << ans[n-1];
    return 0;
}
