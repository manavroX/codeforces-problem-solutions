#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,row,col;
        bool x = false,y = false;
        cin >> n >> m;
        row = n;
        col = m;
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
                /*if(a[i][j]==1)
                {
                    row--;
                    col--;
                }*/
            }
        }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(a[i][j]==1)
                    {
                        row--;
                        break;
                    }
                }
            }
            for(int j=0;j<m;j++)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i][j]==1)
                    {
                        col--;
                        break;
                    }
                }
            }

        //cout << row << " " << col << endl;
        if(row<=col)
        {
            if(row%2==1)
                cout << "Ashish" << endl;
            else
                cout << "Vivek" << endl;
        }
        else
        {
            if(col%2==1)
                cout << "Ashish" << endl;
            else
                cout << "Vivek" << endl;
        }

    }
    return 0;
}
