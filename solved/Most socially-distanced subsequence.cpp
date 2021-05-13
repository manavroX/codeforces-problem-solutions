#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define INF 1000000000 // 10^9
#define EPS 0.000000001 //10^-9
#define endl "\n"
using namespace std;
int32_t main()
{
    ios;
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            a.pb(x);
        }
        if(a.size()==2)
        {
            cout << 2 << endl;
            cout << a.at(0) << " " << a.at(1) << endl;
            continue;
        }
        for(int i=1;(i<(a.size()-1)&& a.size()>2);i++)
        {
            if((a.at(i-1)<=a.at(i))&&(a.at(i)<=a.at(i+1)))
            {
                a.erase(a.begin()+i);
                i--;
                continue;
            }
            if(a.size()==2)
                break;
            if((a.at(i-1)>=a.at(i))&&(a.at(i)>=a.at(i+1)))
            {
                a.erase(a.begin()+i);
                i--;
            }
            if(a.size()==2)
                break;
        }
        cout << a.size() << endl;
        for(int i=0;i<a.size();i++)
        {
            cout << a.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
