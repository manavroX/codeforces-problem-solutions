#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long unsigned int ans[t];
    for(int i=0;i<t;i++)
    {
        ans[i]=0;
        long long unsigned int A,B,c;
        cin >> A >> B;
        c=(log10(B)+1);
        if(B+1==pow(10,c))
        {
            ans[i]=A*c;
        }
        else
        {
            ans[i]=A*(c-1);
        }
    }
    for(int i=0;i<t;i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
