#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        bool ans[26];
        for(int i=0;i<26;i++)
            ans[i] = false;
        int n = a.length(),c=2;
        for(int i=0;i<n-1;i++)
        {
            if(a.at(i)!=a.at(i+1))
            {
                ans[a.at(i)-97] = false;
                break;
            }
            else
            {
                if(n%2==1)
                    ans[a.at(i)-97] = true;
            }
        }
        if(n>2)
        {
            for(int i=0;i<n-1;i+=c)
            {
                if(a.at(i)==a.at(i+1))
                {
                    c = 2;
                }
                else
                {
                    ans[a.at(i)-97] = true;
                    c = 1;
                }
            }
            if(a.at(n-1)!=a.at(n-2))
                ans[a.at(n-1)-97] = true;
            for(int i=n-1;i>1;i-=c)
            {
                if(a.at(i)==a.at(i-1))
                {
                    c = 2;
                }
                else
                {
                    ans[a.at(i)-97] = true;
                    c = 1;
                }
            }
            if(a.at(0)!=a.at(1))
                ans[a.at(0)-97] = true;
        }
        else if(n ==2)
        {
            if(a.at(0)!=a.at(1))
            {
                ans[a.at(0)-97] = true;
                ans[a.at(1)-97] = true;
            }
        }
        else
            ans[a.at(0)-97] = true;

        for(int i=0;i<26;i++)
        {
            if(ans[i])
                cout << char('a'+i);
        }
        cout << endl;
    }
    return 0;
}
