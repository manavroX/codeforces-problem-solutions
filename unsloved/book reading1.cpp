#include <iostream>
using namespace std;
long long int ans(long long int n, long long int m)
{
    long long int a=0;
    if(m%10==5)
    {
        for(long long int i=(10*(n/(2*m)))+1;i<=n;i++)
        {
            if(i%m==0)
                a+=i%10;
        }
    }
    else if(m%10==0)
    {
        a=0;
    }
    else if(m%2==0)
    {
        for(long long int i=(5*m*(n/(5*m)))+1;i<=n;i++)
        {
            if(i%m==0)
                a+=i%10;
        }
    }
    else
    {
        for(long long int i=(10*m*(n/(10*m)))+1;i<=n;i++)
        {
            if(i%m==0)
                a+=i%10;
        }
    }
    return a;
}
int main()
{
    int q;
    cin >> q;
    long long int sum[q];
    for(int i=0;i<q;i++)
    {
        sum[i]=0;
        long long int n,m;
        cin >> n >> m;
        if(m%10==5)
        {
            sum[i]=5*(n/(2*m))+ans(n,m);
        }
        else if(m%10==0)
        {
            sum[i]=0;
        }
        else if(m%2==0)
        {
            sum[i]=20*(n/(5*m))+ans(n,m);
        }
        else
        {
            sum[i]=45*(n/(10*m))+ans(n,m);
        }
        cout << sum[i] << endl;
    }
    return 0;
}
