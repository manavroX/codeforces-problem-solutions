#include <iostream>
using namespace std;
int main()
{
    int n,r=0,trace = 0;
    bool x=false, y = false;
    cin >> n;
    int a[n][n];
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cin >> a[row][col];
        }
    }
    for(int col=0;col<n;col++)
    {
        for(int row=0;row<n;row++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[row][col]==a[j][col]&&row!=j)
                {
                    r++;
                    y = true;
                    break;
                }
            }
            if(y)
                break;
        }
    }
    cout << r;
    return 0;
}

