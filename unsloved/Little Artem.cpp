#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;
        if(m%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(j%2==0)
                        cout << 'B';
                    else if(i==(n)&&j==m-1)
                        cout << 'B';
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }
        else if(n%2==0&&m%2==1)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(i%2==0)
                    {
                        cout << 'B';
                    }
                    else if(i==n-1&&j==1)
                    {
                        cout << 'B';
                    }
                    else
                    {
                        cout << 'W';
                    }
                }
                cout << endl;
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    if(j%2==0)
                        cout << 'W';
                    else if(j%2==1&&j!=m)
                        cout << 'B';
                    else if(j==m&&i%2==1)
                        cout << 'B';
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }
    }
    return 0;
}
