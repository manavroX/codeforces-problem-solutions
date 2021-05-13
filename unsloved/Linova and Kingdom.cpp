#include <bits/stdc++.h>
using namespace std;
int RowSum(int *prow, int ncols)
    {
        int sum = 0,i;

        for(i=0; i<ncols; i++)
        {
            if(prow[i]==1)
                sum++;
        }
        return sum;
    }

int main()
{
    int n,k,ans=0,x,y,z=0;
    cin >> n >> k;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j] = 0;
    for(int i=0;i<n-1;i++)
    {
            cin >> x >> y;
            a[x-1][y-1] = 1;
            a[y-1][x-1] = 1;
    }
    for(int i=0;i<n;i++)
    {
        if(RowSum(a[i],n)==1)
            z+=1;
    }
    if(z==k)
    {
        for(int i=0;i<n;i++)
        {
            if(RowSum(a[i],n)==1)
            {
                while(a[i][0]!=1)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(a[i][j]==1&&j!=x)
                            {
                                x=i;
                                i=j;
                                ans+=1;
                                break;
                            }
                    }
                }
                ans+=1;
            }
        }
    }
    cout << ans;
}


