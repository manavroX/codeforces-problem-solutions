#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define EPS 0.000000001 //10^-9
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;

    int n,a=0,d=0;
    cin >> n;
    string b;
    b.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> b.at(i);
        if(b.at(i)=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout << "Anton";
    else if(d>a)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}

