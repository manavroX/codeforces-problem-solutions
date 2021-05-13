#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,n,w,x,y,z;
        cin >> n >> a >> b >> c >> d;
        w = c-d;
        x = c+d;
        y = n*(a-b);
        z = n*(a+b);
        if((x<=z&&x>=y)||(w>=y&&w<=z)||(w<=y&&x>=z))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
