#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int e,a,b,c,d;
        cin >> a >> b >> c >> d;
        e = a*b + c*d;
        if(a==c&&(a==b+d))
            cout << "YES";
        else if(a==d&&a==b+c)
            cout << "YES";
        else if(b==c&&b==a+d)
            cout << "YES";
        else if(b==d&&b==a+c)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
