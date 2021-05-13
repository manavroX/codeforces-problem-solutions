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
            }
        }
        if(a[0][0]!=9)
            a[0][0]++;
        else
            a[0][0]--;
        if(a[1][3]!=9)
            a[1][3]++;
        else
            a[1][3]--;
        if(a[2][6]!=9)
            a[2][6]++;
        else
            a[2][6]--;
        if(a[3][1]!=9)
            a[3][1]++;
        else
            a[3][1]--;
        if(a[4][4]!=9)
            a[4][4]++;
        else
            a[4][4]--;
        if(a[5][7]!=9)
            a[5][7]++;
        else
            a[5][7]--;
        if(a[6][2]!=9)
            a[6][2]++;
        else
            a[6][2]--;
        if(a[7][5]!=9)
            a[7][5]++;
        else
            a[7][5]--;
        if(a[8][8]!=9)
            a[8][8]++;
        else
            a[8][8]--;
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
