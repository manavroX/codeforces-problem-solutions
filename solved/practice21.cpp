#include <iostream>
using namespace std;
int main()
{
    int n,trace=0;
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
    cout << trace;
}
