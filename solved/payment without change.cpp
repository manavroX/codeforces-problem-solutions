#include <iostream>
using namespace std;
int main()
{
    int q,a,b,n,s,x;
    cin >> q;
    bool o[q];
    for(int i=0;i<q;i++)
    {
        o[i] = 0;
        cin >> a >> b >> n >> s;
        x = s/n;
        if(x>=a)
        {
            if((a*n)+b>=s)
            {
                o[i] = 1;
                continue;
            }
        }
        else
        {
            if(((s/n)*n)+b>=s)
            {
                o[i] = 1;
                continue;
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        if(o[i])
        {
            cout << "YES"<<endl;;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
