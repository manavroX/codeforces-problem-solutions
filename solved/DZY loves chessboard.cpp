#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='.')
            {
                if(i%2==0&&j%2==0)
                    cout << 'W';
                else if(i%2==0&&j%2==1)
                    cout << 'B';
                else if(i%2==1&&j%2==0)
                    cout << 'B';
                else
                    cout << 'W';
            }
            else
                cout << '-';
        }
        cout << "\n";
    }
    return 0;
}
