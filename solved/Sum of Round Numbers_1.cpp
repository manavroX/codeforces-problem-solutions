#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k=0,len=0,x;
        vector<int> ans;
        cin >> n;
        for(int i=1;i<n;i*=10)
        {
            if(i<=n)
            {
                len++;
            }
            else
                break;
        }
        for(int i=1;i<=len;i++)
        {
            x = pow(10,i);
            if(n%x!=0)
            {
                k++;
                ans.push_back(n%x);
                n=n-n%x;
            }
        }
        if(k==0)
            cout << "1" << endl << n;
        else
        {
            cout << k << endl;
        }
        for(int i=0;i<ans.size();i++)
        {
            cout << ans.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}

