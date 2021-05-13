#include <iostream>
using namespace std;

int main()
{
    int t,a,b,c,d,k;
    cin >> t;
    int x[t], y[t];
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> d >> k;
        x[i] = a/c;
        y[i] = b/d;
    }
    for(int i = 0; i<t; i++)
    {
        if(x[i]+y[i]<=k)
        {
             cout << x[i]+1;
             cout << " ";
             cout << y[i]+1;
        }
        else
            cout << "-1";
    }
    return 0;
}
