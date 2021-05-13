#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n,a,b,c,x=0;
    cin >> t;

    vector<char> ans[t];
    bool y[t];
    for(int i=0;i<t;i++)
    {
        cin >> n >> a >> b >> c;
        char str[n];
        cin >> str;
        for(int j=0;j<n;j++)
        {
            if(str[j]=='R')
            {
                ans[i].push_back('P');
                a--;
            }
            else if(str[j]=='P')
            {
                ans[i].push_back('S');
                b--;
            }
            else if(str[j]=='S')
            {
                ans[i].push_back('R');
                c--;
            }
            else
            {
                ans[i].push_back('$');
                x++;
            }
        }
        if(x<=((n/2)+1))
        {
            y[i]=true;
            for(int j=0;j<n;j++)
            {
                if(ans[j][i]=='$'&&a>0)
                {
                    ans[j][i]='R';
                    a--;
                }
                if(ans[j][i]=='$'&&b>0)
                {
                    ans[j][i]='P';
                    b--;
                }
                if(ans[j][i]=='$'&&c>0)
                {
                    ans[j][i]='S';
                    c--;
                }
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        if(y[i])
        {
            cout << "YES"<<endl;
            for(int j=0;j<ans[i].size();i++)
                cout << ans[j][i];
            cout << "\b";
            cout << endl;
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
