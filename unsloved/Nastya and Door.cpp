#include <bits/stdc++.h>
using namespace std;
int noOfPeaks(int a[], int start,int finish)
{
    int p=0;
    for(int i=start+1;i<finish;i++)
    {
        if(a[i-1]<a[i]&&a[i]>a[i+1])
            p++;
    }
    return p;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,l=0,p=0;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n-k;i++)
        {
            if(noOfPeaks(a,i,i+k-1)>p)
            {
                p = noOfPeaks(a,i,i+k-1);
                l=i+1;
            }
        }
        cout << p+1 << " " << l << endl;
    }
    return 0;
}
