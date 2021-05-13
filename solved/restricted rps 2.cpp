#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string ans[t];
    bool y[t];
    for(int i=0;i<t;i++)
    {
        int n,a,b,c,x=0,reqWins;
        string str;
        cin >> n >>a >>b >>c;

            reqWins = ((n/2)+1);

        cin >> str;
        for(int j=0;j<n;j++)
        {
            if(str[j]=='R'&&b>0)
            {
                ans[i]+='P';
                b--;
            }
            else if(str[j]=='P'&&c>0)
            {
                ans[i]+='S';
                c--;
            }
            else if(str[j]=='S'&&a>0)
            {
                ans[i]+='R';
                a--;
            }
            else
            {
                ans[i]+='$';
                x++;
            }
        }
        if(x<reqWins)
        {
            y[i] = true;
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]=='$'&&a>0)
                {
                    ans[i][j]='R';
                    a--;
                }
                else if(ans[i][j]=='$'&&b>0)
                {
                    ans[i][j]='P';
                    b--;
                }
                else if(ans[i][j]=='$'&&c>0)
                {
                    ans[i][j]='S';
                    c--;
                }
                else
                {
                }
            }
        }
        else
        {
            y[i]=false;
        }

    }
    for(int i=0;i<t;i++)
    {
        if(y[i]==true)
        {
            cout << "YES"<<endl;
            cout << ans[i]<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
