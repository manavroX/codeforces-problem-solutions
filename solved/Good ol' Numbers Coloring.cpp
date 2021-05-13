#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin >> a >> b;
        if(__gcd(a,b)==1)
        {
            cout << "FINITE"<<endl;
        }
        else
        {
            cout << "INFINITE"<<endl;
        }
    }
    return 0;
}
