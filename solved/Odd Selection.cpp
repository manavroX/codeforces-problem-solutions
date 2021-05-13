#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define EPS 0.000000001 //10^-9
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,no=0,ne=0;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2==0)
                ne++;
            else
                no++;
        }
        if(no==0)
            cout << "no";
        else if(x%2==1)
        {
            if(x<no)
                cout << "yes";
            else
            {
                if(no%2==1)
                    cout << "yes";
                else
                {
                    if(x==n)
                        cout << "no";
                    else
                        cout << "yes";
                }
            }
        }
        else
        {
            if(x>=no)
            {
                if(no%2==1)
                    cout << "yes";
                else
                {
                    if(x<n)
                        cout << "yes";
                    else
                        cout << "no";
                }
            }
            else
            {
                if(ne==0)
                    cout << "no";
                else
                    cout << "yes";
            }
        }
        cout << endl;


    }
    return 0;
}
