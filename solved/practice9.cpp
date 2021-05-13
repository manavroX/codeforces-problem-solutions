#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            b[i] = a[i]/2;
        }
        else
        {
            if(c%2==0)
            {
                if(a[i]>0)
                {
                    b[i]=(a[i]/2);
                }
                else
                {
                    b[i]=((a[i]/2)-1);
                }
            }
            else
            {
                if(a[i]>0)
                {
                    b[i]=((a[i]/2)+1);
                }
                else
                {
                    b[i]=(a[i]/2);
                }
            }
            c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << b[i]<<endl;
    }
    return 0;
}
