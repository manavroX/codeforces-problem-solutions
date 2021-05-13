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
        int n,k,ans = 0,x;
        cin >> n >> k;
        vector<int> i;
        vector <int> ipf;// i = integers, ipf = integers per friend
        for(int j=0;j<n;j++)
        {
            cin >> x;
            i.pb(x);
        }
        for(int j=0;j<k;j++)
        {
            cin >> x;
            ipf.pb(x);
        }

        sort(i.begin(),i.end());
        sort(ipf.begin(),ipf.end());

        for(int j=0;j<ipf.size();j++)
        {
            if(ipf.at(j)==1)
            {   ans+=2*i.back();
                ipf.erase(ipf.begin());
                j--;
            }
            else
                ans+=i.back();
            //cout << i.back() << " ";
            ipf.at(j)--;
            /*if(ipf.at(j)==0)
            {
                ans+=i.back();
                //cout << i.back() << " ";
                ipf.erase(ipf.begin());
                j--;
            }*/
            i.pop_back();
        }

        for(int j = 0;j<i.size();j++)
        {
                --ipf.at(j);
                if(ipf.at(j)==0)
                {
                    ans+=i.back();
                    //cout << i.back() << " ";
                    ipf.erase(ipf.begin());
                    j--;
                }
                i.pop_back();
                if(j==ipf.size()-1)
                    j=0;
        }
        ans+=i.at(0);
        //cout << i.at(0) << endl;
        cout << ans << endl;
    }
    return 0;
}
