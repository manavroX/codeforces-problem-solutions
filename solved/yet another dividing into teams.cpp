#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int q,n;
    cin >> q;
    bool x[q];
    {
        for(int i=0; i<q; i++)
        {
            cin >> n;
            x[i] = 0;
            int a[n];
            for(int j=0; j<n; j++)
            {
                cin >> a[j];
            }
            sort(a, a+n);
            {
                for(int j=0; j<n-1; j++)
                {
                    if(a[j+1]==(a[j]+1))
                    {
                        x[i] = 1;
                        continue;
                    }
                }
            }

        }
        for(int i=0;i<q;i++)
        {
            if(x[i])
                cout << 2<<endl;
            else
                cout << 1<<endl;
        }
        return 0;
    }

}
