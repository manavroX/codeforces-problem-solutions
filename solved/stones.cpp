#include <iostream>
using namespace std;
int main()
{
    int t,a,c,b;
    cin >> t;
    int max[t];
    for(int i=0; i<t; i++)
    {
        max[i] = 0;
        cin >> a >> b >> c;
        for(b,c;b>0&&c>1;b--,c-=2)
        {
            max[i]+=3;
        }
        for(a,b;a>0&&b>1;a--,b-=2)
        {
            max[i]+=3;
        }
    }
    for(int i=0; i<t; i++)
    {
        cout << max[i] << "\n";
    }
    return 0;
}
