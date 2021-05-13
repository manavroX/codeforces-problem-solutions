#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ansK[t],ansR[t], ansC[t];
    for(int i=0;i<t;i++)
    {
        long long int n,trace=0,r=0,c=0;
        bool x = false, y = false;
        cin >> n;
        int a[n][n];
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                cin >> a[row][col];
                if(row==col)
                    trace+=a[row][col];
            }
        }
        ansK[i] = trace;

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[row][col]==a[row][j]&&col!=j)
                {
                    r++;
                    x = true;
                    break;
                }
            }
            if(x)
                break;
        }
    }
    ansR[i] = r;
    for(int col=0;col<n;col++)
    {
        for(int row=0;row<n;row++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[row][col]==a[j][col]&&row!=j)
                {
                    c++;
                    y = true;
                    break;
                }
            }
            if(y)
                break;
        }
    }
    ansC[i] = c;
    }
    for(int i=0;i<t;i++)
    {
        cout << "Case #" << i+1 <<":"<< ansK[i] << " " << ansR[i] << " " << ansC[i] << endl;
    }
    return 0;
}
