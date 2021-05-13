#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k=2,x;
        cin >> n;
        while(1)
        {
            if(fmod(n,(pow(2,k))-1)==0)
            {
                x = (int)n/((pow(2,k))-1);
                cout << x << endl;
                break;
            }
            else
                k++;
        }
    }
    return 0;
}
