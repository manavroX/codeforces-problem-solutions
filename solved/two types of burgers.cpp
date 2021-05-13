#include <iostream>
using namespace std;

int main()
{
    int t, b, p, f, h, c,n;
    cin >> t;
    int profit[t];
    for(int i=0; i<t; i++)
    {
        cin >> b >> p >> f;
        cin >> h >> c;
        n = (b/2);
        if(h>c)
        {
            if(n>=p)
            {
                if(n-p<=f)
                {
                    profit[i] = p*h + (n-p)*c;
                }
                else
                {
                    profit[i] = p*h + f*c;
                }
            }
            else
            {
                profit[i] = n*h;
            }
        }
        else if(h<c)
        {
            if(n>=f)
            {
                if(n-f<=p)
                {
                    profit[i] = f*c + (n-f)*h;
                }
                else
                {
                    profit[i] = f*c + p*h;
                }
            }
            else
            {
                profit[i] = n*c;
            }
        }
        else
        {
            if(n>=p+f)
            {
                profit[i]=(p+f)*h;
            }
            else
            {
                profit[i]=n*h;
            }
        }
    }
    for(int i=0; i<t; i++)
    {
        cout << profit[i] << "\n";
    }
    return 0;
}
