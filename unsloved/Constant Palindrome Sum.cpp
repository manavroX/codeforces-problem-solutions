#include <bits/stdc++.h>
using namespace std;
int paliSum(int a[],n,i)
{
    return(a[i]+a[n+1-i]);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x,miniIndex,minSum;
        cin >> n >> k;
        x = n/2
        int a[n],b[x],c[x];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        mini = a[0];
        for(int i=0;i<x;i++)
        {
            if(a[i]<=mini)
                miniIndex = i;
        }
        minSum = a[miniIndex]+k;
    }
}
