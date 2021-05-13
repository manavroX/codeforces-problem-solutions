#include <bits/stdc++.h>
using namespace std;
int xyz(int b[],int n,int c)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            k++;
            if(k==c)
                return i;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0,k=1,maxi;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = 0;
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]*a[i+1]<0)
            {
                k++;
                b[i] = 1;
            }
            cout << b[i] << " ";
        }
        cout << b[n-1];
        cout << endl;
        for(int i=1;i<=k-1;i++)
        {
            maxi = a[xyz(b,n,i)];
            for(int j=xyz(b,n,i)+1;j<=xyz(b,n,i+1);j++)
            {
                if(a[xyz(b,n,i)]>=maxi)
                    maxi = a[xyz(b,n,i)];

            }
            cout << maxi << " ";
            sum+=maxi;
        }
        cout << endl;
        cout << sum;
    }
}

