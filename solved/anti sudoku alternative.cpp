#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int b[9], a[9][9];
        int c;
        for(int i=0;i<9;i++)
        {
            cin >> b[i];
            for(int j=8;j>=0;j--)
            {
                c = (b[i]/(pow(10,j)));
                a[i][8-j] = c%10;
                if(a[i][8-j]==1)
                    a[i][8-j]++;
            }
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}

