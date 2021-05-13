#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long int x=0,y=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            y+=a[i];
            x+=a[n-i-1];
        }
    }
    else
    {
        for(int i=0;i<=n/2;i++)
        {
            y+=a[i];
            x+=a[n-i-1];
        }
        y-=a[(n-1)/2];
    }
    cout << (x*x) + (y*y);
    return 0;
}
