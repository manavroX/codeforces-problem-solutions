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
        int n,firstOne = -1,lastZero = -1;//all the elements between first one and last zero can be deleted
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                firstOne = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--)
        {
            if(s[i] == '0')
            {
                lastZero = i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(firstOne>lastZero||firstOne<0||lastZero<0)
                {cout << s;
                break;
                }
            else
            {
                if(i<firstOne||i>lastZero)
                    cout << s[i];
                if(i == firstOne)
                    cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}
